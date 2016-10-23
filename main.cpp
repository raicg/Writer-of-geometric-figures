#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include "screen.h"
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main()
{
    int nlin, ncol, x0reta, y0reta, x1reta, y1reta, xretangulo, yretangulo, altura, largura, xcirculo, ycirculo, raio, modo, qntdfiguras;
    char brush;


    ifstream ler;
    string linha;
    stringstream ss;
    ofstream escrever;
    vector <figuraGeometrica*>  figura;


    ler.open("D:\\entrada.txt");
    if (!ler.is_open()){
        cout << "O arquivo texto para leitura nao foi encontrado" << endl;
    }
    else{
        while(ler.good()){
            getline(ler,linha);
            if(ler.good()){
                ss.clear();
                ss.str(linha);
                while(ss.good()){
                    ss>>linha;
                    if(linha.compare(string("Dim"))==0){
                        ss>>nlin>>ncol;
                    }
                    if(linha.compare(string("Brush"))==0){
                        ss>>brush;
                    }
                    if(linha.compare(string("Reta"))==0){
                        ss>>x0reta>>y0reta>>x1reta>>y1reta;
                        figura.push_back(new Reta(x0reta,y0reta,x1reta,y1reta));

                    }
                    if(linha.compare(string("Retangulo"))==0){
                        ss>>xretangulo>>yretangulo>>largura>>altura;
                        figura.push_back(new Retangulo(xretangulo, yretangulo, largura, altura));

                    }
                    if(linha.compare(string("Circulo"))==0){
                        ss>>xcirculo>>ycirculo>>raio>>modo;
                        figura.push_back(new Circulo(xcirculo, ycirculo, raio, modo));

                    }
                }
            }
        }
    }

    Screen screen(nlin, ncol);
    qntdfiguras = figura.size();
    screen.setBrush(brush);
    for (int i=0; i<qntdfiguras; i++){
        figura[i]->draw(screen);
    }

    cout << screen;

    escrever.open("D:\\tela.txt");
    if(!escrever.is_open()){
            cout << "O arquivo texto para escrita nao foi encontrado" << endl;
        }

    if(escrever.is_open()){
        escrever << screen;
      }
    escrever.close();
}


