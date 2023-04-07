//---------------------------------------------------------------------------


#pragma hdrstop

#include "Piesa.h"

//---------------------------------------------------------------------------
Piesa::Piesa()               // constructor fara parametrii
{
blocuri[0].SetXY(0,0);
blocuri[1].SetXY(0,0);
blocuri[2].SetXY(0,0);
blocuri[3].SetXY(0,0);
}

Piesa::Piesa(int x0, int y0)
{
        for (int i=0;i<4;i++)
        {
                blocuri[i].SetXY(x0,y0);
        }
}
void Piesa::construieste_PiesaPatrat()
{
blocuri[0].SetXY(pos[0],pos[1]);
blocuri[1].SetXY(pos[2],pos[3]);
blocuri[2].SetXY(pos[4],pos[5]);
blocuri[3].SetXY(pos[6],pos[7]);

}
void Piesa::construieste_PiesaLinie()
{
blocuri[0].SetXY(pos[0],pos[1]);
blocuri[1].SetXY(pos[2],pos[3]);
blocuri[2].SetXY(pos[4],pos[5]);
blocuri[3].SetXY(pos[6],pos[7]);
}
void Piesa::construieste_PiesaL()
{
blocuri[0].SetXY(pos[0],pos[1]);
blocuri[1].SetXY(pos[2],pos[3]);
blocuri[2].SetXY(pos[4],pos[5]);
blocuri[3].SetXY(pos[6],pos[7]);
}
void Piesa::construieste_PiesaT()
{
blocuri[0].SetXY(pos[0],pos[1]);
blocuri[1].SetXY(pos[2],pos[3]);
blocuri[2].SetXY(pos[4],pos[5]);
blocuri[3].SetXY(pos[6],pos[7]);
}
void Piesa::DeseneazaPiesa(TDrawGrid *tbl)
{
for (int i=0; i<4; i++)
	{
		blocuri[i].DeseneazaBloc(tbl);
	}
}

void Piesa::MutaPiesa(int dx,int dy,TDrawGrid *tbl)
{       if (VerificareMargini(dx,dy,tbl)==1){
        for(int i=0;i<4;i++)
        {
                blocuri[i].StergeBloc(tbl);
        }
for (int i=0; i<4; i++)
	{
		blocuri[i].MutaBloc(dx,dy,tbl);
        }
   }
}
void Piesa::StergePiesa(TDrawGrid *tbl)
{
        for(int i=0; i<4; i++)
        {
                blocuri[i].StergeBloc(tbl);
        }
}

int Piesa::VerificareMargini(int dx, int dy, TDrawGrid *tbl)
{
for (int i=0; i<=4; i++)
	{
		if (blocuri[i].GetX() + dx < 0 || blocuri[i].GetX() + dx > 19)
		{
			return 0;
		}
                if(blocuri[i].GetY() + dy > 29)
                {
                        return 3;
                }

	}
	return 1;
}

#pragma package(smart_init)
