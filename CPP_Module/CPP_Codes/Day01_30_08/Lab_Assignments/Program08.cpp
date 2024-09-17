// Write a  program to input angles of a triangle and check whether triangle is valid or not.

#include<iostream>
using namespace std;

int main() {

    int angle1,angle2,angle3,sum;

    cout<<"Enter angle1 in degree :"<<endl;
    cin>>angle1;
    cout<<"Enter angle2 in degree :"<<endl;
    cin>>angle2;
    cout<<"Enter angle3 in degree :"<<endl;
    cin>>angle3;

    sum = angle1+angle2+angle3;

    if(sum>180) {
        cout<<"Triangle is invalid"<<endl;
    }
    else {
        cout<<"Triangle is valid"<<endl;
    }


}