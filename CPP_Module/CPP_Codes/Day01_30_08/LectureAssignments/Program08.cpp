//display numbers greater than 40 using arrays

#include <iostream>
using namespace std;

int main9(){
	cout<<"Enter the size of the array"<<endl;
	int a;
	cin>>a;
	int arr[a];
	cout<<"Enter the number in the array"<<endl;
	for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	cout<<"the numbers greater than 40 are --->";
	for(int i=0;i<a;i++){
		if(arr[i]>40){
			cout<<arr[i]<<"  ";
		}
	}
}
