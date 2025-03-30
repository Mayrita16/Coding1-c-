// Week 5 Coding Assignment 

#include <iostream>
#include <string>
using  namespace std;

int main() {

    string input; 
    string favGames[5];
    int gameCount = 0;

    cout << "TELL ME YOUR TOP 5 FAVORITE GAMES!\n";
    

    while (true) {

        cout << "Type: add, edit, remove, show, or quit\n";
        getline(cin, input);

        if (input == "add") {
            if(gameCount >= 5) {
                cout << "Sorry game list is full! Cannot add more games.\n";
                continue; 
            }
            cout << "Enter the name of the game to add: ";
            getline(cin, favGames[gameCount]);
            gameCount++;
            cout << "Yay! You added a game.\n";
        }
        else if (input == "edit") {
            if (gameCount == 0) {
                cout << "No games to edit.\n";
                continue;
            }

            cout << "Current Game List:\n";
            for (int i = 0; i < gameCount; i++) {
                cout << i + 1 << ". " << favGames[i] << "\n";
            }
            
            cout << "Enter the name of the game you wish to edit:\n";
            string oldGame;
            getline(cin, oldGame);

            int foundIndex = -1;

            for (int i = 0; i < gameCount; i++) {
                if (favGames[i] == oldGame) {
                    foundIndex = i;
                    break;
                }
            }
            
            if (foundIndex != -1) {
                cout << "Enter the new name for the game:\n";
                getline(cin, favGames[foundIndex]);
                cout << "Game updated successfully!\n";
            } else {
                cout << "UH OH! Game not found!\n";
            }
            
        }
        else if (input == "remove") {
            if (gameCount == 0) {
                cout << "No Games to remove.\n";
                continue;
            }

            cout << "Current Game List:\n";
            for (int i = 0; i < gameCount; i++) {
                cout << i + 1 << ". " << favGames[i] << "\n";
            }

            cout << "Enter the name of the game you wish to remove: ";
            string gameToRemove;
            getline(cin, gameToRemove);

            int foundIndex = -1;

            for (int i = 0; i < gameCount; i++) {
                if (favGames[i] == gameToRemove) {
                    foundIndex = i;
                    break;
                }
            }

            if (foundIndex != -1) {
               for (int j = foundIndex; j < gameCount - 1; j++) {
                favGames[j] = favGames[j + 1];
               }
               gameCount--;
               cout << "Yay! Game removed successfully!\n";
            } else {
                cout << "Sorry. Game not Found!\n";
            }

        }
        else if (input == "show") {
            if (gameCount == 0) {
                cout << "No games in the list.\n";
            } else {
                cout << "\nGame List:\n";
                for (int i = 0; i < gameCount; i++) {
                    cout << i + 1 << ". " << favGames[i] << "\n";
                }
            }
        }
        else if (input == "quit") {
            cout << "Quitting the Program.\n";
            break;

        }
        else {
            cout << "Invalid. Please type: add, edit, remove, show, or quit.\n";
        }

    }

    return 0;
}