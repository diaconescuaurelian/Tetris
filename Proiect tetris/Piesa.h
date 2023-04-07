//---------------------------------------------------------------------------

#ifndef PiesaH
#define PiesaH

#include "Bloc.h"
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class Piesa
{
protected:
        Bloc blocuri[4];
public:
        int pos[8];
        Piesa();
        Piesa(int x0,int y0);
        void construieste_PiesaPatrat();
        void construieste_PiesaLinie();
        void construieste_PiesaL();
        void construieste_PiesaT();
        void DeseneazaPiesa(TDrawGrid *tbl);
        void MutaPiesa(int dx,int dy,TDrawGrid *tbl);
        void StergePiesa(TDrawGrid *tbl);
        
        int VerificareMargini(int dx, int dy, TDrawGrid *tbl);
        virtual void rotire1()=0;
        virtual void rotire2()=0;
        virtual void rotire3()=0;
        virtual void rotire4()=0;
};
#endif
