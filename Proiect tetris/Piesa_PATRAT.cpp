//---------------------------------------------------------------------------


#pragma hdrstop

#include "Piesa_PATRAT.h"

//---------------------------------------------------------------------------


Piesa_PATRAT::Piesa_PATRAT(int x, int y):Piesa()
{
        pos[0] = x;
	pos[1] = y;
	pos[2] = x+1;
	pos[3] = y;
	pos[4] = x;
	pos[5] = y+1;
	pos[6] = x+1;
	pos[7] = y+1;
        construieste_PiesaPatrat();
}
void Piesa_PATRAT::rotire1()
{


}
void Piesa_PATRAT::rotire2()
{
   
}
void Piesa_PATRAT::rotire3()
{

}
void Piesa_PATRAT::rotire4()
{

}
#pragma package(smart_init)
