//enter the number 'n', till which Fibonacci series will be printed out in the terminal...
//this code returns/prints Fibonacci series upto the n'th(inputted by user) term in the series...

#include <iostream>
using namespace std;

int checking(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return 1;
    return 0;
}
//the main calling function...
int main()
{
    int i, number;
    int first1 = 0, second = 1;
    int newterm = first1 + second;
    cin >> number;
    cout << second << " ";
    for (i = 3; i <= number + 1; ++i)
    {
        if (newterm % 5 == 0)
        {
            cout << 0 << " ";
        }
        else if (checking(newterm) == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << newterm << " ";
        }
        first1 = second;
        second = newterm;
        newterm = second + first1;
    }
}
