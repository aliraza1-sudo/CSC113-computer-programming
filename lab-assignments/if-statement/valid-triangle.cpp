#include <iostream>
using namespace std;
int main () {
    int x, y, z;
    cout << "Enter 1st internal angle: ";
    cin >> x;
    cout << "Enter 2nd internal angle: ";
    cin >> y;
    cout << "Enter 3rd internal angle: ";
    cin >> z;
    if ( x + y + z == 180 && x > 0 && y > 0 && z > 0 ) {
        cout << "Valid Triangle" << endl;
    }
    return 0;
}