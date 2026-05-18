#include<stdio.h>
#define max 100

int stack[max];
int top = -1;

void push(int value){
    if (top == max -1)
        printf("stack Overflow\n");
    else
        stack[++top] = value;
}

void pop(){
    if (top == -1)
       printf("stack underflow\n");
    else
       top--;
}

void display() {
    if (top == -1)
       printf("stack is empty\n");
    else
        for(int i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main(){
    int choice, value;
    while (1)
    {
        scanf("%d", &choice);
        switch (choice){
            case 1:
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
        }

    }
    
}