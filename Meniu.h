#pragma once
#include "get_access_URL.h"
#include "JokeManager.h"
#using <System.dll>
#include "firebase.h"
#include <sstream>
#include <string>

namespace gui2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Podsumowanie informacji o Meniu
	/// </summary>
	public ref class Meniu : public System::Windows::Forms::Form
	{
	private:
		Form^ mainForm;  // Reference to the main form

	public:
		Meniu(Form^ mainForm)  // Modified constructor to accept main form reference
		{
			InitializeComponent();
			this->mainForm = mainForm;

			player = gcnew SoundPlayer();
			player->SoundLocation = "C:\\Users\\micha\\Desktop\\projekt\\bin\\wav\\example.wav";

		}
	
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Meniu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
    SoundPlayer^ player;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Meniu::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1240, 578);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 35);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Return";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Meniu::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(410, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(800, 423);
			this->dataGridView1->TabIndex = 16;
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(37, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 66);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Uptade table\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Meniu::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(36, 348);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(174, 61);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Sort by:\r\n";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Meniu::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(37, 236);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(174, 59);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Remove";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Meniu::button4_Click);
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Items->Add(L"ID");
			this->domainUpDown1->Items->Add(L"Rating");
			this->domainUpDown1->Items->Add(L"Date");
			this->domainUpDown1->Location = System::Drawing::Point(230, 372);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(137, 22);
			this->domainUpDown1->TabIndex = 20;
			this->domainUpDown1->Text = L"Chose";
			this->domainUpDown1->Visible = false;
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &Meniu::domainUpDown1_SelectedItemChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(240, 258);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 21;
			this->textBox1->Text = L"index";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Meniu::textBox1_TextChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(410, 41);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(791, 423);
			this->richTextBox1->TabIndex = 22;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Meniu::richTextBox1_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->checkBox1->Location = System::Drawing::Point(62, 176);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(148, 20);
			this->checkBox1->TabIndex = 23;
			this->checkBox1->Text = L"Show JokeMansger";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Meniu::checkBox1_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(240, 258);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 25;
			this->textBox2->Text = L"ID";
			this->textBox2->Visible = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(37, 236);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(174, 59);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Remove";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Meniu::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(37, 41);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(239, 110);
			this->button6->TabIndex = 26;
			this->button6->Text = L"Show JokeManager";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &Meniu::button6_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Checked = false;
			this->dateTimePicker1->CustomFormat = L"dd.MM.yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(410, 504);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(273, 22);
			this->dateTimePicker1->TabIndex = 28;
			this->dateTimePicker1->Visible = false;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Meniu::dateTimePicker1_ValueChanged);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(36, 467);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(174, 59);
			this->button7->TabIndex = 29;
			this->button7->Text = L"Change Date";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &Meniu::button7_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(240, 489);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 30;
			this->textBox3->Text = L"ID";
			this->textBox3->Visible = false;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Meniu::textBox3_TextChanged);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(36, 564);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(116, 49);
			this->button8->TabIndex = 31;
			this->button8->Text = L"Save";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &Meniu::button8_Click);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Font = (gcnew System::Drawing::Font(L"Algerian", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button9->Location = System::Drawing::Point(765, 524);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(436, 89);
			this->button9->TabIndex = 32;
			this->button9->Text = L"Save to firebase";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &Meniu::button9_Click);
			// 
			// Meniu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1376, 625);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Meniu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Meniu";
			this->Load += gcnew System::EventHandler(this, &Meniu::Meniu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//reutrn
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mainForm->Show();  // Show the main form
		this->Hide();  // Hide the current form
	}

		   //wpisz dane z file do tablicy
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		loadfile(dataGridView1, "JokeFile");
		
		//graj
		//player->Play();
	}

		   //sort
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	JokeManager& jokemanager = JokeManager::getInstance();
	jokemanager.sortJokesID();
	int selectedIndex = domainUpDown1->SelectedIndex;
	if(selectedIndex==0)jokemanager.sortJokesID();
	else if(selectedIndex==1)jokemanager.sortJokesRate();
	else if(selectedIndex==2)jokemanager.sortJokesDate();
	//MessageBox::Show(String::Format("Wybrany element: {0} (Index: {1})", domainUpDown1->SelectedItem, selectedIndex));

}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
}

	//usun z tablicy
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = System::Convert::ToInt32(textBox1->Text);
	dataGridView1->Rows->RemoveAt(index);
}
	   //usun z wektora
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = System::Convert::ToInt32(textBox2->Text);
	JokeManager& jokemanager = JokeManager::getInstance();
	jokemanager.removeJoke(index);
	std::string jokes;
	jokes = jokemanager.getAllJokes();
	richTextBox1->Text = gcnew String(jokes.c_str());
}



private: System::Void Meniu_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	JokeManager& jokemanager = JokeManager::getInstance();
	std::string jokes;
	jokes = jokemanager.getAllJokes();
	richTextBox1->Text = gcnew String(jokes.c_str());
		//label1->Text = gcnew String(newstr.c_str());

}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		//tabica
		button4->Hide();
		textBox1->Hide();
		dataGridView1->Hide();
		button1->Hide();

		

		//wektor
		button5->Show();
		textBox2->Show();
		richTextBox1->Show();
		button6->Show();
		button3->Show();
		domainUpDown1->Show();
		button7->Show();
		textBox3->Show();
		button8->Show();
		dateTimePicker1->Show();
		button9->Show();

	}
	else
	{
		//tabica
		button4->Show();
		textBox1->Show();
		dataGridView1->Show();
		button1->Show();

		//wektor
		button5->Hide();
		textBox2->Hide();
		richTextBox1->Hide();
		button6->Hide();
		button3->Hide();
		domainUpDown1->Hide();
		button7->Hide();
		textBox3->Hide();
		button8->Hide();
		dateTimePicker1->Hide();
		button9->Hide();

	}
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	JokeManager& jokemanager = JokeManager::getInstance();
	std::string jokes;
	jokes = jokemanager.getAllJokes();
	richTextBox1->Text = gcnew String(jokes.c_str());
	MessageBox::Show("Dane zosta³y pomyœlnie wypisane.", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = System::Convert::ToInt32(textBox3->Text);
	std::string date = msclr::interop::marshal_as<std::string>(dateTimePicker1->Text);
	JokeManager& jokemanager = JokeManager::getInstance();
	jokemanager.changeDate(index,date);
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	JokeManager& jokemanager = JokeManager::getInstance();

	System::String^ filePath = "jokes.txt";
	savetofileVector(jokemanager, filePath);
}

	   //wpisz do firebase
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	JokeManager& jokemanager = JokeManager::getInstance();
	std::string jokesText = jokemanager.getAllJokesH();
	std::istringstream iss(jokesText);
	std::string line;
	while (std::getline(iss, line)) {
		std::string id, rating;
		std::string content, type, date;
		int il = 0;
		for (int i = 0; i < line.size(); i++)
		{
			if (line[i] == '#') {
				il++;
				i++;
			}
			if (il == 0) {
				id = id + line[i];
			}
			if (il == 1) {
				content = content + line[i];
			}
			if (il == 2) {
				type = type + line[i];
			}
			if (il == 3) {
				rating = rating + line[i];
			}
			if (il == 4) {
				date = date + line[i];
			}

		}
		
		int idInt = std::stoi(id);
		int rateInt = std::stoi(rating);


	
		dodajNowyZart(idInt,content,type, rateInt,date);

	}
	MessageBox::Show("Dane zosta³y pomyœlnie zapisane w chmurze.", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);

	


	

}
};
}
