#include <iostream>
using namespace std;
int main() {
    // declaration
    int balance = 1000, opt;

    // getting inputs
    cout << "1. Check balance  2. Deposit  3. Withdraw\nEnter your choice: ";
    cin >> opt;

    // calculations
    switch ( opt ) {
        case 1: {
            cout << "Your balance is: " << balance << "$" << endl;
            break;
        }
        case 2: {
            int depAmount;
            cout << "Enter amount to be deposit: ";
            cin >> depAmount;
            balance = balance + depAmount;
            cout << depAmount << "$ Deposited successfuly. Now your balance is: " << balance << "$" << endl;
            break;
        }
        case 3: {
            int withAmount;
            cout << "Enter amount to be withdrawal: ";
            cin >> withAmount;
            if ( withAmount > balance ) {
                cout << "Withdraw fail. Insufficient funds" << endl;
                return 0;
            }
            else {
                balance = balance - withAmount;
                cout << "Withdrawal successful. Now your balacne is: " << balance << endl;
                break;
            }
        }
        default: {
            cout << "Error: Invalid choice." << endl;
        }
    }
    return 0;
}