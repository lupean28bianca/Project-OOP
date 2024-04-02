//---------------------------------------------------------------------------
#include "Blocks.h"
#include "Doi.h"   //ca sa aibe acces la drwa grid
#include "GameGrid.h"
#include <vector>

#ifndef GameH
#define GameH

class Game{
public:
        GameGrid grid;
        Game();
        Block GetRandomBlock();
        std::vector<Block> GetAllBlocks();
        void Draw();
        void Directie(WORD &Key);
        void HandleInput();
        bool gameOver;
        void Restart();
        ~Game();
private:
        int direction;
        std::vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;
        bool IsBlockOutside();
        void RotateBlock();
        void Lock();
        bool CanSettle();
};
//---------------------------------------------------------------------------
#endif
