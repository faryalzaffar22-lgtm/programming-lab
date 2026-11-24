/*Error  :(Error in line 17)
* AI Tool:(Claude)
* AI said:(End should be endl,the letter'l'was missing, also end isn't defined in
          C++, so the compiler can't match it to <<,which is why we get the"couldn't
          deduce template parameter.")
* Fix    :(Added 'l' with end in line 12.)  
* Verdict:AI was correct.
* Because it has mentioned the point where bug occured,and also elaborate how to fix it.
*/    
#include <iostream>
using namespace std;

int main()
{
    cout << "Lab 01 Complete!"<< endl;
    cout << "Next Lab: Variables and Input"
         <<endl;
     return 0;
}