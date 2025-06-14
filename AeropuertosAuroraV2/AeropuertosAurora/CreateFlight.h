#pragma once
#include "TicketsDb.h"

namespace AeropuertosAurora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateFlight
	/// </summary>
	public ref class CreateFlight : public System::Windows::Forms::Form
	{
	public:
		CreateFlight(void)
		{
			InitializeComponent();
			// Estilos visuales personalizados
			this->BackColor = System::Drawing::Color::FromArgb(240, 248, 255);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));

			this->button1->BackColor = System::Drawing::Color::FromArgb(0, 120, 215);
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;

			this->button2->BackColor = System::Drawing::Color::FromArgb(220, 53, 69);
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;

			this->inicioInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->destinoInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AsientoInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->operadorInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bookinNumber->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->reseInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->VuelosInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->clienteNameInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

			// Panel de encabezado
			System::Windows::Forms::Panel^ headerPanel = gcnew System::Windows::Forms::Panel();
			headerPanel->BackColor = System::Drawing::Color::FromArgb(0, 120, 215);
			headerPanel->Dock = System::Windows::Forms::DockStyle::Top;
			headerPanel->Height = 65;
			this->Controls->Add(headerPanel);
			this->label2->Parent = headerPanel;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(30, 15);
			this->label2->BringToFront();
		}

	protected:
		~CreateFlight()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ inicioInput;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ destinoInput;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ fechaAbordajeInput;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ horaAbordajeInput;
	private: System::Windows::Forms::TextBox^ AsientoInput;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ operadorInput;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ bookinNumber;
	private: System::Windows::Forms::Label^ bookingNumber;
	private: System::Windows::Forms::DateTimePicker^ horaLlegada;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ reseInput;
	private: System::Windows::Forms::Label^ ReservacionInput;
	private: System::Windows::Forms::TextBox^ VuelosInput;
	private: System::Windows::Forms::Label^ Vuelo;
	private: System::Windows::Forms::TextBox^ clienteNameInput;
	private: System::Windows::Forms::Label^ Client;

	protected:
	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inicioInput = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->destinoInput = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->fechaAbordajeInput = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->horaAbordajeInput = (gcnew System::Windows::Forms::DateTimePicker());
			this->AsientoInput = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->operadorInput = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->bookinNumber = (gcnew System::Windows::Forms::TextBox());
			this->bookingNumber = (gcnew System::Windows::Forms::Label());
			this->horaLlegada = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->reseInput = (gcnew System::Windows::Forms::TextBox());
			this->ReservacionInput = (gcnew System::Windows::Forms::Label());
			this->VuelosInput = (gcnew System::Windows::Forms::TextBox());
			this->Vuelo = (gcnew System::Windows::Forms::Label());
			this->clienteNameInput = (gcnew System::Windows::Forms::TextBox());
			this->Client = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(190, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Inicio";
			this->label1->Click += gcnew System::EventHandler(this, &CreateFlight::label1_Click);
			// 
			// inicioInput
			// 
			this->inicioInput->Location = System::Drawing::Point(194, 113);
			this->inicioInput->Name = L"inicioInput";
			this->inicioInput->Size = System::Drawing::Size(169, 20);
			this->inicioInput->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(286, 41);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Creador de boletos";
			// 
			// destinoInput
			// 
			this->destinoInput->Location = System::Drawing::Point(194, 166);
			this->destinoInput->Name = L"destinoInput";
			this->destinoInput->Size = System::Drawing::Size(169, 20);
			this->destinoInput->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(190, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 21);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Destino";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(190, 195);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 21);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Fecha de abordaje";
			this->label4->Click += gcnew System::EventHandler(this, &CreateFlight::label4_Click);
			// 
			// fechaAbordajeInput
			// 
			this->fechaAbordajeInput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fechaAbordajeInput->Location = System::Drawing::Point(194, 218);
			this->fechaAbordajeInput->Name = L"fechaAbordajeInput";
			this->fechaAbordajeInput->Size = System::Drawing::Size(169, 23);
			this->fechaAbordajeInput->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(190, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 21);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Hora de abordaje";
			// 
			// horaAbordajeInput
			// 
			this->horaAbordajeInput->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->horaAbordajeInput->Location = System::Drawing::Point(194, 282);
			this->horaAbordajeInput->Name = L"horaAbordajeInput";
			this->horaAbordajeInput->ShowUpDown = true;
			this->horaAbordajeInput->Size = System::Drawing::Size(169, 20);
			this->horaAbordajeInput->TabIndex = 8;
			this->horaAbordajeInput->ValueChanged += gcnew System::EventHandler(this, &CreateFlight::horaAbordajeInput_ValueChanged);
			// 
			// AsientoInput
			// 
			this->AsientoInput->Location = System::Drawing::Point(194, 334);
			this->AsientoInput->Name = L"AsientoInput";
			this->AsientoInput->Size = System::Drawing::Size(169, 20);
			this->AsientoInput->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(190, 311);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 21);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Asiento";
			// 
			// operadorInput
			// 
			this->operadorInput->Location = System::Drawing::Point(194, 397);
			this->operadorInput->Name = L"operadorInput";
			this->operadorInput->Size = System::Drawing::Size(169, 20);
			this->operadorInput->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(190, 374);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 21);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Operador";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(259, 499);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 35);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Crear Boleto";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CreateFlight::button1_Click);
			// 
			// button2
			// 
			this->button2->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button2->Location = System::Drawing::Point(369, 499);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 35);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CreateFlight::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(30, 15);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(286, 41);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Creador de boletos";
			this->label8->Click += gcnew System::EventHandler(this, &CreateFlight::label8_Click);
			// 
			// bookinNumber
			// 
			this->bookinNumber->Location = System::Drawing::Point(369, 113);
			this->bookinNumber->Name = L"bookinNumber";
			this->bookinNumber->Size = System::Drawing::Size(169, 20);
			this->bookinNumber->TabIndex = 16;
			this->bookinNumber->TextChanged += gcnew System::EventHandler(this, &CreateFlight::bookinNumber_TextChanged);
			// 
			// bookingNumber
			// 
			this->bookingNumber->AutoSize = true;
			this->bookingNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bookingNumber->Location = System::Drawing::Point(365, 90);
			this->bookingNumber->Name = L"bookingNumber";
			this->bookingNumber->Size = System::Drawing::Size(141, 21);
			this->bookingNumber->TabIndex = 15;
			this->bookingNumber->Text = L"Numero de bookin";
			// 
			// horaLlegada
			// 
			this->horaLlegada->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->horaLlegada->Location = System::Drawing::Point(369, 166);
			this->horaLlegada->Name = L"horaLlegada";
			this->horaLlegada->ShowUpDown = true;
			this->horaLlegada->Size = System::Drawing::Size(169, 20);
			this->horaLlegada->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(365, 143);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(119, 21);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Hora de llegada";
			// 
			// reseInput
			// 
			this->reseInput->Location = System::Drawing::Point(369, 216);
			this->reseInput->Name = L"reseInput";
			this->reseInput->Size = System::Drawing::Size(169, 20);
			this->reseInput->TabIndex = 20;
			// 
			// ReservacionInput
			// 
			this->ReservacionInput->AutoSize = true;
			this->ReservacionInput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReservacionInput->Location = System::Drawing::Point(365, 193);
			this->ReservacionInput->Name = L"ReservacionInput";
			this->ReservacionInput->Size = System::Drawing::Size(94, 21);
			this->ReservacionInput->TabIndex = 19;
			this->ReservacionInput->Text = L"Reservacion";
			// 
			// VuelosInput
			// 
			this->VuelosInput->Location = System::Drawing::Point(369, 282);
			this->VuelosInput->Name = L"VuelosInput";
			this->VuelosInput->Size = System::Drawing::Size(169, 20);
			this->VuelosInput->TabIndex = 22;
			// 
			// Vuelo
			// 
			this->Vuelo->AutoSize = true;
			this->Vuelo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vuelo->Location = System::Drawing::Point(365, 259);
			this->Vuelo->Name = L"Vuelo";
			this->Vuelo->Size = System::Drawing::Size(50, 21);
			this->Vuelo->TabIndex = 21;
			this->Vuelo->Text = L"Vuelo";
			// 
			// clienteNameInput
			// 
			this->clienteNameInput->Location = System::Drawing::Point(369, 334);
			this->clienteNameInput->Name = L"clienteNameInput";
			this->clienteNameInput->Size = System::Drawing::Size(169, 20);
			this->clienteNameInput->TabIndex = 24;
			this->clienteNameInput->TextChanged += gcnew System::EventHandler(this, &CreateFlight::clienteNameInput_TextChanged);
			// 
			// Client
			// 
			this->Client->AutoSize = true;
			this->Client->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Client->Location = System::Drawing::Point(365, 311);
			this->Client->Name = L"Client";
			this->Client->Size = System::Drawing::Size(141, 21);
			this->Client->TabIndex = 23;
			this->Client->Text = L"Nombre de Cliente";
			// 
			// CreateFlight
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 627);
			this->Controls->Add(this->clienteNameInput);
			this->Controls->Add(this->Client);
			this->Controls->Add(this->VuelosInput);
			this->Controls->Add(this->Vuelo);
			this->Controls->Add(this->reseInput);
			this->Controls->Add(this->ReservacionInput);
			this->Controls->Add(this->horaLlegada);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->bookinNumber);
			this->Controls->Add(this->bookingNumber);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->operadorInput);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->AsientoInput);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->horaAbordajeInput);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->fechaAbordajeInput);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->destinoInput);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->inicioInput);
			this->Controls->Add(this->label1);
			this->Name = L"CreateFlight";
			this->Text = L"CreateFlight";
			this->Load += gcnew System::EventHandler(this, &CreateFlight::CreateFlight_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void horaAbordajeInput_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ inicio = inicioInput->Text;
		String^ destino = destinoInput->Text;
		String^ fechaAbordajeStr = fechaAbordajeInput->Value.ToString("yyyy-MM-dd");
		String^ horaAbordajeStr = horaAbordajeInput->Value.ToString("HH:mm:ss");
		String^ horaLlegadaStr = horaLlegada->Value.ToString("HH:mm:ss");
		String^ reservacion = reseInput->Text;
		String^ vuelo = VuelosInput->Text;
		String^ asiento = AsientoInput->Text;
		String^ operador = operadorInput->Text;
		String^ clienteName = clienteNameInput->Text;

		int bookingNumber;
		if (!System::Int32::TryParse(bookinNumber->Text, bookingNumber)) {
			MessageBox::Show("El n�mero de booking no es v�lido.");
			return;
		}

		if (inicio->Trim() == "" || destino->Trim() == "" || reservacion->Trim() == "" ||
			vuelo->Trim() == "" || asiento->Trim() == "" || operador->Trim() == "") {
			MessageBox::Show("Por favor, completa todos los campos obligatorios.");
			return;
		}

		try {
			TicketsDb^ db = gcnew TicketsDb();
			bool exito = db->CrearTicket(
				inicio,
				destino,
				fechaAbordajeStr,
				horaAbordajeStr,
				horaLlegadaStr,
				reservacion,
				bookingNumber,
				vuelo,
				asiento,
				operador,
				clienteName
			);

			if (exito) {
				MessageBox::Show("Boleto creado exitosamente.");
				this->Close();
			}
			else {
				MessageBox::Show("Error al crear el boleto en la base de datos.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ocurri� un error: " + ex->Message);
		}
	}

	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void clienteNameInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bookinNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CreateFlight_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
