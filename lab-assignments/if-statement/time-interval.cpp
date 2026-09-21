#include <iostream>
using namespace std;
int main () {
    int s1, e1, s2, e2;
    cout << "Enter starting time(H/M) of event 1: ";
    cin >> s1;
    cout << "Enter ending time(H/M) of event 1: ";
    cin >> e1;
    cout << "Enter starting time(H/M) of event 2: ";
    cin >> s2;
    cout << "Enter ending time(H/M) of event 2: ";
    cin >> e2;
    if (!(e1 <= s2 || e2 <= s1)) {
    cout << "Overlapping time interval." << endl;
    }
    return 0;
}
  