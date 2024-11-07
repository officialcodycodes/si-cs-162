#include "football.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Player* add_new_player(Player* p, int &num_players, Player new_player){
    /* Create a new array of players */
    Player* new_array = new Player[num_players + 1];

    /* Copy the old array into the new array */
    for(int i = 0; i < num_players; i++){
        new_array[i] = p[i];
    }

    /* Add the new player to the end of the new array */
    new_array[num_players] = new_player;

    /* Increment the number of players */
    num_players++;

    /* Delete the old array */
    free_memory(p);

    /* Return the new array */
    return new_array;
}

Player user_input(){
    /* Make a player object, and then get all of their attributes from the user */
    Player p;
    cout << "Please enter the player's name: " << endl;
    cin >> p.name;
    cout << "Please enter the player's position: " << endl;
    cin >> p.position;
    cout << "Please enter the player's number of touchdowns: " << endl;
    cin >> p.touchdowns;

    return p;
}

void write_players_to_file(Player* p, int num_players, ofstream &fout){
    /* Write the number of players to the file */
    fout << "# of players: " << num_players << endl;

    /* Write each player to the file */
    for(int i = 0; i < num_players; i++){
        fout << "Name: " << p[i].name << endl;
        fout << "Position: " << p[i].position << endl;
        fout << "Touchdowns: " << p[i].touchdowns << endl;
    }
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