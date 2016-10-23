#include "retangulo.h"
#include "reta.h"

Retangulo::Retangulo(int x, int y, int largura, int altura){
    this->x = x;
    this->y = y;
    this->largura=largura;
    this->altura=altura;
}

void Retangulo::draw(Screen &t){



    for (int i =0; i<=largura; i++){

        t.setPixel(x+i,y);

    }


    for (int i =0; i<=largura; i++){

        t.setPixel(x+i,y+altura);

    }


    for (int i =1; i<altura; i++){

        t.setPixel(x,y+i);

    }


    for (int i =1; i<altura; i++){

        t.setPixel(x+largura,y+i);

    }



}

void Retangulo::pos(){
    cout << "(" << x << "," << y << ")" << "largura: " << largura << ",  altura: " << altura;
}
