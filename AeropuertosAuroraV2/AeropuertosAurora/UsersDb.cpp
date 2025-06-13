#include "UsersDb.h"
#include <mysql.h>
#include <string>
#include <stdexcept>

using namespace System;
using namespace std;

UsersDb::UsersDb() {
	// Constructor vacío
}

UsersDb::~UsersDb() {
	// Destructor vacío
}

bool UsersDb::AuthenticateUser(System::String^ email, System::String^ password) {
	Console::WriteLine("Iniciando AuthenticateUser...");

	IntPtr emailPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(email);
	IntPtr passPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(password);

	std::string emailStr = static_cast<char*>(emailPtr.ToPointer());
	std::string passStr = static_cast<char*>(passPtr.ToPointer());

	Console::WriteLine("Email: " + email);
	Console::WriteLine("Password: " + password);

	MYSQL* conn = mysql_init(nullptr);
	if (!conn) {
		Console::WriteLine("Error: mysql_init falló.");
		return false;
	}

	Console::WriteLine("Conectando a la base de datos...");
	if (!mysql_real_connect(conn, "127.0.0.1", "root", "root123", "aeroaurora", 3306, nullptr, 0)) {
		Console::WriteLine("Error: No se pudo conectar a la base de datos.");
		mysql_close(conn);
		return false;
	}
	Console::WriteLine("Conexión establecida con éxito.");

	std::string query = "SELECT COUNT(*) FROM cuentas WHERE email='" + emailStr + "' AND password='" + passStr + "'";
	Console::WriteLine("Ejecutando query: " + gcnew String(query.c_str()));

	if (mysql_query(conn, query.c_str())) {
		Console::WriteLine("Error en la ejecución del query.");
		mysql_close(conn);
		return false;
	}

	MYSQL_RES* res = mysql_store_result(conn);
	if (!res) {
		Console::WriteLine("Error al obtener resultados de la consulta.");
		mysql_close(conn);
		return false;
	}

	MYSQL_ROW row = mysql_fetch_row(res);
	bool authenticated = (row && atoi(row[0]) > 0);

	Console::WriteLine("Resultado de autenticación: " + (authenticated ? "Autenticado" : "No autenticado"));

	mysql_free_result(res);
	mysql_close(conn);

	System::Runtime::InteropServices::Marshal::FreeHGlobal(emailPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(passPtr);

	return authenticated;
}

bool UsersDb::InsertUser(System::String^ password, System::String^ email) {
	Console::WriteLine("Iniciando InsertUser...");

	try {
		IntPtr emailPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(email);
		IntPtr passPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(password);
		std::string emailStr = static_cast<char*>(emailPtr.ToPointer());
		std::string passStr = static_cast<char*>(passPtr.ToPointer());

		Console::WriteLine("Email: " + email);
		Console::WriteLine("Password: " + password);

		MYSQL* conn = mysql_init(nullptr);
		if (!conn) throw std::runtime_error("No se pudo inicializar la conexión MySQL.");

		Console::WriteLine("Conectando a la base de datos...");
		if (!mysql_real_connect(conn, "localhost", "root", "root123", "aeroaurora", 3306, nullptr, 0)) {
			mysql_close(conn);
			throw std::runtime_error("Error al conectar a la base de datos.");
		}
		Console::WriteLine("Conexión establecida con éxito.");

		std::string query = "INSERT INTO cuentas (email, password) VALUES ('" + emailStr + "', '" + passStr + "')";
		Console::WriteLine("Ejecutando query: " + gcnew String(query.c_str()));

		bool success = (mysql_query(conn, query.c_str()) == 0);

		Console::WriteLine("Resultado de inserción: " + (success ? "Éxito" : "Fallo"));

		mysql_close(conn);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(emailPtr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(passPtr);

		return success;
	}
	catch (const std::exception& ex) {
		Console::WriteLine("Error en InsertUser: " + gcnew System::String(ex.what()));
		return false;
	}
}
