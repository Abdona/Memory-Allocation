#pragma once
#include<string>
#include<iostream>
#include<msclr/marshal_cppstd.h>
#include <msclr\marshal.h>  
#include<queue>
//global Variables
int counter=0;
int counter2=0;
int p=0;
int memo[2000];//MEMORY
bool merge1=false;
//int process_size[10];
namespace Project3 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//int * memo;
	vector<int> hole_base;
	vector<int> hole_size;
	queue<int> ready_process;
	queue<int> wait_process;
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
	private: System::Windows::Forms::GroupBox^  groupBox3;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1; 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;



	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::TextBox^  textBox3;



	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;








	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox4;

	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RadioButton^  radioButton2;

	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::ListBox^  listBox1;


	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListBox^  listBox4;

	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::ListBox^  listBox5;








	protected: 






















	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->listBox5);
			this->groupBox3->Controls->Add(this->listBox4);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->listBox3);
			this->groupBox3->Controls->Add(this->listBox2);
			this->groupBox3->Controls->Add(this->listBox1);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->groupBox2);
			this->groupBox3->Controls->Add(this->groupBox1);
			this->groupBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox3->ImeMode = System::Windows::Forms::ImeMode::On;
			this->groupBox3->Location = System::Drawing::Point(12, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(488, 476);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm::groupBox3_Enter);
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(19, 366);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(150, 95);
			this->listBox5->TabIndex = 32;
			this->listBox5->Visible = false;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Base    Size"});
			this->listBox4->Location = System::Drawing::Point(19, 251);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(150, 212);
			this->listBox4->TabIndex = 31;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(347, 366);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Allocate";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Wait Queue"});
			this->listBox3->Location = System::Drawing::Point(347, 251);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(120, 108);
			this->listBox3->TabIndex = 29;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox3_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Ready Queue"});
			this->listBox2->Location = System::Drawing::Point(347, 140);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 108);
			this->listBox2->TabIndex = 28;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Name   Size   Allocated   Base"});
			this->listBox1->Location = System::Drawing::Point(175, 251);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(166, 212);
			this->listBox1->TabIndex = 27;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(417, 444);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 23);
			this->button3->TabIndex = 25;
			this->button3->Text = L"reset";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(16, 235);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Holes";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(180, 235);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Processes";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(347, 444);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 23);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Deallocate";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton3);
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Controls->Add(this->radioButton1);
			this->groupBox4->Location = System::Drawing::Point(323, 21);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(158, 100);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Allocation Algorithm";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(7, 67);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(67, 17);
			this->radioButton3->TabIndex = 20;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Worst Fit";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(7, 43);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(60, 17);
			this->radioButton2->TabIndex = 19;
			this->radioButton2->Text = L"Best Fit";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(58, 17);
			this->radioButton1->TabIndex = 18;
			this->radioButton1->Text = L"First Fit";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged_1);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(6, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(296, 102);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Memory/Holes";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(182, 67);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"KB";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(209, 63);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Add";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Size";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Address";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(76, 61);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(76, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(6, 127);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(314, 93);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Process";
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Location = System::Drawing::Point(90, 20);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 15;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(197, 62);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"KB";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(87, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L" ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Size";
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(90, 60);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(233, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(512, 491);
			this->Controls->Add(this->groupBox3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Memory Allocation";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
		//Create Process
		//////
		void Fork()
		{
			if(textBox3->Text!=""&&textBox3->Text!=""&&stoi(msclr::interop::marshal_as<std::string>(textBox3->Text))<=1000)//handling errors
			{
				//string p_name = msclr::interop::marshal_as<std::string>(label5->Text);//process name
				//if(p_name=="P1") 
					//counter=1;
				counter++;
				//label5->Text= msclr::interop::marshal_as<String^>('P'+to_string(counter));
				//textBox4->Text +=msclr::interop::marshal_as<String^>('P'+to_string(counter))+"\r\n";
				//textBox4->Text="\r\n";
				listBox2->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter)+"="+(msclr::interop::marshal_as<string>(textBox3->Text)))) ; 
				string size= msclr::interop::marshal_as<std::string>(textBox3->Text);//size of the process in KB
				ready_process.push(stoi(size)); 
				
				
			} 
			else
				MessageBox::Show("Please enter a valid process size ","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
		}
		/////////
		
		//clear memory
		///////////
		void add_hole() 
		{
			if(textBox1->Text!=""&&textBox2->Text!=""&&stoi(msclr::interop::marshal_as<std::string>(textBox2->Text))<=1000)//handling errors
			{  
				string address = msclr::interop::marshal_as<std::string>(textBox1->Text);	
				string size = msclr::interop::marshal_as<std::string>(textBox2->Text);//the desired size to be cleared
				int add=stoi(address);
				int sizee=stoi(size);
				hole_base.push_back(add);
				hole_size.push_back(sizee);
				for(int i=add;i<add+sizee;i++)
					memo[i]=0;  //clear memory
				listBox4->Items->Add(msclr::interop::marshal_as<String^>(address+"         "+size));
				
				
				///////////////////////
											 
			}
			else
				MessageBox::Show("Please enter a valid address and size ","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
			
		}
		void bubble_sort()
		{
			/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			//////////////////BUBBLE SORTING////////////////// 
			//bubble sorting
			int i, j, flag = 1;    // set flag to 1 to start first pass
			int temp,temp1;             // holding variable
			int numLength = hole_base.size();
			if (radioButton2->Checked==true&&merge1==false)///////////////BEST FIT////////////////////////
			{
				for(i = 1; (i <= numLength) && flag; i++)
			{
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
			 if (hole_size[j+1] < hole_size[j])      // sorting ascending order
              {
				  temp = hole_size[j];             // swap elements
				  hole_size[j] = hole_size[j+1];
				  hole_size[j+1] = temp;
				  temp1=hole_base[j];
				  hole_base[j]=hole_base[j+1];
				  hole_base[j+1]=temp1;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
		}
			else if(radioButton3->Checked==true&&merge1==false)/////////////WORST FIT/////////////
			{
				for(i = 1; (i <= numLength) && flag; i++)
			{
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
			 if (hole_size[j+1] > hole_size[j])      // sorting descending order
              {
				  temp = hole_size[j];             // swap elements
				  hole_size[j] = hole_size[j+1];
				  hole_size[j+1] = temp;
				  temp1=hole_base[j];
				  hole_base[j]=hole_base[j+1];
				  hole_base[j+1]=temp1;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
			}
			else//////////////FIRST FIT//////////////
			{
				for(i = 1; (i <= numLength) && flag; i++)
			{
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
			 if (hole_base[j+1] < hole_base[j])      // sorting ascending order
              {
				  temp = hole_size[j];             // swap elements
				  hole_size[j] = hole_size[j+1];
				  hole_size[j+1] = temp;
				  temp1=hole_base[j];
				  hole_base[j]=hole_base[j+1];
				  hole_base[j+1]=temp1;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
			merge1==false;
			}
				
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		}
		void add1_hole(int add,int  siz,int pos) 
		{
			if (siz!=0) 
			{
				string address =to_string(add);	
				string size =to_string(siz);//the desired size to be cleared
				listBox4->Items->Add(msclr::interop::marshal_as<String^>(address+"         "+size));	
				if (radioButton2->Checked==true||radioButton1->Checked==true||radioButton3->Checked==true)
				{
					if (radioButton1->Checked==true)
					{
						hole_size.insert(hole_size.begin()+pos,siz);
						hole_base.insert(hole_base.begin()+pos,add);

					}
					else
					{
					hole_size.push_back(siz);
					hole_base.push_back(add);
					bubble_sort();
					}
					}
		}
			}
  void deallocate(int add,int  size) 
  {
	  string address = to_string(add);	
	  string sizee = to_string(size);//the desired size to be cleared
	  for(int i=add;i<add+size;i++)
		  memo[i]=0;  //clear memory
	 listBox4->Items->Add(msclr::interop::marshal_as<String^>(address+"         "+sizee));
	 if (radioButton2->Checked==true||radioButton3->Checked==true)//BEST FIT AND WORST FIT deallocation handling///
	 {
		 hole_base.push_back(add); 
		 hole_size.push_back(size);
		 bubble_sort(); 
	 }
	 else/////////FIRST FIT////////////////
	 {
		 hole_base.push_back(add); 
		 hole_size.push_back(size);
		 bubble_sort();
	 }
  }

  void merge_holes()
  {
	  merge1=true;
	  if (radioButton2->Checked==true||radioButton3->Checked==true)
	  {
		   bubble_sort();
	  }
	  for (int i = 0; i <hole_base.size(); i++) 
	  {
		  if (i!=hole_base.size()-1)
		 { 
			 if (radioButton1->Checked==true)//MEGRING HOLES FOR FIRST FIT
				 {
					 if (hole_base[i]+hole_size[i]==hole_base[i+1])
					 {        
							 hole_base.erase(hole_base.begin()+i+1);
							 hole_size[i]=hole_size[i]+hole_size[i+1];
							 hole_size.erase(hole_size.begin()+i+1);
						 }
			 
			 }
			 else      //MERGING HOLES FOR BEST FIT AND WORST FIT
			 {
			 if (hole_base[i]+hole_size[i]==hole_base[i+1])
			 {
				 hole_base.erase(hole_base.begin()+i+1);
				 hole_size[i]=hole_size[i]+hole_size[i+1];
				 hole_size.erase(hole_size.begin()+i+1);
				 bubble_sort();
			 }
			 }
		  }
		  else
			  break;
		  
	  }
  }

		//////// 

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
//			 listBox5->Visible==false;
			 for(int i=0;i<=1999;i++)
					memo[i]=1;  //intiallizing full memory
			 
			
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton1->Checked==true||radioButton2->Checked==true||radioButton3->Checked==true)
			{ 
				add_hole();
			if (radioButton2->Checked==true)
			{
				bubble_sort();
			}
			else if (radioButton3->Checked==true)
			{
				bubble_sort(); 
			}
			 }
			 else
			 {
				 MessageBox::Show("Please select the desired Allocation Algorithm","Attention");
			 }
		 
		 }

/*private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ready_process.empty()==false)
			 {
				 int pro= ready_process.front(); 
				 //int p=0;
				 bool flag=true;
				 bool flag1=true;
				 //searching memory for free space
				 for (int i=0;i<19;i++)
				{ 
					int counter=0;
					if(memo[i]==0)//empty space in memory 
						{
							flag1=false;
							ready_process.pop();//pop process from the ready queue
							MessageBox::Show("First Fit","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
							if(flag==false)
							p++;
							for (int j = i; j<i+pro; j++)
					 {
						 counter ++;
						 if (memo[j]!=0)//avialable hole not enough for the prcess size
						 {  
							 wait_process.push(p); //push process into the wait queue
							 textBox5->Text +=msclr::interop::marshal_as<String^>('P'+to_string(p+1))+"\r\n";
							 MessageBox::Show("There is no eough spcae!;process is in the wait queue","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
							 break; //wait until a memory space is empty
						 }
						 else if (counter==pro)//available space in the memory
						 {
							 MessageBox::Show("process is fit in the memory","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
							 for(int z=j+1-counter;z<=j;z++)
								 memo[z]=pro;
							 flag=false;
							 break;
						 }
						}
					}
					if (flag1==false)
					{
						break;
					}
					
			 }
				 if (flag1==true)
				 {
					 MessageBox::Show("Memory is Full","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
				 }
			 }
			 else
			 {
				 if (wait_process.empty()==true)
				 MessageBox::Show("No process available","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
			 }

			 
		 }*/
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton1_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void dataRepeater1_CurrentItemIndexChanged(System::Object^  sender, System::EventArgs^  e) {		 }
private: System::Void dataRepeater1_CurrentItemIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
 private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			Fork();
		  }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 string s=msclr::interop::marshal_as<std::string>(listBox1->GetItemText(listBox1->SelectedItem)); 
			 if(s!="")
			 {
				 
				 if (s.find("False")==-1) //ALLOCATE PROCESS
			 {
				 int size1=stoi(s.substr(8,7));
				 ready_process.push(size1);
				  int add1=stoi(s.substr(31,7));
			 deallocate(add1,size1);        ///DEALLOCATING PROCESS FROM MEMORY////
			listBox1->Items->Remove(listBox1->SelectedItem);
			merge_holes();
			 listBox2->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter)+"="+to_string(size1)));
				 }
			 else	// process is already deallocated
			 { 
				 MessageBox::Show("Process is already deallocated","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
			 }
		 }
			 else
			 {
				 MessageBox::Show("Please select a process to deallocate","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
			 }
		 }

private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 
			 // string p_name = msclr::interop::marshal_as<std::string>(textBox6->Text); 
			 if (radioButton1->Checked==false&&radioButton2->Checked==false&&radioButton3->Checked==false) 
				MessageBox::Show("Please Select Allocation Algorithm","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
			if (radioButton1->Checked==true)//   First Fit
			{
				/* if (ready_process.empty()==false) 
			 {
				 counter2++;
				 int pro= ready_process.front(); 
				 //int p=0;
				 int a=1;
				 bool isfinish=false; 
				 bool flag1=true;
				 bool flag2=false;
				 bool flag=true;
				 int j=0;
				 int i;
				 //searching memory for free space
				 for (i=j;i<=19;i++)//iterate throw memory
				{  
					flag2=false;
					int counter1=0; 
					if (i==19)
					{ 
						isfinish=true;
					}
					//int counter1=0;
					if(memo[i]==0||isfinish==true)//||isfinish==true)//empty space in memory 
						{
							if(memo[i]==0)
							flag1=false;
							//MessageBox::Show("First Fit","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
							//if(flag==false)
							//p++; 
							for (j = i; j<i+pro; j++)//iterate throw hole  
					 {
						
						// if (j==i) 
							// a++;
						 counter1 ++;
						 if (memo[j]!=0&&flag1==false)///avialable hole not enough for the prcess size
						 {  
							 flag2==true; 
							if (isfinish==true) 
							{
								ready_process.pop();//pop process from the ready queue
								wait_process.push(p); //push process into the wait queue,WHICH IS ALREADY POPED OUT OF THE READY QUEUE
							 //textBox4->Text +=msclr::interop::marshal_as<String^>('P'+to_string(p+1))+"\r\n";
								if (counter2<=9)
									listBox1->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"        "+to_string(pro)+"        "+"False"));  
								else if (counter2<=99)
									listBox1->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"       "+to_string(counter1)+"        "+"False"));
								else
									listBox1->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"      "+to_string(counter1)+"        "+"False"));
								listBox3->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"="+to_string(pro))) ;
							 listBox2->Items->RemoveAt(1) ;
							 flag=false;
							 MessageBox::Show("There is no eough spcae!","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
							 }
							break; //wait until a memory space is empty
						 }
						 else if (counter1==pro&&flag1==false)//&&flag2==false)//PROCESS FIT IN THE HOLE
						 {
							 MessageBox::Show("process is fit in the memory","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
							ready_process.pop();//pop process from the ready queue
							 // textBox4->Text +="\r\n"+msclr::interop::marshal_as<String^>(p_name+"        "+to_string(counter)+"        "+"True"+"         "+to_string(j-counter+1))+"\r\n";							 
							// marshal_as<String^>(p_name);
							if(counter2<=9)  
							listBox1->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"        "+to_string(counter1)+"        "+"True"+"         "+to_string(j-counter1+1)));    
							else if(counter2<=99&&counter2>9)
								listBox1->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"      "+to_string(counter1)+"        "+"True"+"         "+to_string(j-counter1+1)));
							else
								listBox1->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"      "+to_string(counter1)+"        "+"True"+"         "+to_string(j-counter1+1)));
							listBox2->Items->RemoveAt(1) ;
							  //listBox4->Items->RemoveAt(a);
							  for(int z=j+1-counter1;z<=j;z++) 
								 memo[z]=pro;
							  flag=false;
							  //HANDLING NEW HOLES 
							  int z=j+1;
							  while (memo[z]==0)
							  {
								  z++;
							  }
							  z--;
							  add1_hole(j+1,z-j);
							  break;
						 }
						}
					}
					if (flag1==false&&flag==false)
					{
						break; 
					}
					
			 }
				 if (flag1==true)
				 {
					 MessageBox::Show("Memory is Full","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
					 //textBox4->Text +="\r\n"+msclr::interop::marshal_as<String^>("P"+to_string(p)+"        "+to_string(counter)+"        "+"False"+"        ")+"\r\n";
					 listBox1->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(p+1)+"        "+to_string(pro)+"        "+"False"+"         "));   
					  
				 }
			 }
			 else
			 {
				 if (wait_process.empty()==true)
				 MessageBox::Show("No process available","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
			 }*/
				 if (ready_process.empty()==false)
				{
					counter2++;
					bool isfinish=false;
					int pro=ready_process.front(); //REPRESENT THE SIZE OF THE PROCESS
					int j=0; 
						if (hole_base.empty()==false)
					{
						for (int i = 0; i < hole_size.size(); i++) 
						{
							//if (i==hole_size.size())
							//	isfinish==true;
							if (pro<=hole_size[i])////// PROCESS FIT IN THE HOLE SIZE
					{
						isfinish=true;
						int x=hole_base[i];
						int y=hole_size[i];
						for(int z=hole_base[i];z<hole_base[i]+pro;z++)
								 memo[z]=pro;
						listBox1->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"        "+to_string(pro)+"        "+"True"+"         "+to_string(hole_base.at(i))));
						////removing the hole used by the process /// 
						for (int i = 0; i <hole_base.size(); i++)
							//	listBox5->Items->Add(msclr::interop::marshal_as<String^>(to_string(hole_size.at(i))));
					listBox5->Items->Add(msclr::interop::marshal_as<String^>("----------"));
						if (i==0)
						{
							hole_size.erase (hole_size.begin());
							hole_base.erase (hole_base.begin());
						}
						else
						{
							hole_size.erase (hole_size.begin()+i);
							hole_base.erase (hole_base.begin()+i);
						}
							for (int i = 0; i <hole_base.size(); i++)
								listBox5->Items->Add(msclr::interop::marshal_as<String^>(to_string(hole_size.at(i))));
							listBox5->Items->Add(msclr::interop::marshal_as<String^>("----------"));
							
						if (pro<y)////handling extra space in the hole////
						{
							add1_hole(x+pro,y-pro,i);
						}
						//listBox5->Items->Add(msclr::interop::marshal_as<String^>(to_string(hole_size.front())));
						//listBox5->Items->Add(msclr::interop::marshal_as<String^>(to_string(hole_base.front())));
						ready_process.pop();
						MessageBox::Show("process fit","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
						listBox2->Items->RemoveAt(1);
						break;
						}
							/*else if (isfinish==false)//process do not fit in the given holes
							{
								MessageBox::Show("There is no eough spcae!","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
								listBox2->Items->RemoveAt(1);
								ready_process.pop();
								listBox3->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"="+to_string(pro)));
								wait_process.push(pro);
								break;
							}*/
						}
						if(isfinish==false)//process do not fit in the given holes
						 {
								MessageBox::Show("There is no eough spcae!","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
								listBox2->Items->RemoveAt(1);
								ready_process.pop();
								listBox3->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"="+to_string(pro)));
								wait_process.push(pro);
						}
						}
						else///Memory is full//////////
						{
							MessageBox::Show("Memory is Full","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
						}
				
				/*
						////////////////	for (int i=j;i<=19;i++)//iterate throw memory searching for empty hole
					{
						if (i==19)
							isfinish=true;
						if (memo[i]==0)//empty space in memory
							do//iterate throw hole
							{ 
							if (memo[j]==0)//available space in the hole
							{
								if (j==i+pro-1)//hole is suitable for the given process's size
								{
									if (isfinish==true)//iterated throw the hole memory
										break; 
									hole_size.push_back(j-i);
									listBox1->Items->Add(msclr::interop::marshal_as<String^>(to_string(j-i)));
								}
								
							}
							else //hole is not suitable for the given process'size
							{
								break; 
							}

						}while (memo[j]==0);
					}///////////////////
					*/
				}
				else
				{
					MessageBox::Show("No process available","error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
				}
			}
			else if (radioButton2->Checked==true)////////////////Best Fit////////////////////////////////////
			{
				
				if (ready_process.empty()==false)
				{
					counter2++;
					bool isfinish=false;
					int pro=ready_process.front(); //REPRESENT THE SIZE OF THE PROCESS
					int j=0; 
						if (hole_base.empty()==false)
					{
						for (int i = 0; i < hole_size.size(); i++) 
						{
							//if (i==hole_size.size())
							//	isfinish==true;
							if (pro<=hole_size[i])////// PROCESS FIT IN THE HOLE SIZE
					{
						isfinish=true;
						int x=hole_base[i];
						int y=hole_size[i];
						for(int z=hole_base[i];z<hole_base[i]+pro;z++)
								 memo[z]=pro;
						listBox1->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"        "+to_string(pro)+"        "+"True"+"         "+to_string(hole_base.at(i))));
						////removing the hole used by the process /// 
						for (int i = 0; i <hole_base.size(); i++)
								listBox5->Items->Add(msclr::interop::marshal_as<String^>(to_string(hole_size.at(i))));
						listBox5->Items->Add(msclr::interop::marshal_as<String^>("----------"));
						if (i==0)
						{
							hole_size.erase (hole_size.begin());
							hole_base.erase (hole_base.begin());
						}
						else
						{
							hole_size.erase (hole_size.begin()+i);
							hole_base.erase (hole_base.begin()+i);
						}
							for (int i = 0; i <hole_base.size(); i++)
								listBox5->Items->Add(msclr::interop::marshal_as<String^>(to_string(hole_size.at(i))));
							listBox5->Items->Add(msclr::interop::marshal_as<String^>("----------"));
							
						if (pro<y)////handling extra space in the hole////
						{
							add1_hole(x+pro,y-pro,0);
						}
						//listBox5->Items->Add(msclr::interop::marshal_as<String^>(to_string(hole_size.front())));
						//listBox5->Items->Add(msclr::interop::marshal_as<String^>(to_string(hole_base.front())));
						ready_process.pop();
						MessageBox::Show("process fit","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
						listBox2->Items->RemoveAt(1);
						break;
						}
							/*else if (isfinish==false)//process do not fit in the given holes
							{
								MessageBox::Show("There is no eough spcae!","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
								listBox2->Items->RemoveAt(1);
								ready_process.pop();
								listBox3->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"="+to_string(pro)));
								wait_process.push(pro);
								break;
							}*/
						}
						if(isfinish==false)//process do not fit in the given holes
						 {
								MessageBox::Show("There is no eough spcae!","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
								listBox2->Items->RemoveAt(1);
								ready_process.pop();
								listBox3->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"="+to_string(pro)));
								wait_process.push(pro);
						}
						}
						else///Memory is full//////////
						{
							MessageBox::Show("Memory is Full","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
						}
				
				/*
						////////////////	for (int i=j;i<=19;i++)//iterate throw memory searching for empty hole
					{
						if (i==19)
							isfinish=true;
						if (memo[i]==0)//empty space in memory
							do//iterate throw hole
							{ 
							if (memo[j]==0)//available space in the hole
							{
								if (j==i+pro-1)//hole is suitable for the given process's size
								{
									if (isfinish==true)//iterated throw the hole memory
										break; 
									hole_size.push_back(j-i);
									listBox1->Items->Add(msclr::interop::marshal_as<String^>(to_string(j-i)));
								}
								
							}
							else //hole is not suitable for the given process'size
							{
								break; 
							}

						}while (memo[j]==0);
					}///////////////////
					*/
				}
				else
				{
					MessageBox::Show("No process available","error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
				}
				}
				else if (radioButton3->Checked==true)////////////////Worst Fit//////////////////////////////////
				{///////////FIXED PARTIONING//////////////CONTIGUOS ALLOCATION////////////
					if (ready_process.empty()==false)
				{
					counter2++;
					bool isfinish=false;
					int pro=ready_process.front(); //REPRESENT THE SIZE OF THE PROCESS
					int j=0; 
						if (hole_base.empty()==false)
					{
						for (int i = 0; i < hole_size.size(); i++) 
						{
							//if (i==hole_size.size())
							//	isfinish==true;
							if (pro<=hole_size[i])////// PROCESS FIT IN THE HOLE SIZE
					{
						isfinish=true;
						int x=hole_base[i];
						int y=hole_size[i];
						for(int z=hole_base[i];z<hole_base[i]+pro;z++)
								 memo[z]=pro;
						listBox1->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"        "+to_string(pro)+"        "+"True"+"         "+to_string(hole_base.at(i))));
						////removing the hole used by the process /// 
						for (int i = 0; i <hole_base.size(); i++)
								listBox5->Items->Add(msclr::interop::marshal_as<String^>(to_string(hole_size.at(i))));
						listBox5->Items->Add(msclr::interop::marshal_as<String^>("----------"));
						if (i==0)
						{
							hole_size.erase (hole_size.begin());
							hole_base.erase (hole_base.begin());
						}
						else
						{
							hole_size.erase (hole_size.begin()+i);
							hole_base.erase (hole_base.begin()+i);
						}
							for (int i = 0; i <hole_base.size(); i++)
								listBox5->Items->Add(msclr::interop::marshal_as<String^>(to_string(hole_size.at(i))));
							listBox5->Items->Add(msclr::interop::marshal_as<String^>("----------"));
							
						if (pro<y)////handling extra space in the hole////
						{
							add1_hole(x+pro,y-pro,0);
						}
						//listBox5->Items->Add(msclr::interop::marshal_as<String^>(to_string(hole_size.front())));
						//listBox5->Items->Add(msclr::interop::marshal_as<String^>(to_string(hole_base.front())));
						ready_process.pop();
						MessageBox::Show("process fit","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
						listBox2->Items->RemoveAt(1);
						break;
						}
						}
						if(isfinish==false)//process do not fit in the given holes
						 {
								MessageBox::Show("There is no eough spcae!","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
								listBox2->Items->RemoveAt(1);
								ready_process.pop();
								listBox3->Items->Add(msclr::interop::marshal_as<String^>("P"+to_string(counter2)+"="+to_string(pro)));
								wait_process.push(pro);
						}
						}
						else///Memory is full//////////
						{
							MessageBox::Show("Memory is Full","Error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
						}
					}
				else
				{
					MessageBox::Show("No process available","error", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
				}

}
			
			
			////////////////////////////////////////////////////////////////////////////////////////////
		 }
private: System::Void listBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) { 
		 }
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
};

}
