#include <iostream>
using namespace std;
int main () {
    int x, y;
    cout << "Enter x co-ordinate: ";
    cin >> x;
    cout << "Enter y co-ordinate: ";
    cin >> y;
    if ( x > 0 && y > 0 ) {
        cout << "Point lies in Quadrant-I." << endl;
    }
    return 0;
}