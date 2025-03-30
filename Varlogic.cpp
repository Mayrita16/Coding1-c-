//Mayra Vargas Coding 1 Spring 2025 Week 3
//Varibles, Logic, Randomness 

#include <iostream>    //in out stream sends text to and from console. 
#include <string>      // allows us to use the string varibles.
#include <cstdlib>
#include <ctime>

using namespace std;   // so we dont have to type "std::" all the time.

// This is where the program starts running!
// its a function that returns an integer.
int main () {
    srand(time(0));
    cout << "Here's a random number for you: "  << rand() << ".\n";

     //modulus gives remainder of long division 
     cout << "7 divided by 2 = " << 7 / 2 << " with a remainder of " << 7 % 2 << " . \n";

     cout << " A random number between 1 and 10 (inclusive): " << (rand() % 10) + 1 << ".\n";

     // 1-10 inclusive could be 1 or 10.
     //1-10 exclusive could not be 1 or 10, but only 2 to 9.
     // This is called a while loop
     cout << " Here are this weeks grades for the class (between 50 and 100). \n";
     int counter = 0; 
     //while the test is true , keep looping
     //while (test) {code block }
     while (counter < 10) {
        counter += 1;    // explain after the break 
        cout << (rand() % 50) + 50;
     }

     cout << " Hello what is your name?\n";
     string input;                  //create a variable to hold player's input
     cin >> input;                  // assign input from console to input varible 

     if (input == "Mayra") {
        cout << " What is the Password?\n";
        cin >> input;
        if (input == "Pizza") {                 // nested if statement 
            cout << "Hello Creator!\n";
        }
        else {
            cout << "Imposter!!! ALERT ALERT ALERT\n";
            return 0;             // quits the program early 
        }
    }

    cout << " Are you ready to play a game?\n";
    // a character is a single character, anything you could type on your keyboard 
    char PlayerCharInput = 'n';
    // string name is an ordered list of characters, you could say its an array of characters 
    string name = "brian";

    int totalTurns = 0;

    do {
         cout << "Press 'Y' to keep playing.\n"; //Ask player for input 
         cin >> PlayerCharInput;                 // Get Input 
         totalTurns += 1;     // explain increment and combined assgnment operators 

          //totalTurns++;     // increment operator is ++ 

    } while (PlayerCharInput == 'y');             // Test the Input 

     //todo: Use a switch statement ( next time )
     cout << "You played for " << totalTurns << "!\n"; 
    



    // all code inside a code block should be indented.
    cout << "\tWelcome to week 3!\n"; 
    cout << "We're talking about varibles, logic, and randomness today. \n";

    // varibles are nicknames for data.
    // creating a varible of the type integer 
    // named "age"
    // with the value of 36.
    int age = 36;
    int score =0;         // declaring the varible, but not defining the varible.
 
    cout << "Always initiliazed your variables.\n";

    // lets talk about camelCase
    //capatalize each new word after the first one.
     int  playerOneFuelAmount = 43;

     // an ingteger is a whole number, positive or negative, between -2bil and +2bil.
     int oceanDepth = -234;

     //floats are floating-point numbers. they have a decimal point 
     // they're accurate to 7-digits 
     //creating a constant float named "pi" with the value of "3.1415"
     const float pi = 3.1415f;

     // doubles are just double-percision floating point numbers. accurate to 22-digits 
     double someNumberWithDecimalPlaces = 3456.7898456534;

     //your task: send these 4 numbers to the console. then run the program.
     cout << "Player 1's fuel amount is " << playerOneFuelAmount << ".\n";

     //when using random numbers, dont forget to
     //#include <cstdlib>        // for rand() and srand()
     //#include <ctime>          // for time()


} // End of main() 