#include<stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value){
    if (rear == MAX -1)
       printf("Queue overflow\n");
    else{
        if (front == -1)
            front = 0;
        queue[++rear] = value;
    }
}

void dequeue(){
    if (front == -1 || front > rear)
       printf("Queue underflow\n");
    else
        front++;
}

void display(){
    if (front == -1 || front > rear)
       printf(queue is empty\n);
    else{
       for(int i = front; i <= rear; i++)
          printf("%d\n", queue[i]);
    
    }
}    

int main{
    int choice

    while (1){
        scanf(choie){

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