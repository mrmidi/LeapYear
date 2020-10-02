// LeapYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int jePrestupny(int rok);

int main()
{
    int roky[] = { 1000, 2000, 2002, 2004, 2014 };
    for (int i = 0; i < sizeof(roky) / sizeof(int); i++) {
        printf("%d\t%d\n", roky[i], jePrestupny(roky[i]));
    }
}

int jePrestupny(int rok) {
    bool prestupny = false;
    if (rok % 4 != 0) {
        prestupny = false;
    }
    else if (rok % 400 == 0 && rok % 100 == 0) {
        prestupny = true;
    }
    else if (rok % 4 == 0 && rok % 100 != 0) {
        prestupny = true;
    } 

    return prestupny;
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
