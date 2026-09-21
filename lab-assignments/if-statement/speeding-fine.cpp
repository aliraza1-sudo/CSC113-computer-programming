#include <iostream>
using namespace std;
int main () {
    int speed;
    cout << "Enter vehicle speed: ";
    cin >> speed;
    if ( speed > 120 ) {
        cout << "Warning: Over Speeding!" << endl;
    }
    return 0;
}