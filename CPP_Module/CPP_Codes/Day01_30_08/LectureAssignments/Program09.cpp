// display even numbers

#include <iostream>
using namespace std;

int main10(){
	cout<<"Enter the size of the array"<<endl;
	int a;
	cin>>a;
	int arr[a];
	cout<<"Enter the number in the array"<<endl;
	for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	cout<<"Even numbers are --->";
	for(int i=0;i<a;i++){
		if(arr[i]%2==0){
			cout<<arr[i]<<"  ";
		}
	}
}
