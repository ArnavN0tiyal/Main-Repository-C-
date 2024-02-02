#include <iostream>
#include <cmath>
using namespace std;
//* Calculator
int main() {
    int Calculator_choice, Basic_choice, Scientific_choice, Trigonometric_choice, Temperature_choice;
    double addend1 = 0.0, addend2 = 0.0, minuend = 0.0, subtrahend = 0.0, multiplier = 0.0, multiplicand = 0.0, dividend = 0.0, divisor = 0.0, round_x = 0.0, absolute_x = 0.0, sqrt_x = 0.0, cuberoot_x = 0.0, base = 0.0, exponent = 0.0, exp_x = 0.0, log_x = 0.0, log10_x = 0.0, log2_x = 0.0, floor_x = 0.0, ceiling_x = 0.0, sin_x = 0.0, cos_x = 0.0, tan_x = 0.0, sinh_x = 0.0, cosh_x = 0.0, tanh_x = 0.0, arcsin_x = 0.0, arccos_x = 0.0, arctan_x = 0.0, Fahrenheit = 0.0, Celsius = 0.0, Kelvin = 0.0, sum = addend1 + addend2, difference = minuend - subtrahend, product = multiplier * multiplicand, quotient = dividend / divisor, rounding = round(round_x), absolute_value = abs(absolute_x), square_root = sqrt(sqrt_x), cube_root = cbrt(cuberoot_x), power = pow(base, exponent), exp_result = exp(exp_x), natural_log = log(log_x), log_10_result = log10(log10_x), log_2_result = log2(log2_x), floor_result = floor(floor_x), ceiling_result = ceil(ceiling_x), sin_result = sin(sin_x), cos_result = cos(cos_x), tan_result = tan(tan_x), sinh_result = sinh(sinh_x), cosh_result = cosh(cosh_x), tanh_result = tanh(tanh_x), arcsin_result = asin(arcsin_x), arccos_result = acos(arccos_x), arctan_result = atan(arctan_x), Celsius_convert_1 = (Fahrenheit - 32) * 5 / 9, Kelvin_convert_1 = (Fahrenheit - 32) * 5 / 9 + 273.15, Fahrenheit_convert_1 = (Celsius * 9 / 5) + 32, Kelvin_convert_2 = Celsius + 273.15, Fahrenheit_convert_2 = (Kelvin - 273.15) * 9 / 5 + 32, Celsius_convert_2 = Kelvin - 273.15;
    do {
        cout << "Calculators:\n1) Basic calculator\n2) Scientific calculator\n3) Trigonometric calculator\n4) Temperature calculator\nType your choice: ";
        cin >> Calculator_choice;
        switch (Calculator_choice) {
        case 0: break;
        case 1:
            do {
            cout << "Basic calculator:\n0) Exit\n1) Addition\n2) Subtract\n3) Multiply\n4) Divide\nType your choice: ";
            cin >> Basic_choice;
            switch (Basic_choice) {
            case 0: break;
            case 1:
                cout << "Type the first addend: ";
                cin >> addend1;
                cout << "Type the second addend: ";
                cin >> addend2;
                cout << "The sum of " << addend1 << " and " << addend2 << " is: " << sum;
                break;
            case 2:
                cout << "Type the minuend: ";
                cin >> minuend;
                cout << "Type the subtrahend: ";
                cin >> subtrahend;  
                cout << "The difference of " << minuend << " and " << subtrahend << " is: " << difference;
                break;
            case 3:
                cout << "Type the multiplier: ";
                cin >> multiplier;
                cout << "Type the multiplicand: ";
                cin >> multiplicand;
                cout << "The product of " << multiplier << " and " << multiplicand << " is: " << product;
                break;
            case 4:
                cout << "Type the dividend: ";
                cin >> dividend;
                cout << "Type the divisor: ";
                cin >> divisor;
                try {
                    if (divisor != 0) {
                        cout << "The quotient of " << dividend << " and " << divisor << " is: " << quotient;
                    }
                    else {
                        throw "UNABLETODIVIDE";
                    }
                }
                catch (int Error) {
                    cout << "Cannot Divide by Zero \n";
                    cout << "Error: " << Error;
                }
                break;
            default:
                cout << "Invalid choice\n";
            }
            } while (Basic_choice != 0);
            break;
        case 2: 
            do {
            cout << "Scientific calculator:\n0) Exit\nValue:\n1) Round x\n2) Absolute value of x\nRoots:\n3) Square root of x\n4) Cube root of x\nPowers:\n5) Raise x to the power of y\n6) Exponential of x\nLogarithms:\n7) Natural Logarithm of x\n8) Base 10 Logarithm of x\n9) Base 2 Logarithm of x\nFloor & Ceiling\n10) Floor of x\n 11) Ceiling of x\nType your choice: ";
            cin >> Scientific_choice;
            switch (Scientific_choice) {
            case 0: break;
            case 1:
                cout << "Type a number to round: ";
                cin >> round_x;
                cout << round_x << " rounded is: " << rounding;
                break;
            case 2:
                cout << "Type a number to find its absolute value: ";
                cin >> absolute_x;
                cout << "The absolute value of " << absolute_x << " is: " << absolute_value;
                break;
            case 3:
                cout << "Type a number to find its square root: ";
                cin >> sqrt_x;
                cout << "The square root of " << sqrt_x << " is:" << square_root;
                break;
            case 4:
                cout << "Type a number to find its cube root: ";
                cin >> cuberoot_x;
                cout << "The cube root of " << cuberoot_x << " is: " << cube_root;
                break;
            case 5:
                cout << "Type the base number: ";
                cin >> base;
                cout << "Type the exponent";
                cin >> exponent;
                cout << "The result of base of " << base << " and exponent of " << exponent << " is: " << power;
                break;
            case 6:
                cout << "Type the number to exponential: ";
                cin >> exp_x;
                cout << "The exponential of " << exp_x << " is: " << exp_result;
                break;
            case 7:
                cout << "Type a number to find its natural logarithm: ";
                cin >> log_x;
                cout << "The natural log of " << log_x << " is: " << natural_log;
                break;
            case 8:
                cout << "Type a number to find its base 10 logarithm: ";
                cin >> log10_x;
                cout << "The base 10 log of " << log10_x << " is: " << log_10_result;
                break;
            case 9:
                cout << "Type a number to find itd base 2 logarithm: ";
                cin >> log2_x;
                cout << "The base 2 log of " << log2_x << " is: " << log_2_result;
                break;
            case 10:
                cout << "Type a number to find its floor: ";
                cin >> floor_x;
                cout << "The floor of " << floor_x << " is: " << floor_result;
                break;
            case 11:
                cout << "Type a number to find its ceiling: ";
                cin >> ceiling_x;
                cout << "The ceiling of " << ceiling_x << " is: " << ceiling_result;
                break;
            default:
                cout << "Invalid choice\n";
            }
            } while (Scientific_choice != 0);
            break;
        case 3:
            do {
                cout << "Trigonometric calculator:\n0) Exit\nNormal functions:\n1) Sin of x\n2) Cos of x\n3) Tan of x\nHyperbolics functions:\n4) Sinh of x\n5) Cosh of x\n6) Tanh of x\nInverse Functions:\n7) Arcsin of x\n8) Arccos of x\n9) Arctan of x\nType your choice: ";
                cin >> Trigonometric_choice;
                switch (Trigonometric_choice) {
                case 0: break;
                case 1:
                    cout << "Type a number to find its sin: ";
                    cin >> sin_x;
                    cout << "The sin of " << sin_x << " is: " << sin_result;
                    break;
                case 2:
                    cout << "Type a number to find its cos: ";
                    cin >> cos_x;
                    cout << "The cos of " << cos_x << " is: " << cos_result;
                    break;
                case 3:
                    cout << "Type a number to find its tan: ";
                    cin >> tan_x;
                    cout << "The tan of " << tan_x << " is: " << tan_result;
                    break;
                case 4:
                    cout << "Type a number to find its hyperbolic sin: ";
                    cin >> sinh_x;
                    cout << "The hyperbolic sin of " << sinh_x << " is: " << sinh_result;
                    break;
                case 5:
                    cout << "Type a number to find its hyperbolic cos: ";
                    cin >> cosh_x;
                    cout << "The hyperbolic cos of " << cosh_x << " is: " << cosh_result;
                    break;
                case 6:
                    cout << "Type a number to find its hyperbolic tan: ";
                    cin >> tanh_x;
                    cout << "The hyperbolic tan of " << tanh_x << " is: " << tanh_result;
                    break;
                case 7:
                    cout << "Type a number to find its arcsin: ";
                    cin >> arcsin_x;
                    cout << "The arcsin of " << arcsin_x << " is: " << arcsin_result;
                    break;
                case 8:
                    cout << "Type a number to find its arccos: ";
                    cin >> arccos_x;
                    cout << "The arccos of " << arccos_x << " is: " << arccos_result;
                    break;
                case 9:
                    cout << "Type a number to find its arctan: ";
                    cin >> arctan_x;
                    cout << "The arctan of " << arctan_x << " is: " << arctan_result;
                }
            } while (Trigonometric_choice != 0);
            break;
        case 4:
            do {
                cout << "Temperature calculator:\n0) Exit\nFahrenheit:\n1) Fahrenheit to Celsius\n2) Fahrenheit to Kelvin\nCelsius:\n3) Celsius to Fahrenheit\n4) Celsius to Kelvin\nKelvin:\n5) Kelvin to Fahrenheit\n6) Kelvin to Celsius\nType your choice: ";
                cin >> Temperature_choice;
                switch (Temperature_choice) {
                case 0: break;
                case 1:
                    cout << "Type the number you want to convert from Fahrenheit to Celsius: ";
                    cin >> Fahrenheit;
                    cout << Fahrenheit << "°" << " Fahrenheit convereted to Celsius is: " << Celsius_convert_1;
                    break;
                case 2:
                    cout << "Type the number you want to convert from Fahrenheit to kelvin: ";
                    cin >> Fahrenheit;
                    cout << Fahrenheit << "°" << " Fahrenheit converted to kelvin is: " << Kelvin_convert_1;
                    break;
                case 3:
                    cout << "Type the number you want to convert from Celsius to Fahrenheit: ";
                    cin >> Celsius;
                    cout << Celsius << "°" << " Celsius converted to Fahrenheit is: " << Fahrenheit_convert_1;
                    break;
                case 4:
                    cout << "Type the number you want to convert from Celsius to kelvin: ";
                    cin >> Celsius;
                    cout << Celsius << "°" << " Celsius converted to kelvin is: " << Kelvin_convert_2;
                    break;
                case 5:
                    cout << "Type the number you want to convert from kelvin to Fahrenheit: ";
                    cin >> Kelvin;
                    cout << Kelvin << "°" << " kelvin converted to Fahrenheit is: " << Fahrenheit_convert_2;
                    break;
                case 6:
                    cout << "Type the number you want to convert from kelvin to Celsius: ";
                    cin >> Kelvin;
                    cout << Kelvin << "°" << " kelvin converted to Celsius is: " << Celsius_convert_2;
                    break;
                default:
                    cout << "Invalid choice\n";
                }
            } while (Temperature_choice != 0);
            break;
        default:
            cout << "Invalid choice\n";
        }
       } while (Calculator_choice != 0);
} 
