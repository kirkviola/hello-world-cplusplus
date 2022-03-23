// hello-world-cplusplus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> // string type must be included here!
using namespace std;

// Pre processor definitions can be used for constants
#define NEWLINE '\n'
#define PI 3.1415

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "This is weird\n";

    cout << "Will the using statement work?\n";

    // Must declare type
    int a = 5;
    int b = 2;
    a = a + 1;
    int result = a + b;

    // Value is undefined when declared
    int c;

    cout << result; cout << "\n";

    // List of valid variable initializations
    int d = 5;
    int e(4); 
    int f{ 3 };
    int nonValue; // Undefined type

    auto magic = e + 2; // 'auto' behaves a bit like var; compiler can deduce some types

    // String demo below
    string myString; 
    myString = "This is a string";
    cout << myString + "\n"; // String concat possible with cout

    string anotherString("This declaration works as well, along with {}");

    cout << myString << endl << anotherString; // Can chain together this way, along with concat
                        // endl effectively functions the same as \n, short for 'end line'

    // Constants can be assigned data types
    75; // integer
    75u; // unsigned - meaning it is ONLY positive numbers
    75l; // long - allows for more bytes?
    75lu; 75ul; // Same statements - unsigned long
    75ll; // long long - even bigger number

    // Constants with float types
    6.02e23l; // Saves as long double (same as double?)
    3.1415f; // Saves a 'float' which is shorter than double
        // Case sensitivity does not matter for "l" and "f"


    // Characters vs strings - similar to C#
    'x'; // Character
    "x along is a character"; // String

    const char tab = '\t';

    // Casting example, same to C#
    int i;
    float g = 3.1234;
    g = (int)g;

    cout << endl << g << endl;

    int s = sizeof(g); // returns size in bits

    cout << s << " bits" << endl;

    // Terminate program, good practice or necessary?
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
