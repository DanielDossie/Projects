#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <time.h>
using namespace std;

void createBracket(string team1,string team2,string team3,string team4) {
    cout << "Game 1: " << team1 << " vs. " << team4 << "\n";
    //cout << "------" << "    " << "-------";
    cout << "Game 2: " << team2 << " vs. " << team3 << "\n";
}

string simGame(string team1H, string team2A) {
    //cout << "DO WE GET HERE \n";
    int score1H;
    int score2A;
    int max = 48;
    score1H = rand() % max;
    score2A = rand() % max;
    //score1 = 50;
    cout << "" << team2A << ": " << score2A << "\n";
    cout << "" << team1H << ": " << score1H << "\n";
    if (score2A > score1H) {
        return team2A; 
    }
    else {
        return team1H;
    }
}

int main() {
    vector<string> teams = {"Giants", "Jets", "Falcons", "Cardinals"};
    cout << "Test Output: ";

    cout << "Here are the teams competing today: \n \n";
    for (const string& i : teams) {
        cout << i << "\n";
    }
    cout << "\n";
    createBracket(teams[0],teams[1],teams[2],teams[3]);

    cout << "\n" << "Would you like to simulate the first round?: \n";

    string cont;
    cin >> cont;
    if (cont == "yes") {
        cout << "And here are our results!\n \n";
    }
    else {
        cout << "Guess you'll never know the results!";
        return -1;
    }
    createBracket(teams[0],teams[1],teams[2],teams[3]);
    srand(time(0));
    cout << "Game 1: \n";
    string win1 = simGame(teams[0], teams[3]);
    cout << "\n";
    cout << "Game 2: \n";
    //srand(time(0));
    string win2 = simGame(teams[1], teams[2]);
    cout << "\n" << win1 << " and " << win2 << " have advanced!\n" << "Time for the finale!!!\n" << "Good luck to the " << win1 << " and " << win2 << " and congrats on making it this far\n" << "Final Results: \n";
    string winT = simGame(win1, win2);
    cout << "\nCONGRATS to the " << winT << " on this great achievement!";
    return 0;
}