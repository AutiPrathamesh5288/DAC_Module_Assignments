#include<iostream>
using namespace std;

class Animal {

    public:
        virtual void speak() {
            cout<<"Animal can speak";
        }
};
class Dog : public Animal {
    public:
    void speak() {
        cout<<"Dog bark";
    }
};
class Cat : public Animal{
    public:
    void speak() {
        cout<<"Cat MEow";
    }
};

void makeSpeak(Animal *ptr) {
    ptr->speak();
}


int main() {
    // Base class pointer
    Dog d;
    Cat c;

    Animal *ptr[100];

    ptr[0]=&d;
    ptr[1]=&c;
    

    for(int i=0;i<2;i++) {
        makeSpeak(ptr[i]);
    }

}