// Name: hussain
// Department: Electrical Engneerinrg
//Roll No:BF25NWELE0666
//Section: B
#include <iostream>   // input aur output ke liye library
using namespace std;  // standard names use karne ke liye

int main() {

    char op;      // operation store karne ke liye variable (+,-,*,/)
    float num1, num2;   // do numbers store karne ke liye variables

    cout << "Enter first number: ";   // user se pehla number lena
    cin >> num1;

    cout << "Enter second number: ";  // user se dosra number lena
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";  // user se operator lena
    cin >> op;

    switch(op) {   // switch operator ki value check karega

        case '+':   // agar operator + ho
            cout << "Sum = " << num1 + num2;   // dono numbers add karega
            break;   // switch yahin stop ho jaye ga

        case '-':   // agar operator - ho
            cout << "Subtraction = " << num1 - num2;   // minus karega
            break;

        case '*':   // agar operator * ho
            cout << "Multiplication = " << num1 * num2;   // multiply karega
            break;

        case '/':   // agar operator / ho
            cout << "Division = " << num1 / num2;   // divide karega
            break;

        default:   // agar koi ghalat operator enter ho
            cout << "Invalid operator";   // error message show karega
    }

    return 0;   // program end
}
