#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    string name;
    
    void Afunc(){
        cout<<name<<"class A"<<endl;
    }
};
class B{
    public:
    int number;

    void Bfunc(){
        cout<<number<<" class B"<<endl;
    }
};

class C: public A, public B{
    public:

    C(string name, int number){
        this->name = name;
        this->number = number;
    }
};

int main(){

    C c("first ", 2);
    c.Afunc();
    c.Bfunc();
    
    cout<<c.name<<" "<<c.number<<endl;

    return 0;
}