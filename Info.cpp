//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Info.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TtFormInfo *tFormInfo;
//---------------------------------------------------------------------------
__fastcall TtFormInfo::TtFormInfo(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TtFormInfo::btnBackClick(TObject *Sender)
{
        tFormIntro->Show();
        ModalResult = mrCancel;        
}
//---------------------------------------------------------------------------

