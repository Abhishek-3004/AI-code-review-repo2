#include <iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout << "Enter any number to find its factorial." << endl;
    cin >> n;
    cout << "Factorial of Entered Number is " << factorial(n);

    return 0;
}
int factorial(int n)
{
    if (n < 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}