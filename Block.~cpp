//---------------------------------------------------------------------------


#pragma hdrstop
#include "Block.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
Block::Block(){
        ID=GOL;
        rotationState = 0;
        StartOffset.Row = 0;
        StartOffset.Column = 0;
}

void Block::Init( int rows, int columns){
        offset.Row=rows;
        offset.Column=columns;
}

std::vector<Position> Block::GetCellPositions(){
        std::vector<Position> TILES= tiles[rotationState];
        std::vector<Position> movedTiles;
         for (int index = 0; index < TILES.size(); ++index){
                Position newPos=Position(TILES[index].Row+offset.Row,
                                         TILES[index].Column+offset.Column);
                movedTiles.push_back(newPos);
         }
         return movedTiles;
}

void Block::Draw(GameGrid &aGrid){
          std::vector<Position> tiles=GetCellPositions();
        for (int index = 0; index < tiles.size(); ++index) {
         //aGrid.setIndex( tiles[index].Row,tiles[index].Column, PIESA_MISCARE);  //pastrez pt documentatie
         aGrid.setIndex( tiles[index].Row,tiles[index].Column, ID);
    }
}

void Block::Delete(GameGrid &aGrid){
       std::vector<Position> tiles=GetCellPositions();
        for (int index = 0; index < tiles.size(); ++index) {
        aGrid.setIndex(tiles[index].Row,tiles[index].Column,GOL);}
}

void Block::Move(GameGrid &aGrid, int rows, int columns){
        Delete(aGrid);
        offset.Row+=rows;
        offset.Column+=columns;
        Draw(aGrid);
}

void Block::Rotate(){
        rotationState++;
        if(rotationState>3){
                rotationState=0;
        }
}
void Block::UndoRotation(){
        rotationState--;
        if(rotationState==-1){
                rotationState=3;
        }
}

void Block::Reset(){
        rotationState=0;
        offset.Row=StartOffset.Row;
        offset.Column=StartOffset.Column;
}


