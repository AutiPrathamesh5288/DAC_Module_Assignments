// Write a  program to print all Prime numbers between 1 to n.

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;
    bool flag = false;
    for (int i = 2; i <= n; i++)
    {

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = true;
                break;
            }
            else
            {
                flag = false;
            }
        }
        if (flag == false)
        {
            cout << i << " is prime" << endl;
        }
    }
}