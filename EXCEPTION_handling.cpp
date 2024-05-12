#include <iostream>

using namespace std;
 

int main()
{

    int x = 10;
 


    cout << "Before try \n";
 

    

    try {

        cout << "Inside try \n";

        throw(x);

    }
 


    catch (int x) {

        cout << "catched  value of x is :"<<x;

    }
 

    cout << "\n After catch  \n";

    return 0;
}