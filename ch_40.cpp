/*

       DYNAMIC MEMORY LOCATION

*/

#include <iostream>  
using namespace std;

int main() {
    int* number = new int;  // Dynamically allocates memory for one integer.

    cout << "Enter a number: ";
    cin >> *number;  // Stores the input in the allocated memory.

    cout << "You entered: " << *number << "\n";  

    delete number;  // Releases the memory allocated with new.
    number = nullptr;  // Clears the pointer so it no longer points to released memory.

    return 0;
}