#include<iostream>
using namespace std;

int main(){
    int a = 4;
    float b=5.6;

    b=a; //implicit conversion from int to float
    b=(float)a; //explicit conversion from int to float
    a=b; //implicit conversion from float to int
    a=(int)b; //explicit conversion from float to int

    cout<<a<<endl;
    return 0;
}
