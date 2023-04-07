//---------------------------------------------------------------------------

#ifndef Piesa_TH
#define Piesa_TH
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include "Piesa.h"
//---------------------------------------------------------------------------

class Piesa_T:public Piesa
{
public:
        Piesa_T(int x, int y);
        void rotire1();
        void rotire2();
        void rotire3();
        void rotire4();
};
#endif
