//---------------------------------------------------------------------------
#pragma hdrstop

#include <vcl.h>
#include <cstdlib>

#include "Game.h"

#define L 1
#define J 2
#define I 3
#define O 4
#define S 5
#define T 6
#define Z 7

//---------------------------------------------------------------------------

#pragma package(smart_init)
Game::Game(){
        grid=GameGrid();
        blocks=GetAllBlocks();
        currentBlock=GetRandomBlock();
        nextBlock=GetRandomBlock();
        direction=JOS;
        currentBlock.Draw(grid);
        gameOver=false;
}
Block Game::GetRandomBlock(){
        srand(static_cast<unsigned>(time(NULL)));
        if(blocks.empty()){ blocks=GetAllBlocks();}
        int randomIndex=rand()%blocks.size();
        Block block=blocks[randomIndex];

        blocks.erase(blocks.begin()+randomIndex);
        return block;
}

std::vector<Block> Game::GetAllBlocks(){
        std::vector <Block> aux;
        aux.push_back(IBlock());
        aux.push_back(JBlock());
        aux.push_back(LBlock());
        aux.push_back(OBlock());
        aux.push_back(SBlock());
        aux.push_back(TBlock());
        aux.push_back(ZBlock());
        return aux;
}

void Game::Draw(){
       /* Nu afisam doar piesa ci afisam tot ceea ce se gaseste in grid
        pentru ca la un moment dat in grid sunt mult mai multe piese si doar una se misca
        dar noi trebuie sa le afisam pe toate
        Vezi proiectul de Snake prezentat de mine
        */
       for (int row = 0; row < grid.Rows; ++row) {
        for (int col = 0; col < grid.Columns; ++col){

            TRect d = FereastraTetris->dgGameGrid->CellRect(col, row);
             switch (grid.getIndex(row, col))
             {
               case GOL:
                        FereastraTetris->dgGameGrid->Canvas->Brush->Color = cl3DDkShadow;
                        break;
               /*case PIESA_MISCARE:                                                      //pentru documentatie
                        FereastraTetris->dgGameGrid->Canvas->Brush->Color = clYellow;
                        break;*/

               /*case PIESA_ASEZATA:
                        FereastraTetris->dgGameGrid->Canvas->Brush->Color = clBlue;
                        break;*/
               case I:
                      FereastraTetris->dgGameGrid->Canvas->Brush->Color = clAqua;
                      break;

               case L:
                      FereastraTetris->dgGameGrid->Canvas->Brush->Color = clBackground;
                      break;
               case J:
                      FereastraTetris->dgGameGrid->Canvas->Brush->Color = clBlue;
                      break;
               case T:
                      FereastraTetris->dgGameGrid->Canvas->Brush->Color = clFuchsia;
                      break;
               case S:
                      FereastraTetris->dgGameGrid->Canvas->Brush->Color = clLime;
                      break;
               case Z:
                      FereastraTetris->dgGameGrid->Canvas->Brush->Color = clRed;
                      break;
               case O:
                      FereastraTetris->dgGameGrid->Canvas->Brush->Color = clYellow;
                      break;
             }
             FereastraTetris->dgGameGrid->Canvas->Rectangle(d);
            }
        }
}


void Game::Directie(WORD &Key){
        switch(Key){
                case VK_UP: if(!gameOver){RotateBlock();} break;
                case VK_DOWN: if(!gameOver){if(IsBlockOutside()) direction=JOS;} else{gameOver=true; ShowMessage("Game Over");} break;
                case VK_LEFT: if(!gameOver){if(IsBlockOutside()) direction=STANGA;} break;
                case VK_RIGHT: if(!gameOver){if(IsBlockOutside()) direction=DREAPTA;} break;
        }
}


void Game::HandleInput(){
        currentBlock.Delete(grid);
        switch(direction){
                case JOS: if(!gameOver){grid.ClearFullRows(); if(IsBlockOutside() && (CanSettle()==true)) currentBlock.Move(grid, 1,0); else {Lock();}} break;
                case STANGA: if(!gameOver){if(!IsBlockOutside())currentBlock.Move(grid,0,1); else {currentBlock.Move(grid, 0,-1); } ; direction=JOS; }   break;
                case DREAPTA: if(!gameOver){if(!IsBlockOutside()) currentBlock.Move(grid,0,-1); else {currentBlock.Move(grid, 0,1);} ; direction=JOS;} break;
        }
}


bool Game::IsBlockOutside(){
        std::vector<Position> tiles=currentBlock.GetCellPositions();
        for (int index = 0; index < tiles.size(); ++index){
                if(grid.IsCellOutside(tiles[index].Row, tiles[index].Column)){
                        //am ajuns jos trebuie sa scriu piesa in grid si sa generez alta
                        for (int index = 0; index < tiles.size(); ++index){
                          //grid.setIndex(tiles[index].Row,tiles[index].Column, PIESA_ASEZATA);      //pt documentatie
                          grid.setIndex(tiles[index].Row,tiles[index].Column, currentBlock.ID);
                        }
                         currentBlock=nextBlock;
                         nextBlock=GetRandomBlock();
                        return false;
                }
        }
        return true;
}


void Game::RotateBlock(){
        if(currentBlock.ID !=4){   
        currentBlock.Delete(grid);
        currentBlock.Rotate();
        if(!IsBlockOutside()){
                currentBlock.UndoRotation();
        } }
        currentBlock.Draw(grid);
}

void Game::Lock(){
        std::vector<Position> tiles=currentBlock.GetCellPositions();
        for(int index = 0; index < tiles.size(); ++index){
                //grid.grid[tiles[index].Row][tiles[index].Column]=PIESA_ASEZATA;
                grid.grid[tiles[index].Row][tiles[index].Column]=currentBlock.ID;
        }
        currentBlock=nextBlock;
        if(CanSettle()==false){
              gameOver=true;
        }
        nextBlock=GetRandomBlock();

}
bool Game::CanSettle(){
       std::vector<Position> tiles=currentBlock.GetCellPositions();
       for(int index = 0; index < tiles.size(); ++index)
       {
        if(grid.IsCellEmpty(tiles[index].Row+1,tiles[index].Column)==false)
        {return false;}
       }
       return true;
}

void Game::Restart(){
        grid.Initialize();
        blocks=GetAllBlocks();
        currentBlock=GetRandomBlock();
        nextBlock=GetRandomBlock();
}

Game:: ~Game(){
} 







