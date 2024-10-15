#include "football.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Player* add_new_player(Player* p, int &num_players, Player new_player){
    /* Create a new array of players */

    /* Copy the old array into the new array */

    /* Add the new player to the end of the new array */

    /* Increment the number of players */

    return ;

}

Player user_input(){
    /* Make a player object, and then get all of their attributes from the user */
    
    return ;
}

void write_players_to_file(Player* p, int num_players, ofstream &fout){
    /* Write the number of players to the file */
    
    /* Write each player to the file */
    
}
    

Player* populate_player(ifstream &fin, int num_players){
    /* Create a dynamic array of players */
    Player* p = new Player[num_players];

    /* Populate the array of players */
    for(int i = 0; i < num_players; i++){
        fin >> p[i].name;
        fin >> p[i].position;
        fin >> p[i].touchdowns;
    }

    /* Return the array of players */
    return p; 
}

void print_players(Player* p, int num_players){
    for(int i = 0; i < num_players; i++){
        cout << "Name: " << p[i].name << endl;
        cout << "Position: " << p[i].position << endl;
        cout << "Touchdowns: " << p[i].touchdowns << endl;
    }
}

void free_memory(Player* p){
    delete [] p;
    p = NULL;
}