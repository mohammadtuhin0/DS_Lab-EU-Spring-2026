#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    if (top == MAX-1){
        printf("Stack Overflow");
        return;
    }
    top = top+1;
    stack[top] = val;
    printf("%d push in stack\n", val);
}

void pop() {
    if (top == -1){
        printf("Stack is underflow");
        return;
    }
    int val = stack[top];
    top = top-1;
    printf("%d popped from stack\n", val);
    
}

void display() {

    if (top == -1){
        printf("stack is empty");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--){
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    display();

    pop();
    display();
    
    return 0;
}