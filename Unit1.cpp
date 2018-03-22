//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
AnsiString nazwapliku = "";
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Otworz1Click(TObject *Sender)
{


if (OpenDialog2->Execute())
{
try{
 tresc->Lines->LoadFromFile(OpenDialog2->FileName);
 nazwapliku=OpenDialog2->FileName;
 }
 catch(...)
 {
  ShowMessage("B��d ! Upewnij si� czy to dobry plik yjzlu");
 }
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zapisz1Click(TObject *Sender)
{
 if (nazwapliku!="")
{
tresc->Lines->SaveToFile(nazwapliku)   ;
}
else{
Form1->Zapiszjako1Click(MainMenu1);}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zapiszjako1Click(TObject *Sender)
{
   if (SaveDialog1->Execute())
{
try{
 tresc->Lines->SaveToFile(SaveDialog1->FileName);
  nazwapliku=SaveDialog1->FileName;
 }
 catch(...)
 {
  ShowMessage("B��d ! Zapis si� nie uda�");
 }
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Nowy1Click(TObject *Sender)
{
if(Application->MessageBox("Czy na pewno utworzyc nowy plik?","Potwierd�",MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES)
{
tresc->Lines->Clear();
nazwapliku="";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::trescKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if(Shift.Contains(ssCtrl))
{
if((Key == 's') || (Key == 'S')){
      Form1->Zapisz1Click(MainMenu1);
}
if((Key == 'n') || (Key == 'N')){
      Form1->Nowy1Click(MainMenu1);
}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zakocz1Click(TObject *Sender)
{

if(Application->MessageBox("Czy na pewno zako�czyc ?","Exit",MB_YESNO | MB_ICONQUESTION) == IDYES)
{
Application->Terminate();
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
   if(Application->MessageBox("Czy na pewno zako�czyc ?","Exit",MB_YESNO | MB_ICONQUESTION) == IDNO)
{
Action=caNone;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Wytnijctrlx1Click(TObject *Sender)
{
 tresc->CutToClipboard() ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Kopiujctrlc1Click(TObject *Sender)
{
    tresc->CopyToClipboard() ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Wklejctrlv1Click(TObject *Sender)
{
    tresc->PasteFromClipboard() ;
         
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Zawijaniewieszy1Click(TObject *Sender)
{
if(Zawijaniewieszy1->Checked==true){
    Zawijaniewieszy1->Checked=false;
    tresc->WordWrap=false;
    tresc->ScrollBars=ssBoth;

}
else {
   Zawijaniewieszy1->Checked=true;
    tresc->WordWrap=true;
    tresc->ScrollBars=ssVertical;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Czcionka1Click(TObject *Sender)
{
     if(FontDialog1->Execute()){
      tresc->Font->Name=FontDialog1->Font->Name;
      tresc->Font->Color=FontDialog1->Font->Color;
      tresc->Font->Size=FontDialog1->Font->Size;
      tresc->Font->Style=FontDialog1->Font->Style;

     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Oprogramie1Click(TObject *Sender)
{
Form2->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Autor1Click(TObject *Sender)
{
  ShellExecute(NULL,"open","https://www.facebook.com/groups/449983391879126/?fref=ts",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------


