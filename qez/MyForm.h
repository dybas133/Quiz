#pragma once
#include "autorzy.h"
#include "pomoc.h"
#include "wynik.h"

namespace qez {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  aToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bToolStripMenuItem2;


	private: System::Windows::Forms::ToolStripMenuItem^  bToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oAutorachToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zacznijNowaGreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oAutorachToolStripMenuItem1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;





	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton7;

	private: System::Windows::Forms::GroupBox^  groupBox3;

	private: System::Windows::Forms::Label^  label4;



	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  radioButton13;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RadioButton^  radioButton14;
	private: System::Windows::Forms::RadioButton^  radioButton15;
	private: System::Windows::Forms::RadioButton^  radioButton16;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::RadioButton^  radioButton17;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::RadioButton^  radioButton18;
	private: System::Windows::Forms::RadioButton^  radioButton19;
	private: System::Windows::Forms::RadioButton^  radioButton20;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::RadioButton^  radioButton21;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::RadioButton^  radioButton22;
	private: System::Windows::Forms::RadioButton^  radioButton23;
	private: System::Windows::Forms::RadioButton^  radioButton24;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::RadioButton^  radioButton25;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::RadioButton^  radioButton26;
	private: System::Windows::Forms::RadioButton^  radioButton27;
	private: System::Windows::Forms::RadioButton^  radioButton28;
	private: System::Windows::Forms::GroupBox^  groupBox8;

	private: System::Windows::Forms::Label^  label9;



	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::RadioButton^  radioButton33;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::RadioButton^  radioButton34;
	private: System::Windows::Forms::RadioButton^  radioButton35;
	private: System::Windows::Forms::RadioButton^  radioButton36;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::ToolStripMenuItem^  zamknijToolStripMenuItem;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

	private: int num = 0;

	private: void wyczysc_przyciski() {
		this->radioButton5->Checked = false;
		this->radioButton6->Checked = false;
		this->radioButton7->Checked = false;
		this->radioButton8->Checked = false;
		this->radioButton13->Checked = false;
		this->radioButton14->Checked = false;
		this->radioButton15->Checked = false;
		this->radioButton16->Checked = false;
		this->radioButton17->Checked = false;
		this->radioButton18->Checked = false;
		this->radioButton19->Checked = false;
		this->radioButton20->Checked = false;
		this->radioButton21->Checked = false;
		this->radioButton22->Checked = false;
		this->radioButton23->Checked = false;
		this->radioButton24->Checked = false;
		this->radioButton25->Checked = false;
		this->radioButton26->Checked = false;
		this->radioButton27->Checked = false;
		this->radioButton28->Checked = false;
		this->radioButton33->Checked = false;
		this->radioButton34->Checked = false;
		this->radioButton35->Checked = false;
		this->textBox1->Text = "";
		this->textBox2->Text = "";
		this->textBox3->Text = "";
	}
	private: void wypelnij_tekst() {
		this->label2->Text = "W którym roku polscy siatkarze zdobyli tytu³ Mistrza Œwiata?";
		this->label3->Text = "W jakim klubie gra obecnie polski napastnik Robert Lewandowski?";
		this->radioButton5->Text = "Real Madryt";
		this->radioButton6->Text = "Legia Warszawa";
		this->radioButton7->Text = "Bayern Monachium";
		this->radioButton8->Text = "Borussia Dortmund";
		this->label4->Text = "Ile kryszta³owych kul zdoby³ Kamil Stoch w swojej karierze?";
		this->label5->Text = "Gdzie odbêd¹ siê tegoroczne Letnie Igrzyska Olimpijskie?";
		this->radioButton13->Text = "w Rio de Janeiro";
		this->radioButton14->Text = "w Londynie";
		this->radioButton15->Text = "w Warszawie";
		this->radioButton16->Text = "w Pekinie";
		this->label6->Text = "Który z polskich szczypiornistów strzeli³ gola w ostatnich sekundach w meczu Polska-Norwegia?";
		this->radioButton17->Text = "S³awomir Szmal";
		this->radioButton18->Text = "Mariusz Jurasik";
		this->radioButton19->Text = "Rafa³ Gliñski";
		this->radioButton20->Text = "Artur Siódmiak";
		this->label7->Text = "Który kraj wygra³ Euro 2012 odbywaj¹ce siê w Polsce i na Ukrainie?";
		this->radioButton21->Text = "Francja";
		this->radioButton22->Text = "Polska";
		this->radioButton23->Text = "Hiszpania";
		this->radioButton24->Text = "W³ochy";
		this->label8->Text = "Gdzie gra obecnie polski koszykarz Marcin Gortat?";
		this->radioButton25->Text = "Orlando Magic";
		this->radioButton26->Text = "Los Angeles Lakers";
		this->radioButton27->Text = "Phoenix Suns";
		this->radioButton28->Text = "Washington Wizards";
		this->label9->Text = "W którym roku Robert Kubica mia³ powa¿ny wypadek?";
		this->label10->Text = "Który szkoleniowiec zast¹pi³ Pepa Guardiolê w Bayernie Monachium?";
		this->radioButton33->Text = "Jose Mourinho";
		this->radioButton34->Text = "Carlo Ancelotti";
		this->radioButton35->Text = "Louis van Gaal";
		this->radioButton36->Text = "Franciszek Smuda";	
		return;
	}
	private: void load() {
		this->zacznijNowaGreToolStripMenuItem->Text = L"Zacznij now¹ grê";
		this->ClientSize = System::Drawing::Size(280, 100);
		timer1->Stop();
		this->label1->Visible = true;
		this->label1->Text = "Quiz Sportowy - rok 2016!";
		this->pictureBox1->Visible = true;
		this->pictureBox1->ImageLocation = "ball.ico";
		this->groupBox1->Visible = false;
		this->groupBox1->Text = "";
		this->groupBox2->Visible = false;
		this->groupBox2->Text = "";
		this->groupBox3->Visible = false;
		this->groupBox3->Text = "";
		this->groupBox4->Visible = false;
		this->groupBox4->Text = "";
		this->groupBox5->Visible = false;
		this->groupBox5->Text = "";
		this->groupBox6->Visible = false;
		this->groupBox6->Text = "";
		this->groupBox7->Visible = false;
		this->groupBox7->Text = "";
		this->groupBox8->Visible = false;
		this->groupBox8->Text = "";
		this->groupBox9->Visible = false;
		this->groupBox9->Text = "";
		this->label11->Visible = false;
		this->label12->Visible = false;
		this->label13->Visible = false;
		this->button1->Visible = false;
		this->button2->Visible = false;
		return;
	}
	private: void rozpocznij() {
		num = 0;
		this->ClientSize = System::Drawing::Size(848, 590);
		this->label1->Visible = false;
		this->pictureBox1->Visible = false;
		this->groupBox1->Visible = true;
		this->groupBox1->Text = "";
		this->groupBox2->Visible = true;
		this->groupBox2->Text = "";
		this->groupBox3->Visible = true;
		this->groupBox3->Text = "";
		this->groupBox4->Visible = true;
		this->groupBox4->Text = "";
		this->groupBox5->Visible = true;
		this->groupBox5->Text = "";
		this->groupBox6->Visible = true;
		this->groupBox6->Text = "";
		this->groupBox7->Visible = true;
		this->groupBox7->Text = "";
		this->groupBox8->Visible = true;
		this->groupBox8->Text = "";
		this->groupBox9->Visible = true;
		this->groupBox9->Text = "";
		this->label11->Visible = true;
		this->label12->Visible = true;
		this->label13->Visible = true;
		this->label11->Text = "Up³ynê³o:  ";
		this->label12->Text = num.ToString();
		this->label13->Text = "Sekund";
		this->timer1->Start();
		this->button1->Visible = true;
		this->button1->Text = "SprawdŸ wynik";
		this->button2->Visible = true;
		this->button2->Text = "Przerwij";
		wyczysc_przyciski();
		wypelnij_tekst();
		return;
	}
			 private: int podlicz_punkty() {
				 int tmp = 0;
				 if (this->radioButton7->Checked) tmp++;
				 if (this->radioButton13->Checked) tmp++;
				 if (this->radioButton20->Checked) tmp++;
				 if (this->radioButton23->Checked) tmp++;
				 if (this->radioButton28->Checked) tmp++;
				 if (this->radioButton34->Checked) tmp++;
				 if (this->textBox1->Text=="2014")  tmp++;
				 if (this->textBox2->Text== "1")  tmp++;
				 if (this->textBox3->Text== "2011")  tmp++;
				 return tmp;
			 }


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zacznijNowaGreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorachToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorachToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton25 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->radioButton26 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton27 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton28 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton33 = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->radioButton34 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton35 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton36 = (gcnew System::Windows::Forms::RadioButton());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aToolStripMenuItem,
					this->bToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(3, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(842, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aToolStripMenuItem
			// 
			this->aToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->zacznijNowaGreToolStripMenuItem,
					this->oAutorachToolStripMenuItem1, this->zamknijToolStripMenuItem
			});
			this->aToolStripMenuItem->Name = L"aToolStripMenuItem";
			this->aToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->aToolStripMenuItem->Text = L"Program";
			// 
			// zacznijNowaGreToolStripMenuItem
			// 
			this->zacznijNowaGreToolStripMenuItem->Name = L"zacznijNowaGreToolStripMenuItem";
			this->zacznijNowaGreToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->zacznijNowaGreToolStripMenuItem->Text = L"Zacznij nowa gre";
			this->zacznijNowaGreToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zacznijNowaGreToolStripMenuItem_Click);
			// 
			// oAutorachToolStripMenuItem1
			// 
			this->oAutorachToolStripMenuItem1->Name = L"oAutorachToolStripMenuItem1";
			this->oAutorachToolStripMenuItem1->Size = System::Drawing::Size(163, 22);
			this->oAutorachToolStripMenuItem1->Text = L"O autorach";
			this->oAutorachToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::oAutorachToolStripMenuItem1_Click);
			// 
			// bToolStripMenuItem
			// 
			this->bToolStripMenuItem->Name = L"bToolStripMenuItem";
			this->bToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->bToolStripMenuItem->Text = L"Pomoc";
			this->bToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::bToolStripMenuItem_Click);
			// 
			// bToolStripMenuItem2
			// 
			this->bToolStripMenuItem2->Name = L"bToolStripMenuItem2";
			this->bToolStripMenuItem2->Size = System::Drawing::Size(32, 19);
			// 
			// oAutorachToolStripMenuItem
			// 
			this->oAutorachToolStripMenuItem->Name = L"oAutorachToolStripMenuItem";
			this->oAutorachToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->oAutorachToolStripMenuItem->Text = L"O autorach";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(51, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(15, 43);
			this->pictureBox1->MaximumSize = System::Drawing::Size(30, 30);
			this->pictureBox1->MinimumSize = System::Drawing::Size(30, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(30, 30);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(3, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(262, 38);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(12, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(271, 166);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Location = System::Drawing::Point(289, 27);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(271, 166);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 57);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(85, 17);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"radioButton5";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(3, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(262, 38);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(6, 80);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(85, 17);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"radioButton6";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(6, 103);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(85, 17);
			this->radioButton7->TabIndex = 7;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"radioButton7";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(6, 126);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(85, 17);
			this->radioButton8->TabIndex = 6;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"radioButton8";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(566, 27);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(271, 166);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"groupBox3";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(3, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(262, 38);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton13);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->radioButton14);
			this->groupBox4->Controls->Add(this->radioButton15);
			this->groupBox4->Controls->Add(this->radioButton16);
			this->groupBox4->Location = System::Drawing::Point(12, 199);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(271, 166);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"groupBox4";
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(6, 57);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(91, 17);
			this->radioButton13->TabIndex = 4;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"radioButton13";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(3, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(262, 38);
			this->label5->TabIndex = 3;
			this->label5->Text = L"label5";
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(6, 80);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(91, 17);
			this->radioButton14->TabIndex = 5;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"radioButton14";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(6, 103);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(91, 17);
			this->radioButton15->TabIndex = 7;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"radioButton15";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(6, 126);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(91, 17);
			this->radioButton16->TabIndex = 6;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L"radioButton16";
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton17);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->radioButton18);
			this->groupBox5->Controls->Add(this->radioButton19);
			this->groupBox5->Controls->Add(this->radioButton20);
			this->groupBox5->Location = System::Drawing::Point(288, 199);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(271, 166);
			this->groupBox5->TabIndex = 10;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"groupBox5";
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Location = System::Drawing::Point(6, 57);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(91, 17);
			this->radioButton17->TabIndex = 4;
			this->radioButton17->TabStop = true;
			this->radioButton17->Text = L"radioButton17";
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(3, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(262, 38);
			this->label6->TabIndex = 3;
			this->label6->Text = L"label6";
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->Location = System::Drawing::Point(6, 80);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(91, 17);
			this->radioButton18->TabIndex = 5;
			this->radioButton18->TabStop = true;
			this->radioButton18->Text = L"radioButton18";
			this->radioButton18->UseVisualStyleBackColor = true;
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->Location = System::Drawing::Point(6, 103);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(91, 17);
			this->radioButton19->TabIndex = 7;
			this->radioButton19->TabStop = true;
			this->radioButton19->Text = L"radioButton19";
			this->radioButton19->UseVisualStyleBackColor = true;
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->Location = System::Drawing::Point(6, 126);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(91, 17);
			this->radioButton20->TabIndex = 6;
			this->radioButton20->TabStop = true;
			this->radioButton20->Text = L"radioButton20";
			this->radioButton20->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->radioButton21);
			this->groupBox6->Controls->Add(this->label7);
			this->groupBox6->Controls->Add(this->radioButton22);
			this->groupBox6->Controls->Add(this->radioButton23);
			this->groupBox6->Controls->Add(this->radioButton24);
			this->groupBox6->Location = System::Drawing::Point(566, 199);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(271, 166);
			this->groupBox6->TabIndex = 10;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"groupBox6";
			// 
			// radioButton21
			// 
			this->radioButton21->AutoSize = true;
			this->radioButton21->Location = System::Drawing::Point(6, 57);
			this->radioButton21->Name = L"radioButton21";
			this->radioButton21->Size = System::Drawing::Size(91, 17);
			this->radioButton21->TabIndex = 4;
			this->radioButton21->TabStop = true;
			this->radioButton21->Text = L"radioButton21";
			this->radioButton21->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(3, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(262, 38);
			this->label7->TabIndex = 3;
			this->label7->Text = L"label7";
			// 
			// radioButton22
			// 
			this->radioButton22->AutoSize = true;
			this->radioButton22->Location = System::Drawing::Point(6, 80);
			this->radioButton22->Name = L"radioButton22";
			this->radioButton22->Size = System::Drawing::Size(91, 17);
			this->radioButton22->TabIndex = 5;
			this->radioButton22->TabStop = true;
			this->radioButton22->Text = L"radioButton22";
			this->radioButton22->UseVisualStyleBackColor = true;
			// 
			// radioButton23
			// 
			this->radioButton23->AutoSize = true;
			this->radioButton23->Location = System::Drawing::Point(6, 103);
			this->radioButton23->Name = L"radioButton23";
			this->radioButton23->Size = System::Drawing::Size(91, 17);
			this->radioButton23->TabIndex = 7;
			this->radioButton23->TabStop = true;
			this->radioButton23->Text = L"radioButton23";
			this->radioButton23->UseVisualStyleBackColor = true;
			// 
			// radioButton24
			// 
			this->radioButton24->AutoSize = true;
			this->radioButton24->Location = System::Drawing::Point(6, 126);
			this->radioButton24->Name = L"radioButton24";
			this->radioButton24->Size = System::Drawing::Size(91, 17);
			this->radioButton24->TabIndex = 6;
			this->radioButton24->TabStop = true;
			this->radioButton24->Text = L"radioButton24";
			this->radioButton24->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->radioButton25);
			this->groupBox7->Controls->Add(this->label8);
			this->groupBox7->Controls->Add(this->radioButton26);
			this->groupBox7->Controls->Add(this->radioButton27);
			this->groupBox7->Controls->Add(this->radioButton28);
			this->groupBox7->Location = System::Drawing::Point(12, 371);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(271, 166);
			this->groupBox7->TabIndex = 10;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"groupBox7";
			// 
			// radioButton25
			// 
			this->radioButton25->AutoSize = true;
			this->radioButton25->Location = System::Drawing::Point(6, 57);
			this->radioButton25->Name = L"radioButton25";
			this->radioButton25->Size = System::Drawing::Size(91, 17);
			this->radioButton25->TabIndex = 4;
			this->radioButton25->TabStop = true;
			this->radioButton25->Text = L"radioButton25";
			this->radioButton25->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(3, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(262, 38);
			this->label8->TabIndex = 3;
			this->label8->Text = L"label8";
			// 
			// radioButton26
			// 
			this->radioButton26->AutoSize = true;
			this->radioButton26->Location = System::Drawing::Point(6, 80);
			this->radioButton26->Name = L"radioButton26";
			this->radioButton26->Size = System::Drawing::Size(91, 17);
			this->radioButton26->TabIndex = 5;
			this->radioButton26->TabStop = true;
			this->radioButton26->Text = L"radioButton26";
			this->radioButton26->UseVisualStyleBackColor = true;
			// 
			// radioButton27
			// 
			this->radioButton27->AutoSize = true;
			this->radioButton27->Location = System::Drawing::Point(6, 103);
			this->radioButton27->Name = L"radioButton27";
			this->radioButton27->Size = System::Drawing::Size(91, 17);
			this->radioButton27->TabIndex = 7;
			this->radioButton27->TabStop = true;
			this->radioButton27->Text = L"radioButton27";
			this->radioButton27->UseVisualStyleBackColor = true;
			// 
			// radioButton28
			// 
			this->radioButton28->AutoSize = true;
			this->radioButton28->Location = System::Drawing::Point(6, 126);
			this->radioButton28->Name = L"radioButton28";
			this->radioButton28->Size = System::Drawing::Size(91, 17);
			this->radioButton28->TabIndex = 6;
			this->radioButton28->TabStop = true;
			this->radioButton28->Text = L"radioButton28";
			this->radioButton28->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBox3);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Location = System::Drawing::Point(289, 371);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(271, 166);
			this->groupBox8->TabIndex = 10;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"groupBox8";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 100);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(3, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(258, 38);
			this->label9->TabIndex = 3;
			this->label9->Text = L"label9";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->radioButton33);
			this->groupBox9->Controls->Add(this->label10);
			this->groupBox9->Controls->Add(this->radioButton34);
			this->groupBox9->Controls->Add(this->radioButton35);
			this->groupBox9->Controls->Add(this->radioButton36);
			this->groupBox9->Location = System::Drawing::Point(566, 371);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(271, 166);
			this->groupBox9->TabIndex = 10;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"groupBox9";
			// 
			// radioButton33
			// 
			this->radioButton33->AutoSize = true;
			this->radioButton33->Location = System::Drawing::Point(6, 57);
			this->radioButton33->Name = L"radioButton33";
			this->radioButton33->Size = System::Drawing::Size(91, 17);
			this->radioButton33->TabIndex = 4;
			this->radioButton33->TabStop = true;
			this->radioButton33->Text = L"radioButton33";
			this->radioButton33->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(3, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(262, 38);
			this->label10->TabIndex = 3;
			this->label10->Text = L"label10";
			// 
			// radioButton34
			// 
			this->radioButton34->AutoSize = true;
			this->radioButton34->Location = System::Drawing::Point(6, 80);
			this->radioButton34->Name = L"radioButton34";
			this->radioButton34->Size = System::Drawing::Size(91, 17);
			this->radioButton34->TabIndex = 5;
			this->radioButton34->TabStop = true;
			this->radioButton34->Text = L"radioButton34";
			this->radioButton34->UseVisualStyleBackColor = true;
			// 
			// radioButton35
			// 
			this->radioButton35->AutoSize = true;
			this->radioButton35->Location = System::Drawing::Point(6, 103);
			this->radioButton35->Name = L"radioButton35";
			this->radioButton35->Size = System::Drawing::Size(91, 17);
			this->radioButton35->TabIndex = 7;
			this->radioButton35->TabStop = true;
			this->radioButton35->Text = L"radioButton35";
			this->radioButton35->UseVisualStyleBackColor = true;
			// 
			// radioButton36
			// 
			this->radioButton36->AutoSize = true;
			this->radioButton36->Location = System::Drawing::Point(6, 126);
			this->radioButton36->Name = L"radioButton36";
			this->radioButton36->Size = System::Drawing::Size(91, 17);
			this->radioButton36->TabIndex = 6;
			this->radioButton36->TabStop = true;
			this->radioButton36->Text = L"radioButton36";
			this->radioButton36->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(52, 561);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(149, 561);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(168, 561);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"label13";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(529, 553);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(681, 553);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zamknijToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(848, 590);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(3);
			this->Text = L"Quiz";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void oAutorachToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	autorzy ^okno1 = gcnew autorzy;
	okno1->label1->Text = "Aplikacjê";
	okno1->label1->ForeColor = System::Drawing::Color::Green;
	okno1->label4->Text = "wykonali:";
	okno1->label4->ForeColor = System::Drawing::Color::Green;
	okno1->label2->Text = "Daniel Kubasik";
	okno1->pictureBox1->ImageLocation = "1.bmp";
	okno1->label3->Text = "Marcin Ziober";
	okno1->pictureBox2->ImageLocation = "2.bmp";
	okno1->button1->Text = "Zamknij to okno";
	okno1->Show();
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	load();
}
private: System::Void zacznijNowaGreToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	rozpocznij();
}
private: System::Void bToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	pomoc ^okno2 = gcnew pomoc;
	okno2->label1->Text = "Witamy w pomocy do aplikacji 'Quiz Sportowy!'.";
	okno2->label2->Text = "Aby otrzymaæ informacje o twórcach aplikacji kliknij w menu 'Program->O autorach'.";
	okno2->label3->Text = "¯eby rozpocz¹æ now¹ grê kliknij w menu 'Program->Zacznij now¹ grê'.";
	okno2->label4->Text = "Po rozpoczêciu gry pojawi siê dziesiêæ pytañ, na które nale¿y odpowiedzieæ zaznaczaj¹c odpowiednie pole przy odpowiedzi.";
	okno2->label5->Text = "Ka¿de pytanie ma jedn¹ poprawn¹ odpowiedŸ.";
	okno2->label6->Text = "Poprawna odpowiedŸ wcale nie musi byæ pierwsz¹ z listy.";
	okno2->label7->Text = "W przypadku niepewnoœci mo¿na strzelaæ. Nie ma punktów ujemnych za b³êdn¹ odpowiedŸ.";
	okno2->label8->Text = "Po zaznaczeniu odpowiedzi nale¿y klikn¹æ przycisk 'SprawdŸ wynik'.";
	okno2->label9->Text = "Poka¿e siê wtedy okno z wynikiem, a okno z quizem wróci do stanu pocz¹tkowego.";
	okno2->label10->Text = "¯yczymy mi³ej gry :)";
	okno2->button1->Text = "Zamknij to okno";
	okno2->Show();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	num++;
	this->label12->Text = num.ToString();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	wynik ^okno3 = gcnew wynik;
	int wynik = podlicz_punkty();
	okno3->label1->Text = "Otrzymano: ";
	okno3->label2->Text = wynik.ToString();
	switch (wynik) {
	case 0: {okno3->label4->Text = "Sport to nie jest Twoja mocna strona, co?";	okno3->label3->Text = "punktów"; break; }
	case 1: {okno3->label4->Text = "Sport to nie jest Twoja mocna strona, co?"; okno3->label3->Text = "punkt"; break; }
	case 2: {okno3->label4->Text = "Sport to nie jest Twoja mocna strona, co?"; okno3->label3->Text = "punkty"; break; }
	case 3: {okno3->label4->Text = "Nie najgorszy wynik. Choæ mog³o byæ lepiej"; okno3->label3->Text = "punkty"; break; }
	case 4: {okno3->label4->Text = "Nie najgorszy wynik. Choæ mog³o byæ lepiej"; okno3->label3->Text = "punkty"; break; }
	case 5: {okno3->label4->Text = "Ca³kiem niez³¹ masz wiedzê o sporcie!"; okno3->label3->Text = "punktów"; break; }
	case 6: {okno3->label4->Text = "Ca³kiem niez³¹ masz wiedzê o sporcie!"; okno3->label3->Text = "punktów"; break; }
	case 7: {okno3->label4->Text = "Znakomicie! Masz doskona³¹ wiedzê o sporcie!"; okno3->label3->Text = "punktów"; break; }
	case 8: {okno3->label4->Text = "Znakomicie! Masz doskona³¹ wiedzê o sporcie!"; okno3->label3->Text = "punktów"; break; }
	case 9: {okno3->label4->Text = "Genialnie! Wszystkie odpowiedzi s¹ poprawne!"; okno3->label3->Text = "punktów"; break; }
	default: {okno3->label4->Text = "ERROR"; break; }
	}
	okno3->button1->Text = "Zamknij to okno";
	okno3->Show();
	load();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	load();
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
