// searching elements

#include <iostream>
using namespace std;

int main(){
	cout<<"Enter the size of the array"<<endl;
	int a,searchNum;
	cin>>a;
	int arr[a];
	cout<<"Enter the number in the array"<<endl;
	for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	cout<<"Enter number that you want to search : "<<endl;
	cin>>searchNum;
	
	for(int i=0;i<a;i++) {
		if(arr[i]==searchNum) {
			cout<<"Number Found : "<<arr[i]<<" at index " <<i;
			break;
		}
		else{
			cout<<"Number not found .";
		}
	}
	
}
