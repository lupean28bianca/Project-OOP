//---------------------------------------------------------------------------

#ifndef DoiH
#define DoiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>

#include "Unu.h"
#include "Game.h"


//---------------------------------------------------------------------------
class TFereastraTetris : public TForm
{
__published:
        TLabel *tLabelLuck;
        TLabel *tLabelNume;
        TDrawGrid *dgGameGrid;
        TButton *Button1;
        TTimer *tTime;
        TButton *btnPauza;
        TButton *btnRestart;
        TButton *btnExitTetris;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall dgGameGridSelectCell(TObject *Sender, int ACol,
          int ARow, bool &CanSelect);
        void __fastcall tTimeTimer(TObject *Sender);
        void __fastcall btnPauzaClick(TObject *Sender);
        void __fastcall dgGameGridKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall btnExitTetrisClick(TObject *Sender);
        void __fastcall btnRestartClick(TObject *Sender);

private:
        Game *ob;
public:
        __fastcall TFereastraTetris(TComponent* Owner);   //constructorul
};
//---------------------------------------------------------------------------
extern PACKAGE TFereastraTetris *FereastraTetris;
//---------------------------------------------------------------------------
#endif
