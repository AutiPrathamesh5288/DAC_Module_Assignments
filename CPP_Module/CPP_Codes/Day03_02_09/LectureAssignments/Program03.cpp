#include<iostream>
using namespace std;

void createArray(int size) {
	
	int arr[size];
	for(int i=0;i<size;i++) {
		cout<<"Enter "<<i+1<<" th element ";
		cin>>arr[i];
	}
	cout<<"Arrays Elements are :"<<endl;
	for(int i=0;i<size;i++) {
		cout<<arr[i]<<endl;
	}
	
}
int main3() {

	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	
	createArray(size);
	
	return 0;
}
