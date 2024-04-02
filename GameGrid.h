//---------------------------------------------------------------------------

#ifndef GameGridH
#define GameGridH

//#include "Position.h"

#define GOL 0
class GameGrid{
private:
        bool IsRowFull(int);
        void ClearRow(int r);
        void MoveRowDown(int r, int numRows);
public:
        int grid[20][10];   //ar fi trebuit totusi incapsulare
        GameGrid();
        int Rows;
        int Columns;
        int getIndex(int, int);
        int setIndex(int, int, int);
        void Initialize();
        bool IsCellOutside(int, int);
        bool IsCellEmpty(int, int);
        bool IsRowEmpty(int);
        int ClearFullRows();
};
//---------------------------------------------------------------------------
#endif
