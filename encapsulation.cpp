#include<bits/stdc++.h>
using namespace std;

class Bank{
    public:
        string name;
        int acc_no;

        Bank(string name, int acc_no){
        this->name = name;
        this->acc_no = acc_no;
        // this->balance = balance;
        }

    private:
        int balance;

    protected:
        string password;

    
};

int main(){

    // ific.name = "sumon debnath";
    // ific.acc_no = 101;
    Bank ific("Sumon Debnath", 101);

    // ific.password = "123456";        // given error for access protected and private values

    cout<<ific.name<<" "<<ific.acc_no<<endl;
    
    // cout<<ific.password<<endl;       // given error for print protected and private values

    return 0;
}