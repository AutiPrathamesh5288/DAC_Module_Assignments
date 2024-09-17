//display all prime numbers from 1 to 50.

#include<iostream> 
using namespace std;
int main7() {
	int num=1;
	bool flag = false;
	for(int i=2;i<=50;i++) {
		for(int j=2;j<i;j++) {
			if(i%j==0) {
				flag=true;
				break;
			}
			else{
				flag=false;
			}
			
		}
		if(flag==false) {
			cout<<i<<" is a prime."<<endl;
		}
		
	}
	
	
}
