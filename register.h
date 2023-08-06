//---------------------------------------------------------------------------

#ifndef registerH
#define registerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TPanel *Panel1;
	TLabel *Label1;
	TEdit *edtUser;
	TButton *Button1;
	TLabel *Label2;
	TButton *Button2;
	TPanel *Panel2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *edtFullname;
	TEdit *edtUsername;
	TButton *btnSignUp;
	TButton *Button4;
	TButton *Button5;
	TEdit *edtPassword;
	TLabel *lblFullname;
	TLabel *lblUsername;
	TLabel *lblPassword;
	TLabel *Label5;
	TLabel *Label6;
	TMaskEdit *mskPassword;
	void __fastcall btnSignUpClick(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
