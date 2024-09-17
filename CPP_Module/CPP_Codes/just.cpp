#include<iostream>
using namespace std;
class A {
    private:
    char arr[30];
    public:
    void setdata(char *arr[]){
        this->arr=arr;
    }
    void display() {
        cout<<arr;
    }
};
int main() 
{
    A a;
    a.setdata("Ram");
    return 0;
}