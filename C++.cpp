#include <iostream>
#include <cstdlib>
using namespace std;

// Rock Paper Scissors
// Quite simple I am not that good in c++ so this is the best I can do
// Note - Write the first word capital

void randomrock() {
    srand(time(0));
            int alpha = rand() %3;
            if (alpha == 0) {
                cout << "I chose paper so I win!";
            } else if (alpha == 1)
            {
                 cout << "It is a tie!";
            } else if (alpha == 2)  {
                cout << "You won :(";
            }
}

void randompaper() {
    srand(time(0));
            int beta = rand() %3;
            if (beta == 0) {
                cout << "I chose scissors so I win!";
            } else if (beta == 1)
            {
                 cout << "It is a tie!";
            } else if (beta == 2)  {
                cout << "You won :(";
            }
}

void randomscissors() {
    srand(time(0));
            int gamma = rand() %3;
            if (gamma == 0) {
                cout << "I chose rock so I win!";
            } else if (gamma == 1)
            {
                 cout << "It is a tie!";
            } else if (gamma == 2)  {
                cout << "You won :(";
            }
}


int main() {
    string empty = "";
    string rock = "Rock";
    string paper = "Paper";
    string scissors = "Scissors";
    string x;
    cout << "Choose One - " << rock << " " << paper << " " << scissors << ": ";
    cin >> x;
    try {
        if (x == rock) {
            cout << "Choosing...";
            randomrock();
        }
        throw empty;
    }
    catch(...) {
        if (x == paper) {
            randompaper();
        }
    }
    if (x == scissors) {
        randomscissors();
    }
}




