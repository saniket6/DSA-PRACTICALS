//This Program is made by Aniket Singh
#include <stdio.h>
#define Maxsize 10

int queue[Maxsize];

int front = -1;
int rear = -1;
int isEmpty(){
    if(front == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    if(rear == Maxsize-1){
        return 1;
    }
    else{
        return 0;
}
}

void Enqueue(){
    int val;
    if(isFull()){
        printf("\nQueue Is Empty. Insertion Not Possible\n");
        return;
        }
    else{
        printf("\nEnter The Element\n");
        scanf("%d",&val);
        if(front == -1){
            front = 0;
        }
        rear = rear + 1;
        queue[rear] = val;
        }
}

void Dequeue(){
    if(isEmpty()){
        printf("Queue Is Empty\n");
        return;
    }
    else{
        if(front == rear){
            front = rear = -1;
        }
        else{
        front = front + 1;
        }
}
}
void Peek(){
    if(isEmpty()){
        printf("\nQueue Underflow\n");
        return;
    }
    else{
        printf("The Peek Element Of Queue Is %d\n",queue[front]);
    }
}

void Display(){
    if(front == -1){
        printf("\nQueue Is Empty\n");
        return;
    }
    printf("Display of Queue\n");
    for(int i = front; i<=rear; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main(){
    printf("-------------------------------------\n");
    printf("QUEUE IMPLEMENTATION USING ARRAY\n");
    printf("-------------------------------------\n");
    printf("\n");

    int choice;
    while(choice!=5){
        printf("\n");
        printf("Enter 1 For Enqueue\n");
        printf("Enter 2 For Dequeue\n");
        printf("Enter 3 For Display\n");
        printf("Enter 4 For Peek Element\n");
        printf("Enter 5 For Exit\n");

        printf("\nEnter your choice\n");
        scanf("%d",&choice);

        switch(choice){
         case 1:
                Enqueue();
                break;
         case 2:
                Dequeue();
                break;
         case 3:
                Display();
                break;
         case 4:
                Peek();
                break;
         case 5:
                break;
         default:
                printf("\nInvalid Choice. Enter a valid choice\n");
        }
    }
   return 0;
}
