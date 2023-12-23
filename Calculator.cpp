#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Calculator
// Unfortunatly I was unable to add the remainder in divide function :(    
void calculator() {
    int x;
    int y;
    int infinitelooper = 1;
    int infinite2 = 2;
    do {
     cout << "\n";
     cout << "Basic Calculator: \n";
     cout << "1) Add x and y \n";
     cout << "2) Subtract x and y \n"; 
     cout << "3) Multiply x and y \n";
     cout << "4) Divide x and y \n";
     cout << "5) Scientific Calculator \n";
     cout << "Type a number to use the following: ";
     cin >> x;


     // Addition
        if (x == 1) {
            double addend1;
            double addend2;
            cout << "Type the first addend: ";
            cin >> addend1;
            cout << "Type the second addend: ";
            cin >> addend2;
            double sum = addend1 + addend2;
            cout << "The sum of " << addend1 << " and " << addend2 << " is: " << sum << "\n" << "\n";


    // Subtract
        } else if (x == 2) {
            double minuend;
            double subtrahend;
            cout << "Type the minuend: ";
            cin >> minuend;
            cout << "Type the subtrahend: ";
            cin >> subtrahend;
            double difference = minuend - subtrahend;
            cout << "The difference of " << minuend << " and " << subtrahend << " is: " << difference << "\n" << "\n";


    // Multiply
        } else if (x == 3) {
            double mutiplier;
            double multiplicand;
            cout << "Type the multiplier: ";
            cin >> mutiplier;
            cout << "Type the multiplicand: ";
            cin >> multiplicand;
            double product = mutiplier * multiplicand;
            cout << "The product of " << mutiplier << " and " << multiplicand << " is: " << product << "\n" << "\n";


    // Divide
        } else if (x == 4) {
            double dividend;
            double divisor;
            cout << "Type the dividend: ";
            cin >> dividend;
            cout << "Type the divisor: ";
            cin >> divisor;
            double quotient = dividend/divisor;
            try {
                if (divisor != 0) {
                   cout << "The quotient of " << dividend << " and " << divisor << " is: " << quotient << "\n" << "\n";
                } else {
                    throw 404;
                }
            }
            catch(int Error) {
                cout << "Cannot Divide by Zero \n";
                cout << "Error: " << Error << "\n" << "\n";
            }


    // Scientific Calculator
        } else if (x == 5) {
            cout << "\n";
            do {

            cout << "Scientific Calculator: \n"; 

            cout << "0) Exit \n";

            cout << "1) Absolute value of x \n"; 

            cout << "2) Square root of x \n"; 

            cout << "3) Cube root of x \n";   

            cout << "4) Raise x to the power of y \n"; 

            cout << "5) Exponential of x \n"; 

            cout << "6) Natrual Logarithm of x \n";

            cout << "7) Base 10 Logarithm of x \n"; 

            cout << "8) Base 2 Logarithm of x\\y \n";

            cout << "9) Floor of x \n";

            cout << "10) Ceiling of x \n";

            cout << "Type a number to use the following: ";

            cin >> y;
            

            // Absolute Value
            if (y == 1) {
                double absolute_x;
                cout << "Type a number to find its absolute value: ";
                cin >> absolute_x;
                double absolute_value = abs(absolute_x);
                cout << "The absolute value of " << absolute_x << " is: " << absolute_value << "\n" << "\n"; 


            // Square Root
            } else if (y == 2) {
                double sqrt_x;
                cout << "Type a number to find its square root: ";
                cin >> sqrt_x;
                double square_root = sqrt(sqrt_x);
                cout << "The square root of " << sqrt_x << " is:" << square_root << "\n" << "\n";


            // Cube root
            } else if (y == 3) {
                double cuberoot_x;
                cout << "Type a number to find its cube root: ";
                cin >> cuberoot_x;
                double cube_root = cbrt(cuberoot_x);
                cout << "The cube root of " << cuberoot_x << " is: " << cube_root << "\n" << "\n";


            // Power
            } else if (y == 4) {
                double base;
                double exponent;
                cout << "Type the base number: ";
                cin >> base;
                cout << "Type the exponent";
                cin >> exponent;
                double power = pow(base,exponent);
                cout << "The result of base of " << base << " and exponent of " << exponent << " is: " << power << "\n" << "\n";


            // Exponential
            } else if (y == 5) {
                double exp_x;
                cout << "Type the number to exponential";
                cin >> exp_x;
                double exp_result = exp(exp_x);
                cout << "The exponential of " << exp_x << " is: " << exp_result << "\n" << "\n";


            // Natural Logarithm
            } else if (y == 6) {
                double log_x;
                cout << "Type a number to find its natural logarithm: ";
                cin >> log_x;
                double natural_log = log(log_x);
                cout << "The natural log of " << log_x << " is: " << natural_log << "\n" << "\n";


            // Base 10 Logarithm
            } else if (y == 7) {
                double log10_x;
                cout << "Type a number to find its base 10 logarithm: ";
                cin >> log10_x;
                double log_10_result = log10(log10_x);
                cout << "The base 10 log of " << log10_x << " is: " << log_10_result << "\n" << "\n";


            // Base 2 Logarithm
            } else if (y == 8) {
                double log2_x;
                cout << "Type a number to find itd base 2 logarithm: ";
                cin >> log2_x;
                double log_2_result = log2(log2_x);
                cout << "The base 2 log of" << log2_x << " is: " << log_2_result << "\n" << "\n";

            
            // Floor
            } else if (y == 9) {
                double floor_x;
                cout << "Type a number to find its floor: ";
                cin >> floor_x;
                double floor_result = floor(floor_x);
                cout << "The floor of " << floor_x << " is: " << floor_result << "\n" << "\n";

            
            // Celing
            } else if (y == 10) {
                double celing_x;
                cout << "Type a number to find its ceiling: ";
                cin >> celing_x;
                double celing_result = ceil(celing_x);
                cout << "The ceiling of " << celing_x << " is: " << celing_result;
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
