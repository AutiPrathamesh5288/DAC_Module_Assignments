#include<iostream>
#include<string>

using namespace std;
enum colors {
    red=1, blue, green, violet, brown
};
int main() {

	int input;
	cout<<"Enter colour Choice which you want : "<<endl;
	cout<<" 1.Red \n 2.Blue \n 3.Green \n 4.Violet \n 5.Brown"<<endl;
	cin>>input;
    
    
	switch (input)
	{
	case red:
		cout<<"red";
		break;
	case blue:
		cout<<"blue";
		break;
	case green:
		cout<<"green";
		break;
	case violet:
		cout<<"violet";
		break;
	case brown:
		cout<<"brown";
		break;
	
	default:
		break;
	}

    

    return 0;
}
