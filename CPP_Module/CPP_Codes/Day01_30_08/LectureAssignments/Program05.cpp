//Prime Number 

#include <iostream>
using namespace std;

int main6(){
	int a;
	cout<<"Enter the number "<<endl;
	cin>>a;
	int flag=0;
	for(int i=2;i<a;i++){
		if(a%i==0){
			flag=0;
			break;
		}
		else{
			flag=1;
		}
	}
	if(flag==1){
		cout<<a<<"  is prime"<<endl;
	}
	else{
		cout<<a<<"  is not prime"<<endl;
	}
	return 0;
}
