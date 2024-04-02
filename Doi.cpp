//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Doi.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFereastraTetris *FereastraTetris;


//---------------------------------------------------------------------------
__fastcall TFereastraTetris::TFereastraTetris(TComponent* Owner)
        : TForm(Owner)
{
        ob=new Game();
}
//---------------------------------------------------------------------------

void __fastcall TFereastraTetris::Button1Click(TObject *Sender)
{
        ob->Draw();  //daca nu pun asta, blocul se deseneaza cu intarziere, dupa ce porneste timerul
        tTime->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFereastraTetris::tTimeTimer(TObject *Sender)
{
        ob->HandleInput();
        ob->Draw();
        dgGameGrid->SetFocus();

}
//---------------------------------------------------------------------------
void __fastcall TFereastraTetris::dgGameGridKeyDown(TObject *Sender,
      WORD &Key, TShiftState Shift)
{
tTime->Enabled=false;
ob->Directie(Key);
ob->HandleInput();
tTime->Enabled=true;
ob->Draw(); 
dgGameGrid->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TFereastraTetris::btnPauzaClick(TObject *Sender)
{
       tTime->Enabled=!tTime->Enabled;

}
//---------------------------------------------------------------------------
void __fastcall TFereastraTetris::btnExitTetrisClick(TObject *Sender)
{
        tFormIntro->Show();
        ModalResult = mrCancel;
        ob->~Game();
}
//---------------------------------------------------------------------------
void __fastcall TFereastraTetris::btnRestartClick(TObject *Sender)
{
        ob->gameOver=false;
        ob->Restart();        
}
//---------------------------------------------------------------------------
void __fastcall TFereastraTetris::FormClose(TObject *Sender, TCloseAction &Action)
{
        tFormIntro->Show();
        ModalResult = mrCancel;
        tTime->Enabled=false;  //in cazul in care aplicatie nu se inchide prin butonul exit, trebuie sa opresc timpul
        ob->~Game();
}
//---------------------------------------------------------------------------
void __fastcall TFereastraTetris::dgGameGridSelectCell(TObject *Sender,
      int ACol, int ARow, bool &CanSelect)
{
        CanSelect = false;   //ca sa deselectez patratelul origine
}
//---------------------------------------------------------------------------

