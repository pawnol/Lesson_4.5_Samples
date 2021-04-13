/*
Lesson 4.5 Samples
Pawelski
4/13/2021
Here are the sample programs!
*/

#include <iostream>
using namespace std;

int main()
{
    // Example 1
    cout << "Before outer loop\n";
    for (int i = 0; i < 5; i++) 
    {
        cout << "Before inner loop\n";
        for (int j = 0; j < 10; j++) 
        {
            cout << "Inside inner loop\n";
        }
        cout << "After inner loop\n";
    }
    cout << "After outer loop\n\n";

    // Example 2
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            cout << "ha";
        }
        cout << "\n";
    }
    cout << "\n\n";

    // Example 3
    for (int i = 0; i < 10; i++) 
    {
        if (i % 2 == 0) 
        {
            for (int j = 0; j < 5; j++) 
            {
                cout << "01";
            }
        }
        else 
        {
            for (int j = 0; j < 5; j++) 
            {
                cout << "10";
            }
        }
        cout << "\n";
    }
    cout << "\n\n";

    // Example 4
    int rows, columns;
    cout << "How many rows do you want the grid? ";
    cin >> rows;
    cout << "How many columns do you want the grid? ";
    cin >> columns;
    for (int i = 0; i < rows - 1; i++) 
    {
        for (int j = 0; j < columns - 1; j++) 
        {
            cout << "_|";
        }
        cout << "_\n";
    }
    for (int i = 0; i < columns - 1; i++) 
    {
        cout << " |";
    }
    cout << "\n\n";
    return 0;
}
