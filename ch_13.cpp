//FIND IF NUM IS PRIME OR NOT?

#include <iostream>
using namespace std;

int main()
{
    int num, fact, i = 0;
    cout << "Enter a number : ";
    cin >> num;

    for (fact = 1; fact <= num; fact++)
    {
        if (num % fact == 0)
            i += 1;
    }
    i == 2 ? cout << "prime number" : cout << "not a prime number";
}