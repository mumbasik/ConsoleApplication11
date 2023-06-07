

#include <iostream>
using namespace std;

int main()
{    
    //N2!
    double y;
    double o;
    int q;
    cout << "Ur number: \n";
    cin >> y;
    q = y;
    o = y - q;
    if (o != 0,0) {
        cout << "Correct!";
    }
    else {
        cout << "Incorrect";
    }


    //N3!
    int hours;
    int minutes;
    int seconds;
    cout << "Ur hours: \n";
    cin >> hours;
    cout << "Ur minutes: \n";
    cin >> minutes;
    cout << "Ur seconds: \n";
    cin >> seconds;
   
    if (hours < 0 || minutes < 0 || seconds < 0) {
        cout << "Incorrect time! \n";
    }
    else {
        cout << "Correct time! \n";
    }
    //N4!
    int numb;
    cout << "Number: (00000 to 99999) \n";
    cin >> numb;
    if (numb < 00000 || numb > 99999) {
        cout << "Wrong numbers! \n";
    }
    int first = numb / 1000;
    int last = numb % 1000;
    int sumfirst = first / 100;
    sumfirst + (first / 10) % 10 + first % 10;
    int sumlast = last / 100;
    sumlast + (last / 10) % 10 + last % 10;
    if (sumfirst == sumlast) {
        cout << "First three digits is equal ! \n";
    }
    else {
        cout << "Digits isn't equal";
    }

    //N5!
    int day = 31;
    int month;
    int year;
    cout << "Day: \n";
    cin >> day ;
    cout << "Month: \n";
    cin >> month;
    cout << "Year: \n";
    cin >> year;
    if (day > 31 || month > 12 ) {
        cout << "Incorrect data";

    }
    else if (day == 31) {
       
        cout << "Correct data tomorrov will be: " << "1" << month + 1 << year << "\n";
        

    }
    else if (month == 12) {
        cout << "Correct data tomorrov will be: "  <<"1" << "1" << year + 1 << "\n";
    }
    

    else {
        cout << "Correct data tomorrov will be: "  << day + 1 << month << year << "\n";
    }




    }