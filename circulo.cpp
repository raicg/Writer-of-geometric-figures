#include "circulo.h"
#include <cmath>


Circulo::Circulo(int x0, int y0, int raio, int modo){
    this->x0=x0;
    this->y0=y0;
    this ->raio=raio;
    this->modo=modo;
}

void Circulo::draw(Screen &t){
    double inverso = 1/(double)raio;
    double volta[100];
    int dx=0;
    int dy = raio-1;
    int dyy = raio-1;


    for (int i=0; i<100; i++){
        volta[i]=0;
    }
    if (modo==0){
        for (int i=dx; i<=dy; i++){

              t.setPixel(x0-dy,y0+i);
              t.setPixel(x0-i,y0+dy);
              t.setPixel(x0+i,y0+dy);
              t.setPixel(x0+dy,y0+i);
              t.setPixel(x0+dy,y0-i);
              t.setPixel(x0+i,y0-dy);
              t.setPixel(x0-i,y0-dy);
              t.setPixel(x0-dy,y0-i);

              volta[0] = volta[0]+inverso;
              dy = raio * sin(acos(volta[0]));

         }
    }

    else {

        for (int i=raio; i>=1; i--){

            for (int j=dx; j<=dy; j++){

                t.setPixel(x0-dy,y0+j);
                t.setPixel(x0-j,y0+dy);
                t.setPixel(x0+j,y0+dy);
                t.setPixel(x0+dy,y0+j);
                t.setPixel(x0+dy,y0-j);
                t.setPixel(x0+j,y0-dy);
                t.setPixel(x0-j,y0-dy);
                t.setPixel(x0-dy,y0-j);

                volta[i] = volta[i]+inverso;
                dy = i * sin(acos(volta[i]));

        }

}
}

for (int i=0; i<100; i++){
    volta[i]=0;
}
}

void Circulo::pos(){
    cout << "centro: ("<< x0 << "," << y0 << ")   raio: " << raio;
}




