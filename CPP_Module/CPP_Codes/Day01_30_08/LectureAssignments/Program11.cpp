// display average,maximum,minimum,count

#include<iostream>
using namespace std;


int main12(){
	cout<<"Enter the size of the array"<<endl;
	int a,max,min;
	cin>>a;
	int arr[a];
	cout<<"Enter the number in the array"<<endl;
	for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	
	max=min=arr[0];
	
	for(int i=0;i<a;i++) {
		if(arr[i]>max) {
			max=arr[i];
		}
	}
	for(int i=0;i<a;i++) {
		if(arr[i]<min) {
			min=arr[i];
		}
	}
	int sum=0;
	float avg;
	for(int i=0;i<a;i++){
		sum+=arr[i];
	}
	avg = sum / a;
	
	cout<<"Maximum Number is : "<<max<<endl;
	cout<<"Minimum Number is : "<<min<<endl;
	cout<<"Average of number is : "<<avg<<endl;
	
	
	

}
