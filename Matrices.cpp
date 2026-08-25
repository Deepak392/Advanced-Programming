#include<iostream>
using namespace std;

class vector;

class matrices{
    private:
        int arr[2][2];
    public:
        matrices(int a, int b, int c, int d){
            arr[0][0] = a;
            arr[0][1] = b;
            arr[1][0] = c;
            arr[1][1] = d;
        }
        void getter(void){
            cout << "row 1 " << arr[0][0] << " " << arr[0][1] << endl;
            cout << "row 2 " << arr[1][0] << " " << arr[1][1] << endl;
        }
        friend vector vector_matrix_multi(matrices*, vector*);
};

class vector{
    private:
        int arr[2];
    public:
        vector(int a, int b){
            arr[0] = a;
            arr[1] = b;
        }
        void getter(void){
            cout << arr[0] << endl;
            cout << arr[1] << endl;
        }
        friend vector vector_matrix_multi(matrices*, vector*);
};

vector vector_matrix_multi(matrices* m1, vector* v1){
    vector v2(0, 0);
    v2.arr[0] = m1->arr[0][0] * v1->arr[0] + m1->arr[0][1] * v1->arr[1];
    v2.arr[1] = m1->arr[1][0] * v1->arr[0] + m1->arr[1][1] * v1->arr[1];
    return v2;
}

int main(){
    matrices m1(1,2,3,4);
    vector v1(5,6);
    vector v3(0,0);

    m1.getter();
    v1.getter();
    v3 = vector_matrix_multi(&m1, &v1);
    v3.getter();
    return 0;
}
