//---------------------------------------------------------------------------


#pragma hdrstop

#include "Piesa_LINIE.h"

//---------------------------------------------------------------------------

Piesa_LINIE::Piesa_LINIE(int x, int y):Piesa()
{
        pos[0] = x-1;
	pos[1] = y;
	pos[2] = x;
	pos[3] = y;
	pos[4] = x+1;
	pos[5] = y;
	pos[6] = x+2;
	pos[7] = y;
        construieste_PiesaLinie();
}
void Piesa_LINIE::rotire1()
{
        pos[0]++;
	pos[1]++;


	pos[4]--;
	pos[5]--;

	pos[6]-=2;
	pos[7]-=2;
        construieste_PiesaLinie();

}
void Piesa_LINIE::rotire2()
{

        pos[0]--;
	pos[1]--;

	pos[4]++;
	pos[5]++;
	pos[6]+=2;
	pos[7]+=2;
        construieste_PiesaLinie();


}
void Piesa_LINIE::rotire3()
{
        pos[0]++;
	pos[1]++;


	pos[4]--;
	pos[5]--;

	pos[6]-=2;
	pos[7]-=2;
        construieste_PiesaLinie();
}

void Piesa_LINIE::rotire4()
{
        pos[0]--;
	pos[1]--;

	pos[4]++;
	pos[5]++;
	pos[6]+=2;
	pos[7]+=2;
        construieste_PiesaLinie();
}

#pragma package(smart_init)
