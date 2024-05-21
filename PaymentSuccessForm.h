#pragma once

#include "TrackOrderForm.h"

namespace PointofSaleSystem 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PaymentSuccessForm
	/// </summary>
	public ref class PaymentSuccessForm : public System::Windows::Forms::Form
	{
	public:
		PaymentSuccessForm(Form^ Home)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//


			// Store the reference to the Home form
			newhomeUI = Home;



			//
			// This will center the Form in the screen when it pop up
			//
			CenterToScreen();
		}


	// Declare a private member variable to hold the reference to the Home form
	private: Form^ newhomeUI;



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PaymentSuccessForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnGobackHome;


	private: System::Windows::Forms::Label^ label1;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PaymentSuccessForm::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnGobackHome = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(458, 129);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(302, 214);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// btnGobackHome
			// 
			this->btnGobackHome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->btnGobackHome->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGobackHome->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGobackHome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnGobackHome->Location = System::Drawing::Point(527, 477);
			this->btnGobackHome->Name = L"btnGobackHome";
			this->btnGobackHome->Size = System::Drawing::Size(162, 49);
			this->btnGobackHome->TabIndex = 13;
			this->btnGobackHome->Text = L"Done";
			this->btnGobackHome->UseVisualStyleBackColor = false;
			this->btnGobackHome->Click += gcnew System::EventHandler(this, &PaymentSuccessForm::btnViewOrder_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->label1->Location = System::Drawing::Point(507, 411);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 26);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Order #987654321";
			// 
			// PaymentSuccessForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->ClientSize = System::Drawing::Size(1250, 612);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGobackHome);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"PaymentSuccessForm";
			this->Text = L"PaymentSuccessForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnViewOrder_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();

		newhomeUI->Show();
	}
};
}
