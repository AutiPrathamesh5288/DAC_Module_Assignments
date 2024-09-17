#include<iostream>
using namespace std;

// int main() {
//     string str = "Hello";
//     int count=0;
//     for(int i=0;i<str.length();i++) {
//         char ch=str[i];

//         if(ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch == 'u' || ch=='A' || ch =='E' || ch=='I' || ch=='O' || ch == 'U') {
//             count++;

//         }
//     }
//     cout<<count;
// }

int main() {
    char str[30]="Hello everyone";
    int count=0;
    for(int i=0;str[i]!='\0';i++) {
        char ch=str[i];

        if(ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch == 'u' || ch=='A' || ch =='E' || ch=='I' || ch=='O' || ch == 'U') {
            count++;

        }
    }
    cout<<count;
}