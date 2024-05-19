#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
        string name;

        // Human(string name){
        //     this->name = name;
        // }

        void name_func(){
            cout<<"Name is : "<<name<<endl;
        }
};
class Male: public Human{
    public:
        string gender;

        // Male(string gender){
        //     this->gender = gender;
        // }

        void male_gender(){
            cout<<name<<" Gender is "<<gender<<endl;
        }
};
class Female: public Human{
    public:
        string gender;

        // Female(string gender){
        //     this->gender = gender;
        // }

        void female_gender(){
            cout<<name<<" Gender is "<<gender<<endl;
        }
};

int main(){

    Human h;
    h.name = "super human";
    cout<<h.name<<endl;
    h.name_func();

    Male s;
    s.gender = "male";
    s.name = "Sumon";

    Female S;
    S.gender = "female";
    S.name = "S**********";

    cout<<s.name<<endl;
    s.male_gender();

    cout<<S.name<<endl;
    S.female_gender();

    return 0;
}