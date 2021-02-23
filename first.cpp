#include <iostream>

int first_ifStatement()
{
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;

    if (x == 0)
        std::cout << "The value is zero" << '\n' << std::endl;
    if (x != 0)
        std::cout << "The value is non-zero" << '\n' << std::endl;

    return 0;
}

int ifElse_statement_with_bool()
{
    std::cout << "Enter second integer: ";
    int x {};
    std::cin >> x;

    bool zero { (x==0) };
        if (zero)
            std::cout << "The second value is zero" << '\n' << std::endl;
        if (!zero)
            std::cout << "The second value is non-zero" << '\n' << std::endl;

    return 0;
}

int ifElse_statement()
{
    std::cout << "Enter third integer: ";
    int x {};
    std::cin >> x;

    if (x==0)
        std::cout << "The third value is zero" << '\n' << std::endl;
    else
        std::cout << "The third value is non-zero" << '\n' << std::endl;

    return 0;
}

int chaining_if_statement()
{
    std::cout << "Enter the fourth integer: ";
    int x {};
    std::cin >> x;

    if (x > 0)
        std::cout << "The fourth value is positive" << '\n' << std::endl;
    else if (x < 0)
        std::cout << "The fourth value is negative" << '\n' << std::endl;
    else
        std::cout << "The fourth value is zero" << '\n' << std::endl;

    return 0;
}

bool isEqual(int x, int y)
{
    //teturn true if x and y are egual, false otherwise
    return (x == y); //operator == return true if x equals y, and false otherwise
}

int nonsensical_but_for_the_sake_of_example()
{
    std::cout << "Let we try our nonsensical example, type four: ";
    int x {};
    std::cin >> x;
    if (x==4)
    {
        std::cout << "Hi" << '\n' << std::endl; //This will print “hi”, since 4 is a non-zero value that gets
                    // converted to Boolean true, causing the statement attached to the if to execute.
    }
    else
    {
        std::cout << "Bye" << '\n' << std::endl;
    }
    return 0;
}

bool question_1(int x)
{
    if (x == 2)      //if user entered 2, the number is prime
        return true;
    else if (x == 3) // if user entered 3, the number is prime
        return true;
    else if (x == 5) // if user entered 5, the number is prime
        return true;
    else if (x == 7) // if user entered 7, the number is prime
        return true;
    else

    return false; // if the user did not enter 2, 3, 5, 7, the number must not be prime
}

bool question_2()
{
    std::cout << "How tall are you ? (cm)\n";
    double height {};
    std::cin >> height;

    return (height > 140.0);
}