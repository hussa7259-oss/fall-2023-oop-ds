#include <iostream>   // input aur output ke liye library
using namespace std;  // std namespace use karne ke liye

int main()   // main function jahan se program start hota hai
{
    char grade;   // grade store karne ke liye char variable

    cout << "Enter your grade (A, B, C, D, F): ";  // user se grade lene ka message
    cin >> grade;   // user se grade input lena

    switch(grade)   // grade ko check karne ke liye switch statement
    {
        case 'A':   // agar grade A ho
            cout << "Excellent";   // Excellent print kare
            break;   // switch se bahar nikal jaye

        case 'B':   // agar grade B ho
            cout << "Very Good";   // Very Good print kare
            break;

        case 'C':   // agar grade C ho
            cout << "Good";   // Good print kare
            break;

        case 'D':   // agar grade D ho
            cout << "Pass";   // Pass print kare
            break;

        case 'F':   // agar grade F ho
            cout << "Fail";   // Fail print kare
            break;

        default:   // agar koi aur character enter ho
            cout << "Invalid Grade";   // Invalid Grade message print kare
    }

    return 0;   // program successfully end hone ka signal
}
