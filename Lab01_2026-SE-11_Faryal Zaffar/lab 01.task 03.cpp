// fixing 5 bugs.

#include <iostream>
using namespace std;   // Bug 1: Missing ';' after std.

int main()
{
   cout << "Welcome to the Lab!"<< endl;   // Bug 2: Missing ';' after endl.
   cout << "Today we learn \"C++\"."<< endl; // Bug 3: Replacing Cout by "cout" .
   cout << "Files are in C:\\Lab 01"<< endl; // Bug 4: Missing '\' after ':'.
   cout << "Bye!"<< endl; // Bug 5: Missing  quote'"' end of string.
   return 0;	
}