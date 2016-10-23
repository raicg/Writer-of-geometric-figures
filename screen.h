#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <iostream>

using namespace std;

class Screen{

    int nlin, ncol;

    char brush;

    vector< vector<char> > mat;


public:

    Screen(int nlin, int ncol);

    void setPixel(int x, int y);

    void clear();

    void setBrush(char brush);

    friend ostream& operator<<(ostream &os, const Screen &t){
        for(int i=0;i<t.nlin;i++){
            for (int j=0;j<t.ncol;j++){
                os << t.mat[i][j] << ' ';
            }
            os << endl;
        }
        return os;
    }



};

#endif // SCREEN_H
