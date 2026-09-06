/*Write a Computer program to convert specified days into years, weeks and days.*/

#include <iostream>
using namespace std;
int main(){
    int no_of_days = 1329, years, weeks, days;
    years = no_of_days / 365;
    weeks = no_of_days % 365;
    days = weeks % 7;
    weeks = weeks / 7;
    cout << years << endl << weeks << endl << days << endl;
    return 0;
}