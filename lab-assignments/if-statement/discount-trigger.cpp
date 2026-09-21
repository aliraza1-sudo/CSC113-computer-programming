#include <iostream>
using namespace std;
int main () {
    int amnt;
    cout << "Enter total purchase amount: ";
    cin >> amnt;
    if ( amnt > 5000 ) {
        cout << "Eligible for 10% discount" << endl;
    }
    return 0;
}