#include "football.h"

#include <iostream>

using namespace std;

int main(){
    ifstream fin;
    fin.open("football_players.txt", ios::in);
    /* Check if file is valid */
    if(!fin.is_open()){
        cout << "That file name is not valid." << endl;
        return 1;
    }
    
    int num_players;
    fin >> num_players;

    /* Populate array of players for however many players are in the file */
    Player* players = populate_player(fin, num_players);
    fin.close();
    // -----------------------------------------------------------------------------------------------

    
    
    /* Make one new player from a user input (see Skeleton function in football.cpp)*/

    /* Add the new player to the array of players */

    /* Write the players to a file */
    
    // Free memory

    return 0;
}