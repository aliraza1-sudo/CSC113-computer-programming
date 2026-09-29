#include <iostream>
using namespace std;
int main() {
    // declaration
    int num;

    // getting inputs
    cout << "Enter a number for displaying month (1-12): ";
    cin >> num;

    // fall through case
    switch ( num ) {
        case 1: {
            cout << "January" << endl;
       }
       case 2: {
            cout << "February" << endl;
        }
        case 3: {
            cout << "March" << endl;
        }
        case 4: {
            cout << "April" << endl;
        }
        case 5: {
            cout << "May" << endl;
        }
        case 6: {
            cout << "June" << endl;
        }
        case 7: {
            cout << "July" << endl;
        }
        case 8: {
            cout << "August" << endl;
        }
        case 9: {
            cout << "September" << endl;
        }
        case 10: {
            cout << "October" << endl;
        }
        case 11: {
            cout << "November" << endl;
        }
        case 12: {
            cout << "December" << endl;
        }
        default: {
            cout << "Error: Invalid input." << endl;
        }
    }
    return 0;
}