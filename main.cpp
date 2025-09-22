#include <iostream>
#include <string>

using namespace std;

// constants for number of people in shared library + number of games per person
const int NUM_PEOPLE = 3, NUM_GAMES = 4;

/* 
Simulating one person's game library, each struct contains
person's username and a dynamic array of the different games they have
*/
struct GameLibrary{
    string username;
    string *gamesList;
};

// main will contain a struct array that simulates a shared game library between friends/family
int main(){

}