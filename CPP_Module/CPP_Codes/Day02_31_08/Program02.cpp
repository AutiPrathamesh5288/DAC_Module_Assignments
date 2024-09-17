// accept char and convert to uppercase

#include <iostream>
using namespace std;
int main()
{

    char ch, uppCh;
    cout << "Enter small character for conversion in capital letter : " << endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        uppCh = ch - 32;
        cout << "Uppercase letter of " << ch << " is " << uppCh;
    }
    else
    {
        cout << "Incorrect input Enter small letter... " << endl;
    }
}