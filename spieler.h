//spieler.h
#ifndef SPIELER_H
#define SPIELER_H
#include <iostream>
using namespace std;

    class Spieler {
    private:
        int game_level;
        int first_cube;
        int second_cube;
        int summ_of_shot;
        int master_points;
    public:
        void shot();
        void pointStand();
        int game_progress();

        Spieler();
    };
#endif // SPIELER_H
