#include "stack.hpp"
using namespace std;

int main(){
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.pop();
    stack.display();
    stack.clear();
    stack.display();
    return 0;
}
