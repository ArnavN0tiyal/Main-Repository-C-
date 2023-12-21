#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Number Guessing Game
// Variable c must equal variable a
void numberguessgame(int a, int b, int c) {
    int x;
    srand(time(NULL));
    int y = rand() %a + b;
    do {
        cout << "Pick any number from 1 to" << " " << c << ": ";
        cin >> x;
        if (x > y) {
            cout << "Lower! \n";
        } else if(x < y) {
            cout << "Higher! \n";
        } else {
            cout << "You won!";
        }
    } while (x != y);
}
int main() {
    numberguessgame(10,1,10);
}

