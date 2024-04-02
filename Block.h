//---------------------------------------------------------------------------

#ifndef BlockH
#define BlockH

#include <map>
#include <vector>
#include "Position.h"
#include "GameGrid.h"


#define SUS 0
#define JOS 1
#define STANGA 2
#define DREAPTA 3

class Block{
private:
        int rotationState;
        Position offset;
protected:
       std::map<int, std::vector<Position> > tiles; //retine poz bl in st de rot
       Position StartOffset;
public:
        int ID;
        Block();
        void Init(int, int);
        void Draw(GameGrid &aGrid);
        void Delete(GameGrid &aGrid);
        void Move(GameGrid &aGrid, int, int);
        std::vector<Position> GetCellPositions();
        void Rotate();
        void UndoRotation();
        void Reset();
};
//---------------------------------------------------------------------------
#endif
