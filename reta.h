#ifndef RETA_H
#define RETA_H
#include <figurageometrica.h>

class Reta : public FiguraGeometrica{

    int x0,x1;
    int y0,y1;


public:

    Reta(int x0, int y0, int x1, int y1);

    virtual void draw(Screen &t);

    virtual void pos(void);

};

#endif // RETA_H
