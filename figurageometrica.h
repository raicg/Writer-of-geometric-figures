#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <screen.h>

class figuraGeometrica
{

public:

    figuraGeometrica();

    virtual void pos(void)=0;

    virtual void draw(Screen &t)=0;

};

#endif // FIGURAGEOMETRICA_H
