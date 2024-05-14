#include<bits/stdc++.h>
using namespace std;


class Class{
    public:
    int value;

    Class(int value){
        this->value = value;
    }
};

int main(){
    Class A(20);
    cout<<A.value<<endl;

    return 0;
}