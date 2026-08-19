#include <iostream>
#include <string>
using namespace std;


char stack [ 100 ];
int top = -1;

void push (char x) {
    top = top + 1;
    stack[top] = x;
} 

char pop () {
    return stack[top --];
}

int priority (char x) {
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    if(x == '^')
        return 3;
    return 0;
}

int main() {
    string exp;
    cin >> exp;
    int i = 0;
    int x;
    while (exp[i] != '\0') {
        if (isalnum(exp[i]))
            cout << exp[i];
        else if (exp[i] == '(')
            push (exp[i]);
        else if (exp[i] == ')'){
            while ((x = pop())!= '(') 
                cout << x;
            pop();
        } else {
            while (priority(stack[top]) >= priority(exp[i]))
                cout << pop();
        }
        push (exp[i]);
        i ++;
    }
        while (top != -1) {
            cout << pop();
        }
    
}
