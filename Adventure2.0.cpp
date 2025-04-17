// Week 10 Homework 


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int health = 30;
int totalTreasure = 0;

void Story() {
    cout << "You are embarking on a treasure hunt full of danger. Will you survive? Let's find out!\n";
    cout << "You have 30 health!";
}

bool AskYesNo(string question) {
    string input;
    cout << question << " (y/n): ";
    cin >> input;
    return (input == "y" || input == "Y");
}

int RollDie(int sides = 6) {
    return rand() % sides + 1;
}

bool Adventure() {
    int enemyAttack = RollDie();
    int playerBlock = RollDie();
    int treasure = RollDie();

    cout << "An enemy attacks with strength " << enemyAttack << "!\n";
    cout << "You block With Strength: " << playerBlock << "!\n";

    if (playerBlock >= enemyAttack) {
        cout << "You blocked the attack and found " << treasure << " treasure!\n";
        totalTreasure += treasure;
    } else {
        cout << "OH NO! You were hit! You lose " << enemyAttack << " health.\n";
        health -= enemyAttack;
    }

    cout << "Current Health:" << health << ", Total Treasure: " << totalTreasure << "\n";

    if (health <= 0) {
        cout << "You have been defeated! Better luck next time.\n";
        return false;
    }

    return AskYesNo("Would you like to keep the adventure going?");

}

void Ending() {
    if (health <= 0) {
        cout << "Sorry, you have died on your adventure.\n";
    } else {
        cout << "YAYYYY! You survived the adventure with " << health << "health and " << totalTreasure << "treasure!\n\n";
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    Story();

    if (AskYesNo("Would you like to start adventuring?")) {
        bool continueAdventure = true;
        while (continueAdventure && health > 0) {
            continueAdventure = Adventure();
        }
    } else {
        cout << "Aww, maybe another day then..\n";
    }

    Ending();

    return 0;
}
 