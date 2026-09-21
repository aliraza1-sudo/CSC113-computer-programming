#include <iostream>
using namespace std;
int main () {
    int year;
    cout << "Enter service years: ";
    cin >> year;
    if ( year > 5 ) {
        cout << "$500 bonus" << endl;
    }
    return 0;
}