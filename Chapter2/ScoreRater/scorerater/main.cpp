// Score Rater
// Demonstrates the if statement
#include <iostream>
using namespace std;

int main()
{
    if (true)
    {
        cout << "This is always displayed.\n\n";
    }
    else
    {
        cout << "This will never be seen";
    }

    int score = 1000;

    if (score)
    {
        cout << "At least you didn't score zero.\n\n";
    }

    if (score >= 250)
    {
        cout << "You scored 500 or more. Nice.\n\n";
        if (score >= 1000)
        {
            cout << "You scored 1000 or more. Impressive";
        }
    }
    return 0;
}