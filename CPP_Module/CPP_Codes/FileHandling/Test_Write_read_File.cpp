#include<iostream>
#include<fstream>
using namespace std;
void write_file()
{
	cout<<"Enter Name Of File "<<endl;
	string name;
	cin>>name;
	//write data into file
	ofstream fout;//default
	//open file
	fout.open(name);
	
	if(fout.fail())
	{
		cout<<"Error:"<<endl;
	}else
	{
		cout<<"file is open :"	<<endl;
		//write data into file
//		cout<<"enter data to write into file "<<endl;
//		string data;
//		cin>>data;
//		fout<<data;
		fout<<"Hello...demo of File IO";
		cout<<"Data Written ito file "<<endl;
		
	}
	fout.close();
}

void read_file()
{
	ifstream fin;
	cout<<"enter file name "<<endl;
	string name;
	cin>>name;
	//open
	fin.open(name);
	if(fin.fail()){
		cout<<"---error-----"<<endl;
		
	}
	else
	{
		cout<<"----Reading Data From File-----"<<endl;
		string data;
		while( getline(fin,data)){
			cout<<data<<endl;;
		}
		
		fin.close();
	}
	
	
	
}
int main1()
{
	int ch;
	cout<<"1:write file 2:read file 3:copy data from one into another"<<endl;
	
	do{
		cout<<"enter ch "<<endl;
		cin>>ch;
		switch(ch){
			case 1:write_file();
				break;
			case 2:read_file();
				break;	
		}
	}while(ch!=0);
	
	cout<<"----file Demo------"<<endl;
	
	
	
	
	
	return 0;
}
