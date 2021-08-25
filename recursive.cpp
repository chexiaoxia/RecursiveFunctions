#include <iostream>

using namespace std;

long fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }	    
    return fibonacci(n-1) + fibonacci(n-2);
}

long factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    cout << "Factorial of 4 is: " << factorial(4) << endl;
    cout << "Factorial of 10 is: " << factorial(10) << endl;
    cout << "Factorial of 20 is: " << factorial(20) << endl;
    
    cout << "------------------------------------" << endl;
    for(int i = 0; i < 50; i++)
    {
        cout << fibonacci(i) << ", ";
    }
    cout << endl;
    return 0;
}
