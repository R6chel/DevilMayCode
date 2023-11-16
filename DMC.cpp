//This game is a work in progress! It will eventually feature extensive combat system with jRPG turn based mechanics.
//Currently implementing: player HP, various attacks, moves, techniques, effects such as buffs and debuffs, cooldown per action, randomizer (Critical Strike Chance, attack evasion, parry/Royal Guard.) 

#include <iostream>
using namespace std;

int main() {

    cout << "\n-DevilMayCode-\n\n";

    int hp = 5000;
    cout << "Enemy HP: " << hp << "\n";

    while(hp > 0) {

        int atk;
        cout << "\n1: LIGHT ATK\n2: HEAVY ATK\n\nSelect move: ";
        cin >> atk;
        
        switch(atk) {

            case 1:
                hp -= 500;
                break;
            case 2:
                hp -= 850;
                break;
            default:
                cerr << "Select a valid action!";
        }

        if(hp >= 0) {
            cout << "Enemy HP left: " << hp << "\n";
        } else {
            cout << "\nVictory!\n";
        } 
    }

    return 0;
}