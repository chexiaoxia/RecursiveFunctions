#include <iostream>

using namespace std;

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
    return 0;
}
