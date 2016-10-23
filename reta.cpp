#include "reta.h"

Reta::Reta(int x0, int y0, int x1, int y1){
    this->x0=x0;
    this->y0=y0;
    this->x1=x1;
    this->y1=y1;
}

void Reta::draw(Screen &t){ //ajeitar o eixo x e o eixo y, estao trocados


    int rx, ry, dx, dy;
    float dxx, dyy;
    float angulo;

    dx=x1-x0;
    dy=y1-y0;

    dxx=dx;
    dyy=dy;


    if (dxx >= dyy){

        angulo = dyy/dxx;

        for(int i=0; i<dx; i++){
            rx=x0+i;
            ry=angulo*i+y0;

            t.setPixel(rx,ry);
        }
    }

    else {
        angulo = dxx/dyy;
        for (int i=0; i<dy; i++){
            rx=angulo*i+x0;
            ry=y0+i;

            t.setPixel(rx,ry);
        }
    }
}

void Reta::pos(){
    cout <<"(" << x0 << "," << y0 << ") -> (" << x1 << "," << y1 << ")";
}
