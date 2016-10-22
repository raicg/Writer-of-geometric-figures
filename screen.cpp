#include "screen.h"

Screen::Screen(int nlin, int ncol){

        this -> nlin=nlin;
        this -> ncol=ncol;

        mat=vector < vector<char> > (nlin, vector<char> (ncol, ' '));
}


void Screen::setPixel(int x, int y){

    mat[x][y]=brush;

}


void Screen::clear(){

    for (int i=0; i<nlin; i++){

        for (int j=0; j<nlin; j++){

            if(mat[i][j]!=' '){
                mat[i][j]=' ';

            }
        }
    }
}


void Screen::setBrush(char brush){
    this -> brush=brush;
}
