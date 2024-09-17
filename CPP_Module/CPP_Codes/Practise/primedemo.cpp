// 11:Check if number is a prime number or not.:

#include <iostream>
using namespace std;

int main()
{
    int a, count = 0;
    // cout << "Enter Number : " << endl;
    // cin >> a;
    int flag = 0;

    for (int i = 2; i <= 100; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i <<endl;
        }
        
    }
}
