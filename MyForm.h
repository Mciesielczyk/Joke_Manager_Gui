#pragma once
#include "get_access_URL.h"
#include <string>
#include <msclr/marshal_cppstd.h>
#include "JokeManager.h"
#pragma warning(disable : 4996)
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
		/*MyForm(JokeManager* manager) {
			InitializeComponent();
			jokeManager = manager;
		}*/
		MyForm(Form^ mainForm)  // Modified constructor to accept main form reference
		{
			InitializeComponent();
			this->mainForm = mainForm;

		}
		//JokeManager* jokeManager;

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

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button4;



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->BackColor = System::Drawing::Color::Tomato;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
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
			this->label1->Location = System::Drawing::Point(373, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 127);
			this->label1->TabIndex = 3;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(450, 486);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Return";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(31, 133);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(228, 79);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Add joke";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(373, 259);
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
			this->label2->Location = System::Drawing::Point(290, 261);
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
			this->label3->Location = System::Drawing::Point(290, 304);
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
			this->checkedListBox1->Location = System::Drawing::Point(373, 304);
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
			this->label4->Location = System::Drawing::Point(290, 460);
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
			this->label5->Location = System::Drawing::Point(369, 460);
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
			this->label6->Location = System::Drawing::Point(280, 35);
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
			this->label7->Location = System::Drawing::Point(327, 356);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"0";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(629, 112);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(614, 317);
			this->dataGridView1->TabIndex = 15;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->DataPropertyName = L"int";
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 35;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Content";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column2->Width = 300;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Type";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column3->Width = 50;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Rating";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 50;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Date";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 125;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(75, 464);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(10, 16);
			this->label8->TabIndex = 16;
			this->label8->Text = L".";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click_1);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(31, 249);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(228, 75);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Save to file\r\n";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1314, 566);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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

	    bool ifExist(int id) {
			bool idExist = true;
			for (int i = 0; i < dataGridView1->Rows->Count; i++)
				{
					int id1 = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells["Column1"]->Value);
					if (id1 == id) {
						return false;
						break;
					}

				}
			return true;
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
				label8->Text = gcnew String(dateAdded.c_str());

				Jokes joke("sfderf", "sdf", "sdfg", 2, 2);
				//label8->Text = joke.getID().ToString();
				
				if (ifExist(System::Convert::ToInt32(label5->Text))) {
					JokeManager jokeManager;
		
					jokeManager.addJoke(joke);
					//if (jokeManager != nullptr) {
					//	// Dodanie dowcipu do jokeManager
					//	jokeManager->addJoke(joke);

					//	// Zamknięcie formularza
					//	this->Close();
					//}
					//else {
					//	// Obsługa błędu, jeśli jokeManager nie jest zainicjalizowany
					//	MessageBox::Show("Błąd: JokeManager nie został zainicjalizowany!");
					//}
					int newRowIndex = dataGridView1->Rows->Add();

					dataGridView1->Rows[newRowIndex]->Cells["Column1"]->Value = ID; // Ustaw wartość komórki w nowym wierszu
					dataGridView1->Rows[newRowIndex]->Cells["Column2"]->Value = (label1->Text);
					dataGridView1->Rows[newRowIndex]->Cells["Column3"]->Value = (textBox1->Text);
					dataGridView1->Rows[newRowIndex]->Cells["Column4"]->Value = rating;
					dataGridView1->Rows[newRowIndex]->Cells["Column5"]->Value = (label8->Text);
				}

				
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

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label8_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	savetofile(dataGridView1, "JokeFile");
}
};
}
