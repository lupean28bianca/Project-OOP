//---------------------------------------------------------------------------

#ifndef RulesH
#define RulesH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>

#include "Unu.h"
//---------------------------------------------------------------------------
class TtFormRules : public TForm
{
__published:
        TButton *btnBack2;
        TImage *tImageRules;
        void __fastcall btnBack2Click(TObject *Sender);
public:
        __fastcall TtFormRules(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TtFormRules *tFormRules;
//---------------------------------------------------------------------------
#endif
