#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    cout << "Hello Player! Ready for adventure?\n"; //welcome the player
    string input;
    cin >> input; 

     if (input == "Yes")  {
        cout << "Oh no! An enemy has spawned.\n";     //start the encounter 

     } else {
        cout << " Another time Then.\n";
     }
    
     
    
    
    int health = 10;                                // Set up the game 
    int turns =0;
   
    while (health > 0 && turns < 4) {
        turns++; 
    
    srand(time(0));
    int attack = (rand() % 5) + 1; 
    cout << "Turn" << turns << " - Attack" << attack << ".\n"; 
    int block = (rand() % 5) +1; 
    cout << "Turn" << turns <<  " - Block" << block << ".\n";

    if (block >= attack) {
        cout << "That was Close! No Damage Taken.\n";
    } else {
        health -= attack; 
        cout << "Ouch! Health reduced to: " << health << ".\n";
    }

    if (health > 0 && turns < 4 ) {
        cout << " Would you like to keep exploring? (Yes or No)\n";
        cin >> input;
      if (input == "No" || input == "no") {
        cout << "See You next time!\n";
        break;

      }
    }
}
    
    if (health > 0 ) {
        cout << "Yippie!! You survived the adventure.\n";
    } else {
        cout << "Yikes! GAME OVER :( You have been defeated.\n)";
    }
    
    
 
}

