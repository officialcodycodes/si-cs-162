#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/* Define a Struct for football players */
struct Player{
    // Name, position, and # of touchdowns
    string name;
    string position;
    int touchdowns;
};

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

int main(){

    /* Create a file stream object */
    ifstream fin;

    /* Attempt to open file */
    fin.open("football_players.txt", ios::in);

    /* Check if file is valid */
    if(!fin.is_open()){
        cout << "That file name is not valid." << endl;
        return 1;
    }

    /* First, read the number of players (top line of file) */
    int num_players;
    fin >> num_players;

    /* Populate array of players for however many players are in the file */
    Player* players = populate_player(fin, num_players);

    /* Close the file */
    fin.close();

    /* Print out the array of players */
    print_players(players, num_players);

    /* Free the memory */
    free_memory(players);

    return 0;
}