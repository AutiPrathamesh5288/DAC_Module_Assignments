#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{

    ofstream obj;
    obj.open("Today.txt", ios::out | ios::app);

    // put stores character by character
    char sen[40] = "HardWorker ....";
    int len = strlen(sen);
    // for (int i = 0; i < len; i++)
    //     obj.put(sen[i]);

    //by write
    obj<<endl;
    obj.write(sen,len);

    obj.close();
}
