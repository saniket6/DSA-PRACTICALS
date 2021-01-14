//This Program is made by Aniket Singh
#include <stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int front = -1;
int rear = -1;
int cs = 0;

void Enqueue(){
    int value;
    printf("\nEnter the element\n");
    scanf("%d",&value);
    if((rear + 1) % size == front){
        printf("\nQueue Overflow\n");
    }
    else if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
        queue[rear] = value;
        cs++;
    }
    else{
        rear = (rear+1) % size;
        queue[rear] = value;
        cs++;


    }
    printf("\n");
}

void Dequeue(){
    if(front == -1 && rear == -1){
        printf("\nQueue Underflow\n");
    }
    else if(front == rear){
        front = rear = -1;
        cs--;
    }
    else{
        front = (front+1) % size;
        cs--;
    }
    printf("\n");
}

void Peek(){
    if(front == -1 && rear == -1){
        printf("\nQueue Underflow\n");
    }
    else{
        printf("\nThe peek element is %d\n",queue[front]);
    }
    printf("\n");
}

void Display(){
    int i = front;
    int j = 0;
    if(front == -1 && rear == -1){
        printf("\nQueue Underflow\n");
    }
    else{
        printf("\nElements of  Queue are:\n");
        while(j < cs){
            printf("%d ",queue[i]);
            i = (i+1)%size;
            j++;
        }
        printf("\n");
        printf("\n");
    }
}

int main(){
    printf("Circular QUEUE IMPLEMENTATION USING Linear Array\n");
    printf("------------------------------------------------\n");
    printf("\n");
    int choice;
    while(choice!=5){
        printf("Enter 1 For Enqueue\n");
        printf("Enter 2 For Dequeue\n");
        printf("Enter 3 For Getting Peek Value\n");
        printf("Enter 4 For Displaying the Circular Queue\n");
        printf("Enter 5 For Exit\n");
        printf("\nEnter Your Choice:\n");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            Enqueue();
            printf("\n");
            break;

        case 2:
            Dequeue();
            printf("\n");
        break;

        case 3:
            Peek();
        break;

        case 4:
            Display();
        break;

        case 5:
               break;

        default:
            printf("\nInvalid Input. Please Enter A Valid Input.\n");
        }
    }
	return 0;
}
