#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        void funcA(){
            cout<<"This is class A"<<endl;
        }
};

class D{
    public:
        void funcD(){
            cout<<"This is class D"<<endl;
        }
};

class B: public A{
    public:
        void funcB(){
            cout<<"This is Class B"<<endl;
        }
};

class C: public A, public D{
    public:
        void funcC(){
            cout<<"This is class C"<<endl;
        }
};

int main(){

    A a;
    a.funcA();

    B b;
    b.funcB();

    C c;
    c.funcA();
    c.funcC();
    c.funcD();

    D d;
    d.funcD();

    
    return 0;
}