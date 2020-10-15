//Spieler.cpp
#include "spieler.h"
#include <iostream>
#include <time.h>
using namespace std;
Spieler::Spieler(){
    game_level = 1;
    first_cube = 0;
    second_cube = 0;
    summ_of_shot = 0;
    master_points = 0;
}

void Spieler::shot(){
    srand (time(NULL));
    first_cube = rand() % 6 + 1;
    second_cube = rand() % 6 + 1;
    summ_of_shot = first_cube + second_cube;
    pointStand();
}
void Spieler::pointStand(){
cout <<"-------------------------" << endl <<"|\t" << "Summe: "<< summ_of_shot << "\t|" << endl << "-------------------------" << endl;
for( int cube = 1; cube <= 2; cube++){  // iteration through the dice 1 and 2
    int dice_label;
    if(cube == 1){
        cout << "First dice: " << first_cube << endl;
        dice_label = first_cube;
    }
    else {
        cout << "Second dice: " << second_cube << endl;
        dice_label = second_cube;
    }
        for(int Row = 0; Row <= 4; Row++){
            for( int Column = 0; Column <= 4; Column++){
                if(dice_label == 1){
                    if(Row == 2 && Column == 2){
                        cout << "O ";
                    }
                    else {
                        cout << "  ";
                    }
                }
                if(dice_label == 2){
                    if((Row == 1 && Column == 3) || (Row == 3 && Column == 1)){
                        cout << "O ";
                    }
                    else {
                        cout << "  ";
                    }
                }
                if(dice_label == 3){
                    if((Row == 1 && Column == 1) ||
                       (Row == 2 && Column == 2) ||
                       (Row == 3 && Column == 3)
                    ){
                        cout << "O ";
                    }
                    else {
                        cout << "  ";
                    }
                }
                if(dice_label == 4){
                    if((Row == 1 && Column == 1) ||
                       (Row == 3 && Column == 1) ||
                       (Row == 1 && Column == 3) ||
                       (Row == 3 && Column == 3)
                    ){
                        cout << "O ";
                    }
                    else {
                        cout << "  ";
                    }

                }
                if(dice_label == 5){
                    if((Row == 1 && Column == 1) ||
                       (Row == 3 && Column == 1) ||
                       (Row == 1 && Column == 3) ||
                       (Row == 3 && Column == 3) ||
                       (Row == 2 && Column == 2)
                    ){
                        cout << "O ";
                    }
                    else {
                        cout << "  ";
                    }
                }
                if(dice_label == 6){
                    if((Row == 1 && Column == 1) ||
                       (Row == 2 && Column == 1) ||
                       (Row == 3 && Column == 1) ||
                       (Row == 1 && Column == 3) ||
                       (Row == 2 && Column == 3) ||
                       (Row == 3 && Column == 3)
                    ){
                        cout << "O ";
                    }
                    else {
                        cout << "  ";
                    }
                }
            }
            cout << endl;
        }
    }
}
int Spieler::game_progress(){
        if(game_level == 1 && summ_of_shot == 7){
            cout << "Level 1 WIN" << endl;
            return 0;
        }
        if(game_level == 1 && (summ_of_shot == 2 || summ_of_shot == 3 || summ_of_shot == 12)){
            cout << "Level 1 LOSE" << endl;
            return 1;
        }
        else{
            game_level++;
            cout << "Weiter Wuerfeln" << endl;
            shot();
        }
        if(game_level >= 2 && summ_of_shot == 7){
            cout << "Level 2 LOSE" << endl;
            return 1;
        }
        if(game_level >= 2 && (summ_of_shot == master_points)){
            cout << "Level 2 WIN" << endl;
            return 0;
        }

}
