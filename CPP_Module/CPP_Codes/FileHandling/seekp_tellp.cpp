#include<iostream>
#include<fstream>
using namespace std;
int main() {
    //seekp and tellp
    ofstream obj("seekptellp.txt",ios::out);
    cout<<obj.tellp()<<endl;
    obj<<"Hello World!";
    cout<<obj.tellp()<<endl;
    obj.seekp(5,ios::end);
    cout<<obj.tellp()<<endl;
    obj<<"Its me";
    cout<<obj.tellp();
    



}