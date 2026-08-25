// Create student, student council member, club representative 

#include<iostream>
using namespace std;

class student{
    int id;
    string name;
    public:
    student(int id, string name){
        this->id=id;
        this->name=name;
    }
    void get_details(void){
        cout<<"id "<<this->id<<" name "<<this->name<<endl;
    }
};
class student_council_member : public student{
    string role;
    public:
    student_council_member(int id, string name, string role) : student(id, name){
        this->role=role;
    }
    void get_details_2(void){
        get_details();

        cout<<"role "<<this->role<<endl;
    }
};
class club_representative : public student{
    string club;
    public:
    club_representative(int id, string name, string club) : student(id, name){
        this->club=club;
    }
    void get_details_3(void){
        get_details();
        cout<<"club "<<this->club<<endl;
    }
};

int main(){
    // employee e1(12,"abc");
    // e1.get_details();
    club_representative c(123,"Deepak","Turingites Club");
    c.get_details_3();
    return 0;
}
