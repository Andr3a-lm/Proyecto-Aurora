#pragma once

#include "CreateFlight.h"
#include "ModificarVuelo.h"
#include "TicketsDb.h"

namespace AeropuertosAurora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FlightsListForm : public System::Windows::Forms::Form
	{
	public:
		FlightsListForm(void)
		{
			InitializeComponent();
		}

	protected:
		~FlightsListForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ titleLabel;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker;
	private: System::Windows::Forms::FlowLayoutPanel^ flightsFlowPanel;
	private: System::Windows::Forms::Button^ refreshButton;
	private: System::Windows::Forms::Button^ newFlightButton;
	private: System::Windows::Forms::Button^ editFlightButton;
	private: Panel^ selectedFlightPanel;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->titleLabel = (gcnew System::Windows::Forms::Label());
			   this->backgroundWorker = (gcnew System::ComponentModel::BackgroundWorker());
			   this->flightsFlowPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->refreshButton = (gcnew System::Windows::Forms::Button());
			   this->newFlightButton = (gcnew System::Windows::Forms::Button());
			   this->editFlightButton = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // titleLabel
			   // 
			   this->titleLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26, System::Drawing::FontStyle::Bold));
			   this->titleLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				   static_cast<System::Int32>(static_cast<System::Byte>(80)));
			   this->titleLabel->Location = System::Drawing::Point(12, 9);
			   this->titleLabel->Name = L"titleLabel";
			   this->titleLabel->Size = System::Drawing::Size(1089, 55);
			   this->titleLabel->TabIndex = 0;
			   this->titleLabel->Text = L"Vuelos Disponibles";
			   this->titleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // flightsFlowPanel
			   // 
			   this->flightsFlowPanel->AutoScroll = true;
			   this->flightsFlowPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)),
				   static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			   this->flightsFlowPanel->Location = System::Drawing::Point(20, 80);
			   this->flightsFlowPanel->Name = L"flightsFlowPanel";
			   this->flightsFlowPanel->Size = System::Drawing::Size(1049, 550);
			   this->flightsFlowPanel->TabIndex = 1;
			   this->flightsFlowPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FlightsListForm::flightsFlowPanel_Paint);
			   // 
			   // refreshButton
			   // 
			   this->refreshButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				   static_cast<System::Int32>(static_cast<System::Byte>(219)));
			   this->refreshButton->FlatAppearance->BorderSize = 0;
			   this->refreshButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->refreshButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->refreshButton->ForeColor = System::Drawing::Color::White;
			   this->refreshButton->Location = System::Drawing::Point(950, 35);
			   this->refreshButton->Name = L"refreshButton";
			   this->refreshButton->Size = System::Drawing::Size(120, 32);
			   this->refreshButton->TabIndex = 2;
			   this->refreshButton->Text = L"Actualizar";
			   this->refreshButton->UseVisualStyleBackColor = false;
			   this->refreshButton->Click += gcnew System::EventHandler(this, &FlightsListForm::refreshButton_Click);
			   // 
			   // newFlightButton
			   // 
			   this->newFlightButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				   static_cast<System::Int32>(static_cast<System::Byte>(113)));
			   this->newFlightButton->FlatAppearance->BorderSize = 0;
			   this->newFlightButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->newFlightButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->newFlightButton->ForeColor = System::Drawing::Color::White;
			   this->newFlightButton->Location = System::Drawing::Point(40, 35);
			   this->newFlightButton->Name = L"newFlightButton";
			   this->newFlightButton->Size = System::Drawing::Size(140, 32);
			   this->newFlightButton->TabIndex = 3;
			   this->newFlightButton->Text = L"Nuevos Vuelos";
			   this->newFlightButton->UseVisualStyleBackColor = false;
			   this->newFlightButton->Click += gcnew System::EventHandler(this, &FlightsListForm::newFlightButton_Click);
			   // 
			   // editFlightButton
			   // 
			   this->editFlightButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				   static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			   this->editFlightButton->FlatAppearance->BorderSize = 0;
			   this->editFlightButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->editFlightButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->editFlightButton->ForeColor = System::Drawing::Color::White;
			   this->editFlightButton->Location = System::Drawing::Point(200, 35);
			   this->editFlightButton->Name = L"editFlightButton";
			   this->editFlightButton->Size = System::Drawing::Size(160, 32);
			   this->editFlightButton->TabIndex = 4;
			   this->editFlightButton->Text = L"Editar Vuelos";
			   this->editFlightButton->UseVisualStyleBackColor = false;
			   this->editFlightButton->Click += gcnew System::EventHandler(this, &FlightsListForm::editFlightButton_Click);
			   // 
			   // FlightsListForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				   static_cast<System::Int32>(static_cast<System::Byte>(241)));
			   this->ClientSize = System::Drawing::Size(1089, 657);
			   this->Controls->Add(this->editFlightButton);
			   this->Controls->Add(this->newFlightButton);
			   this->Controls->Add(this->refreshButton);
			   this->Controls->Add(this->flightsFlowPanel);
			   this->Controls->Add(this->titleLabel);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->MaximizeBox = false;
			   this->Name = L"FlightsListForm";
			   this->Text = L"FlightsListForm";
			   this->Load += gcnew System::EventHandler(this, &FlightsListForm::FlightsListForm_Load);
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private: System::Void flightsFlowPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}

	private: System::Void refreshButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->flightsFlowPanel->Controls->Clear();

		TicketsDb^ db = gcnew TicketsDb();
		List<Ticket^>^ tickets = db->MostrarTodosLosTickets();

		for each (Ticket ^ ticket in tickets) {
			System::Windows::Forms::Panel^ flightPanel = gcnew System::Windows::Forms::Panel();
			flightPanel->Width = 1000;
			flightPanel->Height = 90;
			flightPanel->BackColor = System::Drawing::Color::White;
			flightPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			flightPanel->Margin = System::Windows::Forms::Padding(10);

			int col1 = 10, col2 = 180, col3 = 350, col4 = 520, col5 = 690, col6 = 860;
			int row1 = 10, row2 = 35, row3 = 60;

			System::Windows::Forms::Label^ clientLabel = gcnew System::Windows::Forms::Label();
			clientLabel->Text = "Client: " + ticket->clienteName;
			clientLabel->Location = System::Drawing::Point(col1, row1);
			clientLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 10, FontStyle::Bold);
			clientLabel->AutoSize = true;

			System::Windows::Forms::Label^ originLabel = gcnew System::Windows::Forms::Label();
			originLabel->Text = "Origin: " + ticket->inicio;
			originLabel->Location = System::Drawing::Point(col2, row1);
			originLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 10);
			originLabel->AutoSize = true;

			System::Windows::Forms::Label^ destinationLabel = gcnew System::Windows::Forms::Label();
			destinationLabel->Text = "Destination: " + ticket->destino;
			destinationLabel->Location = System::Drawing::Point(col3, row1);
			destinationLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 10);
			destinationLabel->AutoSize = true;

			System::Windows::Forms::Label^ flightLabel = gcnew System::Windows::Forms::Label();
			flightLabel->Text = "Flight: " + ticket->vuelo;
			flightLabel->Location = System::Drawing::Point(col4, row1);
			flightLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 10);
			flightLabel->AutoSize = true;

			System::Windows::Forms::Label^ dateLabel = gcnew System::Windows::Forms::Label();
			dateLabel->Text = "Date: " + ticket->fechaAbordaje;
			dateLabel->Location = System::Drawing::Point(col5, row1);
			dateLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 10);
			dateLabel->AutoSize = true;

			System::Windows::Forms::Label^ boardingTimeLabel = gcnew System::Windows::Forms::Label();
			boardingTimeLabel->Text = "Boarding: " + ticket->horaAbordaje;
			boardingTimeLabel->Location = System::Drawing::Point(col6, row1);
			boardingTimeLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 10);
			boardingTimeLabel->AutoSize = true;

			System::Windows::Forms::Button^ cancelButton = gcnew System::Windows::Forms::Button();
			cancelButton->Text = "Cancel Flight";
			cancelButton->BackColor = System::Drawing::Color::FromArgb(231, 76, 60);
			cancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			cancelButton->FlatAppearance->BorderSize = 0;
			cancelButton->Font = gcnew System::Drawing::Font(L"Segoe UI", 9, FontStyle::Bold);
			cancelButton->ForeColor = System::Drawing::Color::White;
			cancelButton->Location = System::Drawing::Point(col2, row3);
			cancelButton->Size = System::Drawing::Size(120, 28);
			cancelButton->Tag = ticket;
			cancelButton->Click += gcnew System::EventHandler(this, &FlightsListForm::cancelButton_Click);

			flightPanel->Controls->Add(clientLabel);
			flightPanel->Controls->Add(originLabel);
			flightPanel->Controls->Add(destinationLabel);
			flightPanel->Controls->Add(flightLabel);
			flightPanel->Controls->Add(dateLabel);
			flightPanel->Controls->Add(boardingTimeLabel);
			flightPanel->Controls->Add(cancelButton);

			this->flightsFlowPanel->Controls->Add(flightPanel);
		}
	}

	private: System::Void newFlightButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AeropuertosAurora::CreateFlight^ createFlightForm = gcnew AeropuertosAurora::CreateFlight();
		createFlightForm->ShowDialog(this);
	}

	private: System::Void editFlightButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ModificarVuelo^ editFlightForm = gcnew ModificarVuelo();
		editFlightForm->ShowDialog(this);
	}

	private: System::Void printButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = dynamic_cast<Button^>(sender);
		if (btn != nullptr && btn->Tag != nullptr) {
			Ticket^ ticket = dynamic_cast<Ticket^>(btn->Tag);
			if (ticket != nullptr) {
				Form^ boardingPassForm = gcnew Form();
				boardingPassForm->Text = "Boarding Pass";
				boardingPassForm->Size = Drawing::Size(800, 370);
				boardingPassForm->StartPosition = FormStartPosition::CenterParent;
				boardingPassForm->MaximizeBox = false;

				Panel^ mainPanel = gcnew Panel();
				mainPanel->Dock = DockStyle::Fill;
				mainPanel->BackColor = System::Drawing::Color::White;

				Label^ title = gcnew Label();
				title->Text = "BOARDING PASS";
				title->Font = gcnew Drawing::Font("Segoe UI", 18, FontStyle::Bold);
				title->ForeColor = System::Drawing::Color::FromArgb(0, 153, 255);
				title->Location = Drawing::Point(20, 10);
				title->AutoSize = true;

				Label^ name = gcnew Label();
				name->Text = ticket->clienteName->ToUpper();
				name->Font = gcnew Drawing::Font("Segoe UI", 14, FontStyle::Regular);
				name->Location = Drawing::Point(20, 60);
				name->AutoSize = true;

				Label^ route = gcnew Label();
				route->Text = ticket->inicio->ToUpper() + "   ->   " + ticket->destino->ToUpper();
				route->Font = gcnew Drawing::Font("Segoe UI", 12, FontStyle::Bold);
				route->Location = Drawing::Point(20, 90);
				route->AutoSize = true;

				String^ codeOrigin = ticket->inicio->Length >= 3 ? ticket->inicio->Substring(0, 3)->ToUpper() : ticket->inicio->ToUpper();
				String^ codeDestination = ticket->destino->Length >= 3 ? ticket->destino->Substring(0, 3)->ToUpper() : ticket->destino->ToUpper();

				Label^ codes = gcnew Label();
				codes->Text = codeOrigin + "        " + codeDestination;
				codes->Font = gcnew Drawing::Font("Segoe UI", 22, FontStyle::Bold);
				codes->Location = Drawing::Point(20, 120);
				codes->AutoSize = true;

				Label^ date = gcnew Label();
				date->Text = "Date: " + ticket->fechaAbordaje + "    Reservation Code: " + ticket->reservacion;
				date->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Regular);
				date->Location = Drawing::Point(20, 170);
				date->AutoSize = true;

				Label^ ticketNum = gcnew Label();
				ticketNum->Text = "Ticket No.: " + ticket->bookingNumber;
				ticketNum->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Regular);
				ticketNum->Location = Drawing::Point(20, 190);
				ticketNum->AutoSize = true;

				Label^ details = gcnew Label();
				details->Text = "Boarding: " + ticket->horaAbordaje +
					"    Departure: " + ticket->fechaAbordaje +
					"    Arrival: " + ticket->horaLlegada +
					"    Flight: " + ticket->vuelo +
					"    Seat: " + ticket->asiento +
					"    Operated by: " + ticket->operador;
				details->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Regular);
				details->Location = Drawing::Point(20, 220);
				details->AutoSize = true;

				Label^ note = gcnew Label();
				note->Text = "Arrive at the airport 2 hours before departure. Boarding starts 45 minutes before departure.\nThe gate closes 15 minutes before departure.";
				note->Font = gcnew Drawing::Font("Segoe UI", 9, FontStyle::Bold);
				note->Location = Drawing::Point(20, 270);
				note->Size = Drawing::Size(700, 40);

				mainPanel->Controls->Add(title);
				mainPanel->Controls->Add(name);
				mainPanel->Controls->Add(route);
				mainPanel->Controls->Add(codes);
				mainPanel->Controls->Add(date);
				mainPanel->Controls->Add(ticketNum);
				mainPanel->Controls->Add(details);
				mainPanel->Controls->Add(note);

				boardingPassForm->Controls->Add(mainPanel);
				boardingPassForm->ShowDialog();
			}
		}
	}

	private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = dynamic_cast<Button^>(sender);
		if (btn != nullptr && btn->Tag != nullptr) {
			Ticket^ ticket = dynamic_cast<Ticket^>(btn->Tag);
			if (ticket != nullptr) {
				String^ ticketInfo =
					"===== FLIGHT INFORMATION =====\n\n" +
					"Origin: " + ticket->inicio + "\n" +
					"Destination: " + ticket->destino + "\n" +
					"Flight: " + ticket->vuelo + "\n" +
					"Boarding Date: " + ticket->fechaAbordaje + "\n" +
					"Boarding Time: " + ticket->horaAbordaje + "\n" +
					"Arrival Time: " + ticket->horaLlegada + "\n" +
					"Reservation: " + ticket->reservacion + "\n" +
					"Ticket No.: " + ticket->bookingNumber + "\n" +
					"Seat: " + ticket->asiento + "\n" +
					"Operator: " + ticket->operador;

				if (MessageBox::Show(ticketInfo + "\n\nAre you sure you want to cancel this flight?",
					"Confirm Cancellation", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {

					TicketsDb^ db = gcnew TicketsDb();
					bool deleted = db->DeleteTicket(System::Convert::ToInt32(ticket->vuelo));

					if (deleted) {
						MessageBox::Show("Flight cancelled successfully.", "Cancellation", MessageBoxButtons::OK, MessageBoxIcon::Information);
						refreshButton_Click(nullptr, nullptr);
					}
					else {
						MessageBox::Show("Could not cancel the flight.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
			}
		}
	}
	private: System::Void FlightsListForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
