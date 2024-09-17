#include<iostream>
using namespace std;

class Book {
	private:
		int bookId;
		int bookPages;
		string bookName;
		string bookAuthor;
	
	public:
		void assignData() {
			bookId = 1;
			bookPages=200;
			bookName="mind";
			bookAuthor="Prathamesh_Roshan";
			
		}
		void displayData() {
			cout<<"bookId is = "<<bookId<<endl;
			cout<<"bookPages are = "<<bookPages<<endl;
			cout<<"bookName is = "<<bookName<<endl;
			cout<<"bookAuthor is = "<<bookAuthor;	
		}
};
int main5() {
	
	Book book1;
	book1.assignData();
	book1.displayData();
	
	
}
