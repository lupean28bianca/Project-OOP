//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unu.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TtFormIntro *tFormIntro;
//---------------------------------------------------------------------------
__fastcall TtFormIntro::TtFormIntro(TComponent* Owner)
        : TForm(Owner)
{
    tImageStart->Stretch=true;
}
//---------------------------------------------------------------------------
void __fastcall TtFormIntro::tEditClick(TObject *Sender)  
{
       tEdit->Clear();
}

//---------------------------------------------------------------------------
void __fastcall TtFormIntro::tEditChange(TObject *Sender)
{
         FereastraTetris->tLabelNume->Caption=tFormIntro->tEdit->Text;
}

//---------------------------------------------------------------------------

void __fastcall TtFormIntro::btnStartClick(TObject *Sender)
{
        tFormIntro->Hide();
        FereastraTetris->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TtFormIntro::btnInfoClick(TObject *Sender)
{
        ShowMessage("Tetris is the addictive puzzle game that started it all, embracing our universal desire to create order out of chaos. The Tetris game was created by Alexey Pajitnov in 1984—the product of Alexey’s computer programming experience and his love of puzzles. In the decades to follow, Tetris became one of the most successful and recognizable video games, appearing on nearly every gaming platform available.");
}
//---------------------------------------------------------------------------

void __fastcall TtFormIntro::btnRulesClick(TObject *Sender)
{
        ShowMessage("Key UP-Rotate; Key DOWN-Soft drop; Key LEFT-Move left; Key RIGHT-Move right");

}
//---------------------------------------------------------------------------



