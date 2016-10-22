#ifndef RETANGULO_H
#define RETANGULO_H
#include <figurageometrica.h>

class Retangulo : public FiguraGeometrica{

    int x, y, largura, altura;


public:
    Retangulo(int x, int y, int largura, int altura);

    virtual void draw(Screen &t);

    virtual void pos(void);

};

#endif // RETANGULO_H

