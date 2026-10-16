#include<iostream>
using namespace std;

class employee{
    int id;
    string name;
    public:
    employee(int id, string name){
        this->id=id;
        this->name=name;
    }
    void get_details(void){
        cout<<"id "<<this->id<<" name "<<this->name<<endl;
    }
};
class developer : public employee{
    string role;
    public:
    developer(int id, string name, string role) : employee(id, name){
        this->role=role;
    }
    void get_details_2(void){
        get_details();

        cout<<"role "<<this->role<<endl;
    }
};
class senior_dev : public developer{
    int salary;
    float exp;
    public:
    senior_dev(int id, string name, string role, int salary, float exp) : developer(id, name, role){
        this->salary=salary;
        this->exp=exp;
    }
    void get_details_3(void){
        get_details_2();
        cout <<"Salary "<<this->salary<<" Experience "<<this->exp<<endl;
    }
};

int main(){
    // employee e1(12,"abc");
    // e1.get_details();
    senior_dev s(123,"Deepak","Senior Developer",500000,2);
    s.get_details_3();
    return 0;
}
