#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        string name;

        Animal(string name){
            this->name = name;

            cout<<"This is Constractor!"<<endl;
        }
        // insided method
        void eat(){
            cout<<name<<" can Eat"<<endl;
        }
        void sleep();
};
// outsided method
void Animal::sleep(){
    cout<<name<<" can sleep"<<endl;
}

int main(){

    Animal cat("Kitty");
    cat.eat();
    cat.sleep();

    return 0;
}