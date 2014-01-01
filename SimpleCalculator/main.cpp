#include <iostream>

using namespace std;

void m_Subtraction()
{
    // declaration
    double s_FSEL;
    double s_SSEL;

    cout << "\n" << endl;
    cout << "Enter two numbers, in correct form: ";
    cin >> s_FSEL >> s_SSEL;

    cout << "\n";

    // solution
    double s_SUM = s_FSEL - s_SSEL;

    cout << "Your answer is " << s_SUM;
}

void m_Addition()
{
    // declaration
    double a_FSEL;
    double a_SSEL;

    cout << "\n" << endl;
    cout << "Enter two numbers, in correct form: ";
    cin >> a_FSEL >> a_SSEL;

    cout << "\n";

    // solution
    double a_SUM = a_FSEL + a_SSEL;

    cout << "Your answer is " << a_SUM;
}

void num_Selection()
{
    // function for choosing selection
    int s_Selection;

    cin >> s_Selection;

    // the "m" in "m_Addition" means math
    if (s_Selection == 1){m_Addition();}
    if (s_Selection == 2){m_Subtraction();}

    if (s_Selection > 2)
    {
        cout << "Enter another number: ";
        cin >> s_Selection;
    }
}

int main()
{
    // @authr Slavko Bojanic, 1/1/2014, 6:51pm, VERSION A1.0.1

    /* INTS, STRINGS, DOUBLES */

    // program begins here
    cout << "Welcome to Slavko's Calculator." << "\n" << endl;
    cout << "What would you like to do?" << endl;
    cout << "   1. Add" << endl;
    cout << "   2. Minus" << "\n" << endl;

    // form for entering a problem into calc
    cout << "   !!! REMEMBER TO WRITE PROBLEM AS '2*space*2' !!!" << "\n" << endl;
    cout << "Enter a selection: ";

    num_Selection();

}
