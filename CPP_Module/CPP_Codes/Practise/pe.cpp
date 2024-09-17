#include<iostream>
using namespace std;

int main() {

    cout<<"Enter a string : ";
    string str;

    // cin>>str;
    getline(cin,str);
    string str1=str;

    cout<<str<<endl;
    cout<<str1;

    // int start = 0;
    // int end = str.length()-1;
    // char temp;
    // bool flag=true;

    // while (start<end)
    // {
    //     if(str[start]!=str[end]){
    //         flag=false;
    //         break;
    //     }
    //     else{
    //         flag=true;
    //     }
        
    //     start++;
    //     end--;

    // }
    // if(flag==true){
    //     cout<<"is palindrome";
    // }
    // else{
    //     cout<<"not plaindrome";
    // }

    

    // // while (start<end)
    // // {
    // //     temp=str[start];
    // //     str[start]=str[end];
    // //     str[end]=temp;
    // //     start++;
    // //     end--;
        
    // // }
    // // cout<<str;
    
}