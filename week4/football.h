#ifndef FOOTBALL_H
#define FOOTBALL_H

#include <iostream>
#include <string>
#include <fstream>  //file stream

using namespace std;

struct Player{
    // Name, position, and # of touchdowns
    string name;
    string position;
    int touchdowns;
};

// New functions
Player* add_new_player(Player*, int &, Player);
Player user_input();
void write_players_to_file(Player*, int, ofstream&);

// Functions from week 3
Player* populate_player(ifstream &, int);
void print_players(Player*, int);
void free_memory(Player*);


#endif