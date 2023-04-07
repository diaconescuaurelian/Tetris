//---------------------------------------------------------------------------

#ifndef BlocH
#define BlocH



//---------------------------------------------------------------------------

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>

class Bloc
{
private:
        int x,y;
public:
        Bloc();
        Bloc(int x0,int y0);
        void SetXY(int x0,int y0);
        int GetX(){ return(x); };
        int GetY(){ return(y); };
        void DeseneazaBloc(TDrawGrid *tbl);
        void MutaBloc(int dx,int dy, TDrawGrid *tbl);
        void StergeBloc(TDrawGrid *tbl);

};
#endif
 