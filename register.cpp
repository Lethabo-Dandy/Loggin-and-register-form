//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "register.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//global declaration
AnsiString username, fullname, password;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnSignUpClick(TObject *Sender)
{
	//obtain the inputs
	username = edtUsername->Text;
	fullname = edtFullname->Text;
	password = edtPassword->Text;

	//check if there are no empty fields
	if (edtUsername->Text == "" || edtFullname->Text == "" || edtPassword->Text == "")
	{
	//display a messsage of the missing fields
		if (edtUsername->Text == "")
		{
			lblUsername->Visible = true;
		}
		if (edtFullname->Text == "")
		{
			lblFullname->Visible = true;
		}
		if (edtPassword->Text == "")
		{
			lblPassword->Visible = true;
		}
	}
	else
	{
		//open the log in form
		Panel2->Visible = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	//clear the entries then open the log in form
	Panel2->Visible = false;

	edtFullname->Text = "";
	edtUsername->Text = "";
	edtPassword->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	//Declare
	AnsiString user, pass;

	//obtain the inputs
	user = edtUser->Text;
	pass = mskPassword->Text;

	//check if there are no empty fields
	if (edtUser->Text == "" || mskPassword->Text == "")
	{
		//display a messsage of the missing fields
		if (edtUser->Text == "")
		{
			lblUsername->Visible = true;
		}
		if (mskPassword->Text == "")
		{
			lblPassword->Visible = true;
		}
	}
	else
	{
		ShowMessage(user + " you have succesfully logged in");
		Panel2->Visible = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	//show the register form
	Panel2->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	//handle forgotten password
	ShowMessage("an email has been sent to you for recovery");
}
//---------------------------------------------------------------------------

