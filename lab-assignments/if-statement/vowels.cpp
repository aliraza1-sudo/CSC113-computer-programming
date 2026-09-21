#include <iostream>
using namespace std;
int main () {
    char a;
    cout << "Enter a character: ";
    cin >> a;
    if ( a == 65 || a == 69 || a == 73 || a == 79 || a == 85 ) {
        cout << "Uppercase vowel." << endl;
    }
    return 0;
}