#pragma once

#include "UsersDb.h"
#include "ListaDeVuelos.h"

namespace AeropuertosAurora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();

			// Estilos visuales personalizados
			this->BackColor = System::Drawing::Color::FromArgb(240, 248, 255);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));

			this->LoginButton->BackColor = System::Drawing::Color::FromArgb(0, 120, 215);
			this->LoginButton->ForeColor = System::Drawing::Color::White;
			this->LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;

			this->registerButton->BackColor = System::Drawing::Color::FromArgb(220, 53, 69);
			this->registerButton->ForeColor = System::Drawing::Color::White;
			this->registerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;

			this->inputUserName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passwordInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

			// Panel de encabezado
			System::Windows::Forms::Panel^ headerPanel = gcnew System::Windows::Forms::Panel();
			headerPanel->BackColor = System::Drawing::Color::FromArgb(0, 120, 215);
			headerPanel->Dock = System::Windows::Forms::DockStyle::Top;
			headerPanel->Height = 65;
			this->Controls->Add(headerPanel);
			this->label1->Parent = headerPanel;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(30, 15);
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->BringToFront();
		}

	protected:
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ inputUserName;
	private: System::Windows::Forms::Label^ Username;
	private: System::Windows::Forms::Label^ inputPassword;
	private: System::Windows::Forms::TextBox^ passwordInput;
	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::Button^ registerButton;

	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inputUserName = (gcnew System::Windows::Forms::TextBox());
			this->Username = (gcnew System::Windows::Forms::Label());
			this->inputPassword = (gcnew System::Windows::Forms::Label());
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(654, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Inicio de Sesion";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// inputUserName
			// 
			this->inputUserName->Location = System::Drawing::Point(201, 153);
			this->inputUserName->Name = L"inputUserName";
			this->inputUserName->Size = System::Drawing::Size(269, 25);
			this->inputUserName->TabIndex = 1;
			this->inputUserName->TextChanged += gcnew System::EventHandler(this, &LoginForm::inputUserName_TextChanged);
			// 
			// Username
			// 
			this->Username->AutoSize = true;
			this->Username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username->Location = System::Drawing::Point(89, 149);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(97, 25);
			this->Username->TabIndex = 2;
			this->Username->Text = L"Username";
			// 
			// inputPassword
			// 
			this->inputPassword->AutoSize = true;
			this->inputPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputPassword->Location = System::Drawing::Point(89, 204);
			this->inputPassword->Name = L"inputPassword";
			this->inputPassword->Size = System::Drawing::Size(106, 25);
			this->inputPassword->TabIndex = 3;
			this->inputPassword->Text = L"Contraseña";
			this->inputPassword->Click += gcnew System::EventHandler(this, &LoginForm::inputPassword_Click);
			// 
			// passwordInput
			// 
			this->passwordInput->Location = System::Drawing::Point(201, 208);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->Size = System::Drawing::Size(269, 25);
			this->passwordInput->TabIndex = 4;
			// 
			// LoginButton
			// 
			this->LoginButton->Location = System::Drawing::Point(201, 296);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(128, 35);
			this->LoginButton->TabIndex = 5;
			this->LoginButton->Text = L"Iniciar sesion";
			this->LoginButton->UseVisualStyleBackColor = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &LoginForm::LoginButton_Click);
			// 
			// registerButton
			// 
			this->registerButton->Location = System::Drawing::Point(342, 296);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(128, 35);
			this->registerButton->TabIndex = 6;
			this->registerButton->Text = L"Registrarse";
			this->registerButton->UseVisualStyleBackColor = false;
			this->registerButton->Click += gcnew System::EventHandler(this, &LoginForm::registerButton_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(712, 452);
			this->Controls->Add(this->registerButton);
			this->Controls->Add(this->LoginButton);
			this->Controls->Add(this->passwordInput);
			this->Controls->Add(this->inputPassword);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->inputUserName);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void inputUserName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ username = inputUserName->Text;
		String^ password = passwordInput->Text;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show(
				"Por favor, complete todos los campos.",
				"Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// add your authentication logic here
		UsersDb^ usersDb = gcnew UsersDb();
		if (!usersDb->AuthenticateUser(username, password)) {
			MessageBox::Show(
				"Credenciales incorrectas. Intente de nuevo.",
				"Error de autenticación",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		FlightsListForm^ vuelosForm = gcnew FlightsListForm();
		vuelosForm->ShowDialog();

		// Cuando se cierre ListaDeVuelos, muestra de nuevo el login (opcional)
		this->Show();
	}
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void inputPassword_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (inputUserName->Text->Length == 0 || passwordInput->Text->Length == 0) {
			MessageBox::Show(
				"Por favor, complete todos los campos.",
				"Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		UsersDb^ usersDb = gcnew UsersDb();

		if (usersDb->InsertUser(passwordInput->Text, inputUserName->Text)) {
			MessageBox::Show(
				"Usuario registrado exitosamente.",
				"Registro exitoso",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show(
				"Error al registrar el usuario. Intente de nuevo.",
				"Error de registro",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
