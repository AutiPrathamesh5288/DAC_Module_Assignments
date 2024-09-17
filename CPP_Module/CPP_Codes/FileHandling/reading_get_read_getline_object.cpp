#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {

    ifstream fin;
    char ch;
    string name;
    // cout<<"enter file name : ";
    // cin>>name;

    fin.open("Today.txt");

    // while (!fin.eof()){
    //     fin.get(ch);
    //     cout<<ch;
    // }

    //  while (!fin.eof()){
    //     fin.read(ch,2);
    //     cout<<ch;
    // }

    if(fin.fail()){
        cout<<"Error";
    }
    else{
        while (!fin.eof()){
            fin.get(ch);
            cout<<ch;
        }
        
        
    }
    fin.close();


}