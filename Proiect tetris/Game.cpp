//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Game.h"
#include "time.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TJoc *Joc;



//---------------------------------------------------------------------------
__fastcall TJoc::TJoc(TComponent* Owner)
        : TForm(Owner)
{

        generare_random();
        
}
//---------------------------------------------------------------------------

//-----------------------------------------------------------------------
void __fastcall TJoc::btnExitClick(TObject *Sender)
{
exit(0);
}
//---------------------------------------------------------------------------


void __fastcall TJoc::TablaKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{

/*
nextPiece=false;
if(Tabla->Color==clAqua)
{
nextPiece==true;
}
*/
if (seJoaca==true)
        {


                switch (Key)
                {
                        case 0x53:
                        {       
                                this->figura->MutaPiesa(0,2,Tabla);
                                break;
                        }

                        case 0x44:
                        {
                                this->figura->MutaPiesa(1,0,Tabla);
                                break;
                        }

                        case 0x41:
                        {
                                this->figura->MutaPiesa(-1,0,Tabla);
                                break;
                        }
                        case VK_UP:
                        {
                                                
                                                this->figura->StergePiesa(Tabla);
                                                this->figura->rotire1();
                                                this->figura->DeseneazaPiesa(Tabla);
                                                
                                                break;
                        }
                        case VK_RIGHT:
                        {                       this->figura->StergePiesa(Tabla);
                                                this->figura->rotire2();
                                                this->figura->DeseneazaPiesa(Tabla);

                                                break;
                        }
                        case VK_DOWN:
                        {

                                                this->figura->StergePiesa(Tabla);
                                                this->figura->rotire3();
                                                this->figura->DeseneazaPiesa(Tabla);
                                                
                                                break;
                        }
                        case VK_LEFT:
                        {                       this->figura->StergePiesa(Tabla);
                                                this->figura->rotire4();
                                                this->figura->DeseneazaPiesa(Tabla);
                                                
                                                break;
                        }


                }
                if(figura->VerificareMargini(0,1,Tabla)==3)
                        {
                                generare_random();
                        }
        }
}
//---------------------------------------------------------------------------

void __fastcall TJoc::ceasTimer(TObject *Sender)
{
        if(figura)
        this->figura->MutaPiesa(0,1,Tabla);
}
//---------------------------------------------------------------------------

void __fastcall TJoc::btnPauseClick(TObject *Sender)
{
ceas->Enabled=false;
seJoaca=false;
btnStart->Visible=true;


}
//---------------------------------------------------------------------------

void __fastcall TJoc::btnStartClick(TObject *Sender)
{

  seJoaca=true;
  this->ceas->Enabled=true;        
}
//---------------------------------------------------------------------------

void __fastcall TJoc::btnAnPieceClick(TObject *Sender)
{
seJoaca=true;
figura->StergePiesa(Tabla);
this->ceas->Enabled=true;
generare_random();
}
//---------------------------------------------------------------------------
void TJoc::generare_random()
{
        srand(time(NULL));
        FiguraCurenta = rand()%4;
         switch(FiguraCurenta){
                case 0:
                {
                        figura=new Piesa_PATRAT(9,0);
                        figura->DeseneazaPiesa(Tabla);
                        break;
                }
                case 1:
                {
                        figura = new Piesa_LINIE(9,0);
                        figura->DeseneazaPiesa(Tabla);
                        break;
                }
                case 2:
                {
                        figura = new Piesa_L(10,0);
                        figura->DeseneazaPiesa(Tabla);
                        break;
                }
                case 3:
                {
                        figura = new Piesa_T(10,0);
                        figura->DeseneazaPiesa(Tabla);
                        break;
                }
        }
}

//void TForm1::coliziune()

