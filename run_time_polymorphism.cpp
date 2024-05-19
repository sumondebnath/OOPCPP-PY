#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        void speak(){
            cout<<"Speaking."<<endl;
        }
};

class Dog: public Animal{
    public:
        // overriding the speak method.
        void speak(){
            cout<<"Barking."<<endl;
        }
};

int main(){

    Dog dog;
    dog.speak();

    return 0;
}