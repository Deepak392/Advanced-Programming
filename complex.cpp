#include<iostream>
using namespace std;

class complex{
  private:
  float x; // attributes or data members
  float y;
  
  public: // any data members defined inside the private can be accessed through public methods only
  void set_value(int x, int y){
      this->x = x; // this is a pointer for a particular object
      this->y = y;
  }
  void get_value(void){
      cout<<x<<" + i"<<y<<endl;
  }
}; 

int main(){
    complex c1,c2;
    // cout <<c1.x<<endl;
    c1.set_value(2,3);
    c2.set_value(4,5);
    c1.get_value();
    c2.get_value();
    return 0;