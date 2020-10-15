#include <iostream>
#include "spieler.h"
using namespace std;

int main(){
    Spieler gamer_1;
    int test;
    cout << endl << "Das Spiel beginnt" << endl;
    do{
        gamer_1.shot();
        test = gamer_1.game_progress();
    }while (test==2);

    return 0;
}
