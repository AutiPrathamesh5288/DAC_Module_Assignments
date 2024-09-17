//Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
// (Hint: a, e, i, o, u are vowels)

#include<iostream>
using namespace std;

int main() {

    char ch;
    cout<<"Enter lower case character : "<<endl;
    cin>>ch;

    if(ch>='a' && ch<='z'){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<ch<<" is a vowel";
        }
        else{
            cout<<ch<<" is a consonant.";
        }
    }
    else{
        cout<<"Enter lowercase.";
    }
}