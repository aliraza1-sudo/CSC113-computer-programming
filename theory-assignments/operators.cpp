#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // declaration
    int opr, num1, num2, result;
    float div_result;

    // getting inputs
    cout << "Enter first number: ";
    cin >> num1;
    cout << "1. *\t2. / \t3. +\t 4. -\t5. ^\nEnter your choice: ";
    cin >> opr;
    cout << "Enter second number: ";
    cin >> num2;

    // calculation
    switch ( opr ) {
        case 1: {
            result  = num1 * num2;
            cout << "Multiplication of " << num1 << " and " << num2 << " = " << result << endl;
            break;
        }
        case 2: {
            cout << "Division of " << num1 << " and " << num2 << " = " << (float) num1 / num2  << endl;
            break;
        }
        case 3: {
            result  = num1 + num2;
            cout << "Addition of " << num1 << " and " << num2 << " = " << result << endl;
            break;
        }
        case 4: {
            result  = num1 - num2;
            cout << "Subtraction of " << num1 << " and " << num2 << " = " << result << endl;
            break;
        }
        case 5: {
            result  = pow( num1, num2 );
            cout << num1 << " raise to power " << num2 << " = " << result << endl;
            break;
        }
        default: {
            cout << "Error: INvalid choice" << endl;
        }
    }
    return 0;
}