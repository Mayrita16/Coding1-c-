// Mayra Vargas
// Loops And Lists 

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Welcome to week 5!\n";
 
    

    // if/else if/else
    //variables
    //while and do-whiles
    //random numbers 


    cout << "What program would you like to run?\n";
    cout << "Press 1 for keep Playing.\n";
    cout << "Press 2 for Player name.\n";

    string input;     // make a variable to store the input from the player 
    getline(cin, input);  //get the input from the player
    
    // test the input from the player 
    // stoi() stands for "string to integer" and converts a string to an integer (if it can)
    if (stoi(input) == 1) {
        cout << "Let'start the Keep Playing program.\n";
    }
    else if (stoi(input) == 2) {
        cout << "Let's start the Player Name program.\n";
    }
    else {
        cout << "I didn't understand that request.\n";
    }

    //lists 
      // arrays = ordered list of variables 
      // vectors
    // loops
      // for loop 
    // more logic 
      // switch statement 
      // if/elseif/else

    // ARRAYS 
    string colors[4];
    colors[0] = "Red";
    colors[1] = "Blue";
    colors[2] = "Green";
    colors[3] = "Yellow";

    cout << "The first color in our array of colors is " << colors[0] << ".\n";
    
    // let's loop through all of the color.
    cout << "Here are all of the colors in the array:\n";
    int iterator = 0;                           // the iterator counts, starting at 0 
    while (iterator < 4) {                       // loop as long as we're less than the array's size  
        cout << colors[iterator] << "\n";      // send the array's element's value to the console.
        iterator += 1;                         // add 1 to the iterator
    }

    //lets build a new list, using player input.
    cout << "Who are your best friends?\n";
   
    // keep using string input from earlier 
    string bestfriends[10];      // size of 10. arrays must specify size in c++.
    int currentElement = 0;      // this points at the next avaliable spot inthe array 
    do {
       cout << "Enter a name, or type 'quit' to quit.\n";
       getline(cin, input);   // using cin, get input and assign it to temp

       if (input == "quit") {
           break;
       }

       bestfriends[currentElement++] = input;     // after currentElement is used, add 1

    } while(currentElement < 10);       // ! is the not operator. "loop while input is Not equal to quit"
    
    // error looks like this:
    // there's a main()::input AND a do{}::input 
    
    cout << "Here are all of your best friends. Looks like a great party!\n";
    // for(setup, test, action) { code }
    for(int i = 0; i < 10; i++) {
        cout << bestfriends[i] << "\n";
    } 
    

    return 0;
}