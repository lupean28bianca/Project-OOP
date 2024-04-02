//---------------------------------------------------------------------------

#pragma hdrstop

#include "GameGrid.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
GameGrid::GameGrid(){
        Rows=20;
        Columns=10;
        Initialize();
}

void GameGrid::Initialize(){
        for(int r=0; r<Rows; r++){
            for(int c=0; c<Columns; c++){
                grid[r][c]=0;
            }
        }
}

int GameGrid::getIndex(int r, int c){
        return grid[r][c];
}

int GameGrid::setIndex(int r, int c, int value){
        grid[r][c]=value;
}

bool GameGrid::IsCellOutside(int r, int c){
        if(r>=0 && r<(Rows-1) && c>=0 && c<(Columns)){return false;} //daca pun c>0 si Columns-1 nu mai
        return true;                                                 //ies afara, dar raman blocate acolo
}

bool GameGrid::IsCellEmpty(int r, int c){
         if(grid[r][c]==0){
                return true;
        }
        return false;
}

bool GameGrid::IsRowFull(int r) {
    for (int c = 0; c < Columns; c++) {
         if (grid[r][c]==0) {
            return false;
        }
    }
    return true;
}

bool GameGrid::IsRowEmpty(int r){
       for(int c=0; c<Columns; c++){
                if(grid[r][c]=GOL){
                        return false;
                }
        }
        return true;
}

void GameGrid::ClearRow(int r){
        for(int c=0; c<Columns; c++){
                grid[r][c]=GOL;
         }
}

void GameGrid::MoveRowDown(int r, int numRows){
        for(int c=0; c<Columns; c++){
                grid[r+numRows][c]=grid[r][c];
                grid[r][c]=GOL;
        }
}

int GameGrid::ClearFullRows(){
        int cleared=0;
       for(int r=(this->Rows)-1; r>=0; --r){
                if(IsRowFull(r)){
                        ClearRow(r);
                        cleared++;
                }
                 else if(cleared>0){
                        MoveRowDown(r, cleared);
                }
        }
        return cleared;  //pentru scor
}





