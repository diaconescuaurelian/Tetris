//---------------------------------------------------------------------------

#ifndef GameH
#define GameH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include "Piesa.h"
#include "Piesa_PATRAT.h"
#include "Piesa_LINIE.h"
#include "Piesa_L.h"
#include "Piesa_T.h"





//---------------------------------------------------------------------------

class TJoc : public TForm
{
__published:	// IDE-managed Components
        TButton *btnStart;
        TButton *btnPause;
        TButton *btnAnPiece;
        TButton *btnExit;
        TDrawGrid *Tabla;
        TTimer *ceas;
        void __fastcall btnExitClick(TObject *Sender);
        void __fastcall TablaKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall ceasTimer(TObject *Sender);
        void __fastcall btnPauseClick(TObject *Sender);
        void __fastcall btnStartClick(TObject *Sender);
        void __fastcall btnAnPieceClick(TObject *Sender);
private:	// User declarations
         int FiguraCurenta;
         bool seJoaca;

public:		// User declarations

        //bool jocInprogres;
        __fastcall TJoc(TComponent* Owner);
        Piesa *figura;
        void generare_random();



};
//---------------------------------------------------------------------------
extern PACKAGE TJoc *Joc;
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#endif
