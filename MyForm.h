#pragma once
#include "get_access_URL.h"
#include <string>
#include <msclr/marshal_cppstd.h>
#include "JokeManager.h"

namespace gui2 {
	//ref class Start;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Form^ mainForm;  // Reference to the main form

	
	public:
		MyForm(Form^ mainForm)  // Modified constructor to accept main form reference
		{
			InitializeComponent();
			this->mainForm = mainForm;

		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;




	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;
		// Dodane pole tekstowe informujące o rozpoczęciu dodawania

		   // Dodane pole tekstowe informujące o zamknięciu programu

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->BackColor = System::Drawing::Color::Tomato;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(31, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(228, 80);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Show me a joke\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(423, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 127);
			this->label1->TabIndex = 3;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(689, 481);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Return";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(78, 164);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 60);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Add joke";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(423, 256);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(174, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(340, 258);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Type :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(340, 301);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Rating :";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkedListBox1->ForeColor = System::Drawing::Color::LightYellow;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"🟌", L"🟌🟌", L"🟌🟌🟌", L"🟌🟌🟌🟌", L"🟌🟌🟌🟌🟌" });
			this->checkedListBox1->Location = System::Drawing::Point(423, 301);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(187, 136);
			this->checkedListBox1->TabIndex = 9;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(340, 457);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 100);
			this->label4->TabIndex = 10;
			this->label4->Text = L"ID :\r\n\r\n\r\n\r\n\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(419, 457);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(330, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Content :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(377, 353);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"0";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(57, 304);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"label8";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(840, 547);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


		//pookaz zart i id
	    private: void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			std::string z_id = wypisz_dane();
			std::string newstr;
			std::string idstr;

			for (int i = 0; i < z_id.size(); i++)
			{
				if (z_id[i] != ':') {
					newstr = newstr+z_id[i];
				}
				else {
					i=i+1;
					for (; i < z_id.size(); i++)
					{
						idstr = idstr+z_id[i];
					}
				}
			}
			label1->Text = gcnew String(newstr.c_str());
			label5->Text = gcnew String(idstr.c_str());

			
		}


		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
		}

		
		//return
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->mainForm->Show();  // Show the main form
			this->Hide();  // Hide the current form
		}

		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
			   }
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}


					  //dodaj joke
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
				// Pobieranie wartości z pól tekstowych
				
				std::string content = msclr::interop::marshal_as<std::string>(label1->Text);
				std::string type = msclr::interop::marshal_as<std::string>(textBox1->Text);
				time_t now = time(0);
				std::string dateAdded = ctime(&now);
				int rating = System::Convert::ToInt32(label7->Text);
				int ID = System::Convert::ToInt32(label5->Text);
	
				Jokes joke(content, type, dateAdded, rating, ID);
				//label8->Text = joke.getID().ToString();
				std::string dupa = joke.getData();
				label8->Text = gcnew System::String(dupa.c_str());

				JokeManager jokemanager;
				jokemanager.addJoke(joke);
				label1->Text = "";
				textBox1->Text = "";
				label7->Text = "";
				label5->Text = "";
				label8->Text = "";

		}
			   //wypisz joke caly
	   private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
		   
	   }

	   //rating
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int atLeastOneChecked = 0;
	int checkedIndex = -1;

	for (int i = 0; i < checkedListBox1->Items->Count; i++) {
		if (checkedListBox1->GetItemChecked(i)) {
			atLeastOneChecked++;
			checkedIndex = i;  // Zapisz indeks zaznaczonego elementu
			if (atLeastOneChecked > 1) {
				for (int i = 0; i < checkedListBox1->Items->Count; ++i) {
						checkedListBox1->SetItemChecked(i, false);
						checkedIndex = -1;
				}
			}
		}
	}

	
	checkedIndex = checkedIndex + 1;
	label7->Text = checkedIndex.ToString();

}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {

}

};
}
