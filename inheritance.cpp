#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    string name;
    float weight;

    void Eat(){
        cout<<name<<" can Eat."<<endl;
    }
};

class Cat:public Animal{
    public:
        bool sound;

        Cat(string name, float weight, bool sound){
            this->name = name;
            this->weight = weight;
            this->sound = sound;
        }
};

int main(){
    Cat kitty("Kitty", 12.5, true);

    cout<<kitty.name<<" "<<kitty.weight<<" "<<kitty.sound<<endl;
    kitty.Eat();

    return 0;
}