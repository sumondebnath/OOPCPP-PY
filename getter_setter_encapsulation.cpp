#include<bits/stdc++.h>
using namespace std;

class Bank{
    private:
        int balance;
    
    protected:
        string password;

        
    public:

        string name;
        int acc_no;

        Bank(string name, int acc_no){
            this->name = name;
            this->acc_no = acc_no;
        }

        int getter(){
            return balance;
        }
        void setter(int balance){
            this->balance = balance;
        }

    
};

int main(){
    
    Bank ific("Sumon Debnath", 101);
    cout<<ific.name<<" "<<ific.acc_no<<endl;

    // Bank ific;

    cout<<ific.getter()<<endl;

    ific.setter(100);

    cout<<ific.getter()<<endl;

    return 0;
}