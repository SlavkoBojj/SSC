#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include "conio.h"
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main();
int p_End();
void num_Selection();
void m_Addition();
void m_Subtraction();
void m_Division();
void m_Multiplication();
void m_CInterest();
void m_SInterest();

void m_Addition() // ADDITION ALGORITHM
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

    cout << "Your answer is " << a_SUM << "\n";

    p_End();
}

void m_Subtraction() // SUBTRACTION ALGORITHM
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

    cout << "Your answer is " << s_SUM << "\n";

    p_End();
}

void m_Multiplication() // MULTIPLICATION ALGORITHM
{
    // declaration
    double m_FSEL;
    double m_SSEL;

    cout << "\n" << endl;
    cout << "Enter two numbers, in correct form: ";
    cin >> m_FSEL >> m_SSEL;

    cout << "\n";

    // solution
    double m_SUM = m_FSEL * m_SSEL;

    cout << "Your answer is " << m_SUM << "\n";

    p_End();
}

void m_Division() // DIVISION ALGORITHM
{
    // declaration
    double d_FSEL;
    double d_SSEL;

    cout << "\n" << endl;
    cout << "Enter two numbers, in correct form: ";
    cin >> d_FSEL >> d_SSEL;

    cout << "\n";

    // solution
    double d_SUM = d_FSEL / d_SSEL;

    cout << "Your answer is " << d_SUM << "\n";

    p_End();
}

void m_SInterest() // SIMPLE INTEREST ALGORITHM
{
    double si_P;
    double si_R;
    double si_T;

    cout << "\n";
    cout << "Enter principle: ";
    cin >> si_P;

    cout << endl;
    cout << "Enter rate (1 = 1%): ";
    cin >> si_R;

    cout << endl;
    cout << "Enter duration of interest (1 = 1y, 12m) : ";
    cin >> si_T;
    cout << "\n";

    double si_RTRUE = si_R / 100;
    double si_Ans = si_P * si_RTRUE * si_T;

    cout << "Your interest is $" << si_Ans << ".\n";

    p_End();
}

void m_CInterest() // COMPOUND INTEREST ALGORITHM
{
    double ci_P;
    double ci_R;
    double ci_M;
    double ci_TY;

    string my;

    string months = "m";
    string years = "y";

    cout << "\n";
    cout << "Enter a principle: ";
    cin >> ci_P;
    cout << "\n";

    cout << "Enter a rate: ";
    cin >> ci_R;
    cout << "\n";

    cout << "Months or years: ";
    cin >> my;
    cout << "\n";

    if(my == months){
        cout << "Enter months: ";
        cin >> ci_M;
        cout << "\n";

        while (ci_M <= 0 || ci_M > 11)
        {
            cout << "Your number was too big/small." << "\n";
            cout << "Enter months: ";
            cin >> ci_M;
            cout << "\n";
        }

        double ci_RTRUE = ci_R / 100;
        double ci_TM = ci_M / 12;
        double ci_AnsM = ci_P * pow((1 + ci_RTRUE), ci_TM);

        cout << "Your compound interest is $" << ci_AnsM << ".";
    } else if(my == years)
    {
        cout << "Enter years: ";
        cin >> ci_TY;
        cout << "\n";

        while(ci_TY < 1)
        {
            cout << "Your number is too small." << "\n";
            cout << "Enter years: ";
            cin >> ci_TY;
            cout << "\n";
        }

        double ci_RTRUE = ci_R / 100;
        double ci_AnsY = ci_P * pow((1 + ci_RTRUE), ci_TY);

        cout << "Your interest is $" << ci_AnsY << ".";
    }
    p_End();
}

void num_Selection() // SELECTING AN EQUATION
{
    // int for choosing selection
    int s_Selection;

    cin >> s_Selection;

    // the "m" in "m_Addition" means math
    if (s_Selection == 1){m_Addition();}
    if (s_Selection == 2){m_Subtraction();}
    if (s_Selection == 3){m_Multiplication();}
    if (s_Selection == 4){m_Division();}
    if (s_Selection == 5){m_SInterest();}
    if (s_Selection == 6){m_CInterest();}

    while (s_Selection > 5 || s_Selection <= 0)
    {
        cout << "Enter another number: ";
        cin >> s_Selection;
    }
}

int p_End()
{
    cout << "\n";
    cout << "Continue?";
    getch();

    string spacer = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    string p_Entered;

    cout << spacer;
    cout << "To end the program press n, if you want to go again, press y.\n";

    cin >> p_Entered;

    if(p_Entered == "Y" || p_Entered == "y")
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        main();
    } else if (p_Entered == "N" || p_Entered == "n") {
        exit(0);
    } else {
        if (p_Entered != "Y" || p_Entered != "y" || p_Entered != "N" || p_Entered != "n")
        {
            cout << "You did not enter p or n: ";
            cin >> p_Entered;
        }
    }
}

int main()
{
    // @authr Slavko Bojanic, 1/1/2014, 6:51pm, VERSION A1.0.1

    // program begins here
    cout << "Welcome to Slavko's Calculator." << "\n" << endl;
    cout << "What would you like to do?" << endl;
    cout << "   1. Add" << endl;
    cout << "   2. Minus" << endl;
    cout << "   3. Multiplication" << endl;
    cout << "   4. Division" << endl;
    cout << "   5. Simple Interest" << endl;
    cout << "   6. Compound Interest" << "\n" << endl;

    cout << "Enter a selection: ";

    num_Selection();
}
