#include <iostream>
using namespace std;
//define fixed size stack
#define MAX_SIZE 5

class Stack {
    private :
    int stackArr[MAX_SIZE];
    int top;
    public:
    Stack() {
        top = -1;
    };
    ~Stack() {
        top = -1;
        cout << "Stack cleared." << endl;
    };
    void push(int value) {
        if (top == MAX_SIZE -1){
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        stackArr[top] = value;
        cout << "Pushed " << value << " onto the stack." << endl;
    }
    void pop(){
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
        cout << "Popped " << stackArr[top] << " from the stack." << endl;
    }
    void peek(){
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Top element is " << stackArr[top] << endl;
    }
    void display(){
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements are: ";
        for (int i = 0; i <= top; i++) {
            cout << stackArr[i] << " ";
        }
        cout << endl;
    }
    void clear(){
        top = -1;
        cout << "Stack cleared." << endl;
    }
};
