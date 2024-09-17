#include<iostream>
using namespace std;
class Account{
	int actid;
	string name,email;
	double balance;
	static int actid_counter;
	
	public:Account():actid(10),name("abc"),email("abc@gmail.com"),balance(1000){
		cout<<"---default-----"<<endl;
	}
	Account(string name,string email,double balance){
		cout<<"------new object created at:"<<this<<endl;
		this->name=name;
		this->email=email;
		this->balance=balance;
		//what abt actid:auto generated
		// actid_counter=1001
		this->actid= actid_counter;
		 actid_counter++;
		
		}  
		void display(){
			cout<<"\n\n---------Account Details--------"<<endl;
			cout<<"\t ActId="<<actid<<endl;
			cout<<"\t Name="<<name<<endl;
			cout<<"\t Email="<<email<<endl;
			cout<<"\t Balance="<<balance<<endl;
				
		} 
		double withdraw(double amount){
		//actid name balance		
		this->balance=this->balance-amount;
		cout<<"After withdraw Current Balance:"<<balance<<endl;	
	  	return this->balance;
		}
		int getActId(){
			return actid;
		} 
		double getBalance(){
			return balance;
		}
		void setEmail(string str){
			email=str;
		}
		string getEmail()
		{
			return email;
		}
	
};
int Account:: actid_counter=1001;

int main()
{
	//create array to store diff obj of act
	Account* bank[10];
	Account *actObj;
	cout<<"1:new account 2:display  3:withdraw 4:getBalance 5:edit email 6:transferMoney"<<endl;
	string name,email;
	double balance;
	int ch,i,actid,index=0;
	double amount;
	do{
		cout<<"Enter Choice "<<endl;
		cin>>ch;
		switch(ch){
			case 1:if(index<10){
			  
			       cout<<"Enter Name email balance "<<endl;
			       cin>>name>>email>>balance;
			       //create new object for Account
				  //add new object into array
				  actObj=new Account(name,email,balance);
				  bank[index]=actObj;
				  index++;
				  cout<<"account created "<<endl;
			       }
				  else
				  {
				  	cout<<"Array Is Full"<<endl;//NEED:dynamic collection
				  }
				   break;
		    case 2://display all acts details
		          for(i=0;i<index;i++)
		          {
		          	bank[i]->display();
				  }
			     break;
		    case 3:cout<<"Enter ActId "<<endl;
		    		cin>>actid;
		    		//search actid account obj  from bank
		    		for(i=0;i<index;i++){
		    			if(bank[i]->getActId()==actid){
		    			
						cout<<"Enter Amount "<<endl;
						cin>>amount;
						bank[i]->withdraw(amount);
						break;	
						}
						
					}
		    
			      break;
		    case 4:break;
		    case 5:break;
		    case 6:break;
		}
		
		
		
	}while(ch!=0);
	
	cout<<"-------End-----"<<endl;
	
return 0;	
}








