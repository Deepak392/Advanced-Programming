#include<iostream>
using namespace std;

class Stack{
    private:
    static const int MAX = 100;

     int arr[MAX];
     int top;

     public:
        Stack(){
            top = -1;
        }

        bool isEmpty(){
            return top == -1;
        }

        bool isFull(){
            return top == MAX - 1;
        }

        void push(int x){
            if(isFull()){
                cout << "Stack Overflow" << endl;
                return;
            }
            arr[++top] = x;
        }

        void pop(){
            if(isEmpty()){
                cout << "Stack Underflow" << endl;
                return;
            }
            top--;
        }

        void peek(){
            if(isEmpty()){
                cout << "Stack is empty" << endl;
                return;
            }
            cout << "Top element is: " << arr[top] << endl;
        }

        void display(){
            if(isEmpty()){
                cout << "Stack is empty" << endl;
                return;
            }
            cout << "Stack elements are: ";
            for(int i = top; i >= 0; i--){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.display();
    return 0;
}
