#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Calculator
void calculator() {
    int main_choice, choice_2, choice_3, choice_4;
    int infinitelooper = 1, infinite2 = 2;
    do {
     cout << "\n";
     cout << "Basic calculator: \n";
     cout << "1) Add x and y \n";
     cout << "2) Subtract x and y \n"; 
     cout << "3) Multiply x and y \n";
     cout << "4) Divide x and y \n \n";
     cout << "Other Calculators: \n";
     cout << "5) Scientific calculator \n";
     cout << "6) Trigometric calculator \n";
     cout << "7) Temperature calculator \n";
     cout << "Type a number to use the following: ";
     cin >> main_choice;


     // Addition
        if (main_choice == 1) {
            double addend1;
            double addend2;
            cout << "Type the first addend: ";
            cin >> addend1;
            cout << "Type the second addend: ";
            cin >> addend2;
            double sum = addend1 + addend2;
            cout << "The sum of " << addend1 << " and " << addend2 << " is: " << sum << "\n" << "\n";


    // Subtract
        } else if (main_choice == 2) {
            double minuend;
            double subtrahend;
            cout << "Type the minuend: ";
            cin >> minuend;
            cout << "Type the subtrahend: ";
            cin >> subtrahend;
            double difference = minuend - subtrahend;
            cout << "The difference of " << minuend << " and " << subtrahend << " is: " << difference << "\n" << "\n";


    // Multiply
        } else if (main_choice == 3) {
            double mutiplier;
            double multiplicand;
            cout << "Type the multiplier: ";
            cin >> mutiplier;
            cout << "Type the multiplicand: ";
            cin >> multiplicand;
            double product = mutiplier * multiplicand;
            cout << "The product of " << mutiplier << " and " << multiplicand << " is: " << product << "\n" << "\n";


    // Divide
        } else if (main_choice == 4) {
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


    // Scientific calculator
        } else if (main_choice == 5) {
            cout << "\n";
            do {
            cout << "Scientific calculator: \n"; 
            cout << "0) Exit \n";
            cout << "Value: \n";
            cout << "1) Round x \n";
            cout << "2) Absolute value of x \n"; 
            cout << "Roots: \n";
            cout << "3) Square root of x \n"; 
            cout << "4) Cube root of x \n"; 
            cout << "Powers: \n";
            cout << "5) Raise x to the power of y \n"; 
            cout << "6) Exponential of x \n"; 
            cout << "Logarithms: \n";
            cout << "7) Natrual logarithm of x \n";
            cout << "8) Base 10 logarithm of x \n"; 
            cout << "9) Base 2 logarithm of x \n";
            cout << "Floor and ceiling: \n";
            cout << "10) Floor of x \n";
            cout << "11) Ceiling of x \n";
            cout << "Type a number to use the following: ";
            cin >> choice_2;


            // Round
            if (choice_2 == 1) {
                double round_x;
                cout << "Type a number to round: ";
                cin >> round_x;
                double rounding = round(round_x);
                cout << round_x << " rounded is: " << rounding << "\n" << "\n";


            // Absolute value
            } else if (choice_2 == 2) {
                double absolute_x;
                cout << "Type a number to find its absolute value: ";
                cin >> absolute_x;
                double absolute_value = abs(absolute_x);
                cout << "The absolute value of " << absolute_x << " is: " << absolute_value << "\n" << "\n"; 


            // Square root
            } else if (choice_2 == 3) {
                double sqrt_x;
                cout << "Type a number to find its square root: ";
                cin >> sqrt_x;
                double square_root = sqrt(sqrt_x);
                cout << "The square root of " << sqrt_x << " is:" << square_root << "\n" << "\n";


            // Cube root
            } else if (choice_2 == 4) {
                double cuberoot_x;
                cout << "Type a number to find its cube root: ";
                cin >> cuberoot_x;
                double cube_root = cbrt(cuberoot_x);
                cout << "The cube root of " << cuberoot_x << " is: " << cube_root << "\n" << "\n";


            // Power
            } else if (choice_2 == 5) {
                double base;
                double exponent;
                cout << "Type the base number: ";
                cin >> base;
                cout << "Type the exponent";
                cin >> exponent;
                double power = pow(base,exponent);
                cout << "The result of base of " << base << " and exponent of " << exponent << " is: " << power << "\n" << "\n";


            // Exponential
            } else if (choice_2 == 6) {
                double exp_x;
                cout << "Type the number to exponential: ";
                cin >> exp_x;
                double exp_result = exp(exp_x);
                cout << "The exponential of " << exp_x << " is: " << exp_result << "\n" << "\n";


            // Natural logarithm
            } else if (choice_2 == 7) {
                double log_x;
                cout << "Type a number to find its natural logarithm: ";
                cin >> log_x;
                double natural_log = log(log_x);
                cout << "The natural log of " << log_x << " is: " << natural_log << "\n" << "\n";


            // Base 10 logarithm
            } else if (choice_2 == 8) {
                double log10_x;
                cout << "Type a number to find its base 10 logarithm: ";
                cin >> log10_x;
                double log_10_result = log10(log10_x);
                cout << "The base 10 log of " << log10_x << " is: " << log_10_result << "\n" << "\n";


            // Base 2 logarithm
            } else if (choice_2 == 9) {
                double log2_x;
                cout << "Type a number to find itd base 2 logarithm: ";
                cin >> log2_x;
                double log_2_result = log2(log2_x);
                cout << "The base 2 log of " << log2_x << " is: " << log_2_result << "\n" << "\n";

            
            // Floor
            } else if (choice_2 == 10) {
                double floor_x;
                cout << "Type a number to find its floor: ";
                cin >> floor_x;
                double floor_result = floor(floor_x);
                cout << "The floor of " << floor_x << " is: " << floor_result << "\n" << "\n";

            
            // Ceiling
            } else if (choice_2 == 11) {
                double ceiling_x;
                cout << "Type a number to find its ceiling: ";
                cin >> ceiling_x;
                double celing_result = ceil(ceiling_x);
                cout << "The ceiling of " << ceiling_x << " is: " << celing_result << "\n" << "\n";
            }
            }
            while (choice_2 != 0);


        // Trignometric calculator
        } else if (main_choice== 6) {
            cout << "\n";
            do {
            cout << "Trignometric calculator: \n";
            cout << "0) Exit \n";
            cout << "Normal Functions: \n";
            cout << "1) Sin of x \n";
            cout << "2) Cos of x \n";
            cout << "3) Tan of x \n";
            cout << "Hyperbolics: \n";
            cout << "4) Sinh of x \\ Hyperbolic sin of x \n";
            cout << "5) Cosh of x \\ Hyperbolic cos of x \n";
            cout << "6) Tanh of x \\ Hyperbolic tan of x \n";
            cout << "Arc Functions: \n";
            cout << "7) Arcsin of x \n";
            cout << "8) Arccos of x \n";
            cout << "9) Arctan of x \n";
            cout << "Type a number to use the following: ";
            cin >> choice_3;


            // Sin
            if (choice_3 == 1) {
                double sin_x;
                cout << "Type a number to find its sin: ";
                cin >> sin_x;
                double sin_result = sin(sin_x);
                cout << "The sin of " << sin_x << " is: " << sin_result << "\n" << "\n";


            // Cos
            } else if (choice_3 == 2) {
                double cos_x;
                cout << "Type a number to find its cos: ";
                cin >> cos_x;
                double cos_result = cos(cos_x);
                cout << "The cos of " << cos_x << " is: " << cos_result << "\n" << "\n";


            // Tan
            } else if (choice_3 == 3) {
                double tan_x;
                cout << "Type a number to find its tan: ";
                cin >> tan_x;
                double tan_result = tan(tan_x);
                cout << "The tan of " << tan_x << " is: " << tan_result << "\n" << "\n";


            // Hyperbolic Sin
            } else if (choice_3 == 4) {
              double sinh_x;
              cout << "Type a number to find its hyperbolic sin: ";
              cin >> sinh_x;
              double sinh_result = sinh(sinh_x);
              cout << "The hyperbolic sin of " << sinh_x << " is: " << sinh_result << "\n" << "\n";


            // Hyperbolic Cos
            } else if (choice_3 == 5) {
                double cosh_x;
                cout << "Type a number to find its hyperbolic cos: ";
                cin >> cosh_x;
                double cosh_result = cosh(cosh_x);
                cout << "The hyperbolic cos of " << cosh_x << " is: " << cosh_result << "\n" << "\n";


            // Hyperbolic Tan
            } else if (choice_3 == 6) {
                double tanh_x;
                cout << "Type a number to find its hyperbolic tan: ";
                cin >> tanh_x;
                double tanh_result = tanh(tanh_x);
                cout << "The hyperbolic tan of " << tanh_x << " is: " << tanh_result << "\n" << "\n";


            // Arcsin
            } else if (choice_3 == 7) {
                double arcsin_x;
                cout << "Type a number to find its arcsin: ";
                cin >> arcsin_x;
                double arcsin_result = asin(arcsin_x);
                cout << "The arcsin of " << arcsin_x << " is: " << arcsin_result << "\n" << "\n"; 

            
            // Arccos
            } else if (choice_3 == 8) {
                double arccos_x;
                cout << "Type a number to find its arccos: ";
                cin >> arccos_x;
                double arccos_result = acos(arccos_x);
                cout << "The arccos of " << arccos_x << " is: " << arccos_result << "\n" << "\n";


            // Arctan
            } else if (choice_3 == 9) {
                double arctan_x;
                cout << "Type a number to find its arctan: ";
                cin >> arctan_x;
                double arctan_result = atan(arctan_x);
                cout << "The arctan of " << arctan_x << " is: " << arctan_result << "\n" << "\n";
            }
            }
            while (choice_3 != 0);


        // Temperature calculator
        } else if (main_choice == 7) {
            cout << "\n";
             do {
                double Fahrenheit;
                double Celsius;
                double Kelvin;
                cout << "Temperature calculator: \n";
                cout << "0) Exit \n";
                cout << "Fahrenheit: \n";
                cout << "1) Fahrenheit to celsius \n";
                cout << "2) Fahrenheit to kelvin \n";
                cout << "Celcius: \n";
                cout << "3) Celsius to fahrenheit \n";
                cout << "4) Celsius to kelvin \n";
                cout << "Kelvin: \n";
                cout << "5) Kelvin to fahrenheit \n";
                cout << "6) Kelvin to celsius \n";
                cout << "Type a number to use the following: ";
                cin >> choice_4;


                // Fahrenheit to celsius
                if (choice_4 == 1) {
                    cout << "Type the number you want to convert from fahrenheit to celcius: ";
                    cin >> Fahrenheit;
                    double Celsius_convert_1 = (Fahrenheit - 32)*5/9;
                    cout << Fahrenheit << "°" << " fahrenheit convereted to celsius is: " << Celsius_convert_1 << "\n" << "\n";


                // Fahrenheit to kelvin
                } else if (choice_4 == 2) {
                    cout << "Type the number you want to convert from fahrenheit to kelvin: ";
                    cin >> Fahrenheit;
                    double Kelvin_convert_1 = (Fahrenheit - 32)*5/9 + 273.15;
                    cout << Fahrenheit << "°" << " fahrenheit converted to kevlin is: " << Kelvin_convert_1 << "\n" << "\n";


                // Celsius to fahrenheit
                } else if (choice_4 == 3) {
                    cout << "Type the number you want to convert from celsius to fahrenheit: ";
                    cin >> Celsius;
                    double Fahrenheit_convert_1 = (Celsius * 9/5) + 32 ;
                    cout << Celsius << "°" << " celsius converted to fahrenheit is: " << Fahrenheit_convert_1 << "\n" << "\n";


                // Celsius to kelvin
                } else if (choice_4 == 4) {
                    cout << "Type the number you want to convert from celsius to kelvin: ";
                    cin >> Celsius;
                    double Kelvin_convert_2 =  Celsius + 273.15;
                    cout << Celsius << "°" << " celsius converted to kelvin is: " << Kelvin_convert_2 << "\n" << "\n";


                // Kelvin to fahrenheit
                } else if (choice_4 == 5) {
                    cout << "Type the number you want to convert from kelvin to fahrenheit: ";
                    cin >> Kelvin;
                    double Fahrenheit_convert_2 =  (Kelvin - 273.15) * 9/5 + 32;
                    cout << Kelvin << "°" << " kelvin converted to fahrenheit is: " << Fahrenheit_convert_2 << "\n" << "\n";


                // Kelvin to celsius
                } else if (choice_4 == 6) {
                    cout << "Type the number you want to convert from kelvin to celsius: ";
                    cin >> Kelvin;
                    double Celsius_convert_2 = Kelvin - 273.15;
                    cout << Kelvin << "°" << " kelvin converted to celsius is: " << Celsius_convert_2 << "\n" << "\n";
                }
             }
             while(choice_4 != 0);
        }

/* !!VERY IMPORTANT DON'T TAMPER WITH OR ELSE A TON OF ERRORS WILL HAPPEN!! */
}
 while(infinitelooper != infinite2);
}


int main() {
  calculator();
}
