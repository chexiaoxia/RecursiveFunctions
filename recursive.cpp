#include <iostream>

using namespace std;

long step;

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

/**
 * Move n disks from left rod to middle rod using the right rod.
 */
void hanoi(int n, char left, char middle, char right)
{
    if (n == 0)
    {
        return;
    }	    
    hanoi(n-1, left, right, middle);
    cout << step << ". " << left << " -> " << middle << endl;
    step++;
    hanoi(n-1, right, middle, left);
}

int main()
{
    cout << "Factorial of 4 is: " << factorial(4) << endl;
    cout << "Factorial of 10 is: " << factorial(10) << endl;
    cout << "Factorial of 20 is: " << factorial(20) << endl;
    
    cout << "------------------------------------" << endl;
    for(int i = 0; i < 20; i++)
    {
        cout << fibonacci(i) << ", ";
    }
    cout << endl;

    cout << "------------------------------------" << endl;
    cout << "Hanoi game of 3 plates:" << endl;
    step = 1;
    hanoi(3, 'A', 'B', 'C');
    cout << "Hanoi game of 15 plates:" << endl;
    step = 1;
    hanoi(15, 'A', 'B', 'C');
    return 0;
}
