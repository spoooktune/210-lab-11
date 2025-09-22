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

    ~GameLibrary(){
        if (gamesList){
            delete [] gamesList;
            gamesList = nullptr;
        }
    }
};

void inputData(GameLibrary *user);
void displayData(GameLibrary *user);

void inputData(GameLibrary *user){
    cout << "Adding new user\n> Username: ";
    cin >> user->username;
    user->gamesList = new string[NUM_GAMES];
    for (int i = 0; i < NUM_GAMES; i++){
        cout << "> Game #" << i+1 << ": ";
        getline(cin, user->gamesList[i]);
    }
    cin.ignore();
    cout << endl << endl;
}

void displayData(GameLibrary *user){
    cout << "Username: " << user->username;
    cout << "Game List: " << endl;
    for (int i = 0; i < NUM_GAMES; i++){
        cout << "> " << user->gamesList[i] << endl;
    }
    cout << endl << endl;
}

// main will contain a struct array that simulates a shared game library between friends/family
int main(){

}