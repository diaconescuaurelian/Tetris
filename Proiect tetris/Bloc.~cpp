//---------------------------------------------------------------------------


#pragma hdrstop

#include "Bloc.h"

//---------------------------------------------------------------------------

Bloc::Bloc()               // constructor fara parametrii
{
        this->x=0;
        this->y=0;
}
Bloc::Bloc(int x0,int y0)      // constructor cu parametrii
{
        this->x=x0;
        this->y=y0;
}
void Bloc::SetXY(int x0,int y0)
{
        this->x=x0;
        this->y=y0;
}
void Bloc::DeseneazaBloc(TDrawGrid *tbl)
{
        tbl->Canvas->Brush->Color=clAqua;
        tbl->Canvas->FillRect(Rect(this->x*20,this->y*20,this->x*20+19,this->y*20+19));

}
void Bloc::MutaBloc(int dx,int dy,TDrawGrid *tbl)
{
        this->x+=dx;
        this->y+=dy;
        DeseneazaBloc(tbl);
}

void Bloc::StergeBloc(TDrawGrid *tbl)
{
        tbl->Canvas->Brush->Color=clGreen;
        tbl->Canvas->FillRect(Rect(this->x*20,this->y*20,this->x*20+19,this->y*20+19));
}

#pragma package(smart_init)
