#include <iostream>
#include "first.h"

using namespace std;

int main()
{
    first_ifStatement();
    ifElse_statement_with_bool(); //This programs are more complex than they need to be.
                                 // Instead, we can use an alternative form of the if 
                                //statement called if-else.
    ifElse_statement();
    chaining_if_statement();

    /*
    Boolean return value and if statements:
    */

    cout << "Enter an integer: ";
    int x {};
    cin >> x;

    cout << "Enter another integer: ";
    int y {};
    cin >> y;

    cout << boolalpha; //print bools as true or false
   
    cout << x << " and " << y << " are equal? " << '\n';
    cout << isEqual(x, y) << '\n' << endl; //will return true or false

    /*
    Let’s improve this program using an if statement:
    */

    if (isEqual(x, y))
        cout << x << " and " << y << " are equal" << '\n' << endl;
    else
        cout << x << " and " << y << " are not equal" << '\n' << endl;

    /*
    Non-Boolean conditionals
    */

    nonsensical_but_for_the_sake_of_example();

    /*
    Quiz time

    Question #1

    A prime number is a whole number greater than 1 that can only be divided evenly by 1 and itself. 
    Write a program that asks the user to enter a single digit integer.
     If the user enters a single digit that is prime (2, 3, 5, or 7), print “The digit is prime”. 
     Otherwise, print “The digit is not prime”.
    */
    cout << "enters a single digit: ";
    int g {};
    cin >> g;

    if ( question_1(g) )
        cout << "The digit is prime" << '\n' << endl;
    else 
        cout << "The digit is not prime" << '\n' << endl;


    /*
    Question #2

    How can the length of the following code be reduced (without changing the formatting)?
    */

    if ( question_2() )
        cout << "Have fun!\n" << endl;
    else
        cout << "Sorry, you're too short.\n" << endl;

    return 0;
}