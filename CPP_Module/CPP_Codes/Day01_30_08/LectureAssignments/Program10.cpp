// sum of all elements

#include <iostream>
using namespace std;

int main11(){
	cout<<"Enter the size of the array"<<endl;
	int a;
	cin>>a;
	int arr[a];
	cout<<"Enter the number in the array"<<endl;
	for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	
	int sum=0;
	for(int i=0;i<a;i++){
		sum+=arr[i];
	}
	cout<<"Sum of all numbers is ---> "<<sum;
}
