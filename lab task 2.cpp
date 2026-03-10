// Name: hussain
// Department: Electrical Engneerinrg
//Roll No:BF25NWELE0666
//Section: B

#include <iostream>   // input aur output ke liye library
using namespace std;  // standard names use karne ke liye

int main() {   // program yahan se start hota hai

    int day;   // integer variable jisme user ka number store hoga

    cout << "Enter a number (1-7): ";   // user ko number enter karne ka message
    cin >> day;   // user se number input lena

    switch(day) {   // switch statement day ki value check karega

        case 1:   // agar day ki value 1 ho
            cout << "Monday";   // Monday print karega
            break;   // switch ko yahin stop kar deta hai

        case 2:   // agar day ki value 2 ho
            cout << "Tuesday";   // Tuesday print karega
            break;   // next case par nahi jayega

        case 3:   // agar day ki value 3 ho
            cout << "Wednesday";   // Wednesday show karega
            break;   // switch se bahar nikal jayega

        case 4:   // agar day ki value 4 ho
            cout << "Thursday";   // Thursday print karega
            break;

        case 5:   // agar day ki value 5 ho
            cout << "Friday";   // Friday print karega
            break;

        case 6:   // agar day ki value 6 ho
            cout << "Saturday";   // Saturday print karega
            break;

        case 7:   // agar day ki value 7 ho
            cout << "Sunday";   // Sunday print karega
            break;

        default:   // agar 1 se 7 ke ilawa koi number ho
            cout << "Invalid number";   // error message show karega
    }

    return 0;   // program successfully end ho gaya
}
