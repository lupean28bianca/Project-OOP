//---------------------------------------------------------------------------

#ifndef UnuH
#define UnuH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>

#include "Doi.h"
//---------------------------------------------------------------------------
class TtFormIntro : public TForm
{
__published:
        TEdit *tEdit;
        TButton *btnStart;
        TImage *tImageStart;
        TImage *tImageTitle;
        TButton *btnInfo;
        TButton *btnRules;
        void __fastcall tEditChange(TObject *Sender);
        void __fastcall btnStartClick(TObject *Sender);
        void __fastcall tEditClick(TObject *Sender);
        void __fastcall btnInfoClick(TObject *Sender);
        void __fastcall btnRulesClick(TObject *Sender);
public:
        __fastcall TtFormIntro(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TtFormIntro *tFormIntro;
//---------------------------------------------------------------------------
#endif
