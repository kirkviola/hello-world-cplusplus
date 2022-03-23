// hello-world-cplusplus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> // string type must be included here!
using namespace std;

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
