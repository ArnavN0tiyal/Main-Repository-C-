#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Calculator (WIP)
// Unfortunatly I was unable to add the remainder in divide function :(
void calculator() {
    string empty = "";
    string default2 = "";
    int x;
    int y;
    int infinitelooper = 1;
    int infinite2 = 2;
    do {
     cout << "Basic Calculator: \n";
     cout << "1) Add x and y \n";
     cout << "2) Subtract x and y \n"; 
     cout << "3) Multiply x and y \n";
     cout << "4) Divide x and y \n";
     cout << "5) Scientific Calculator \n";
     cout << "Type a number to use the following: ";
     cin >> x;
     // Addition
     try {
        if (x == 1) {
            double addend1;
            double addend2;
            cout << "Type the first addend: ";
            cin >> addend1;
            cout << "Type the second addend: ";
            cin >> addend2;
            double sum = addend1 + addend2;
            cout << "The sum is: " << sum << "\n";
        } else {
            throw empty;
        }
    // Subtract
     }
     catch(...) {
        if (x == 2) {
            double minuend;
            double subtrahend;
            cout << "Type the minuend: ";
            cin >> minuend;
            cout << "Type the subtrahend: ";
            cin >> subtrahend;
            double difference = minuend - subtrahend;
            cout << "The difference is: " << difference << "\n";
        }
     }
     // Multiply
     try {
        if (x == 3) {
            double mutiplier;
            double multiplicand;
            cout << "Type the multiplier: ";
            cin >> mutiplier;
            cout << "Type the multiplicand: ";
            cin >> multiplicand;
            double product = mutiplier * multiplicand;
            cout << "The product is: " << product << "\n";
        } else {
            throw default2;
        }
     }
     // Divide
     catch(...) {
        if (x == 4) {
            double dividend;
            double divisor;
            cout << "Type the dividend: ";
            cin >> dividend;
            cout << "Type the divisor: ";
            cin >> divisor;
            double quotient = dividend/divisor;
            cout << "The quotient is: " << quotient << "\n";
        }
     }
        if (x == 5) {
            do {
            cout << "Scientific Calculator: \n";
            cout << "1) Absolute value of x \n";
            cout << "2) Square root of x \n";
            cout << "3) Cube root of x \n";
            cout << "4) Raise x to the power of y \n";
            cout << "5) Exponential of x \n";
            cout << "6) Natrual Logarithm of x \n";
            cout << "7) Base 10 Logarithm of x \n";
            cout << "8) Base 2 Logarithm of x \n";
            cout << "9) Floor of x \n";
            cout << "10) Celing of x \n";
            cout << "0) Exit \n";
            cout << "Type a number to use the following: ";
            cin >> y;

            if (y == 1) {
                double absolute_x;
                cout << "Type a number: ";
                cin >> absolute_x;
                double absolute_value = abs(absolute_x);
                cout << "The absolute value is: " << absolute_value << "\n"; 
            } else if (y == 2) {
                double sqrt_x;
                cout << "Type a number to find its square root: ";
                cin >> sqrt_x;
                double square_root = sqrt(sqrt_x);
                cout << "The square root is: " << square_root << "\n";
            } else if (y == 3) {
                double cuberoot_x;
                cout << "Type a number to find its cube root: ";
                cin >> cuberoot_x;
                double cube_root = cbrt(cuberoot_x);
                cout << "The cube root is: " << cube_root << "\n";
            }

            }
            while (y != 0);
    } 
}
 while(infinitelooper != infinite2);
}


int main() {
  calculator();
}
