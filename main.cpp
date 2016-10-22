#include <iostream>
#include "screen.h"
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main()
{
    Screen tela(30,30);
    tela.setBrush('@');
    Reta retaa(5,5,10,8);
    retaa.draw(tela);

    cout << tela;

    tela.clear ();




    Retangulo retanguloo(5,6,10,20);
    retanguloo.draw(tela);

    cout << tela;

    tela.clear ();





    Circulo circuloo(10,10,5,0);
    circuloo.draw(tela);

    cout << tela;

    tela.clear ();






    Circulo circulooo(10,10,5,1);
    circulooo.draw(tela);

    cout << tela;

    tela.clear ();




    return 0;
}
