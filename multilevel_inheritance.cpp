#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        string name;

        void isName(){
            cout<<name<<endl;
        }
};

class B: public A{
    public:
        int value;

        int getValue(){
            return value;
        }

};

class C: public B{
    public:
        bool isTrue;

        void func(){
            cout<<value<<" is "<<isTrue<<endl;
        }
};

int main(){

    C c;
    c.name="sumon";
    c.value = 10;
    c.isTrue = false;

    cout<<c.name<<" "<<c.value<<" "<<c.isTrue<<endl;
    c.isName();
    c.func();
    c.getValue();
    
    return 0;
}