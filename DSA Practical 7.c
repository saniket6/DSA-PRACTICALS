//This Program is  made by Aniket Singh
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *next;
};

int size = 0;
struct node *front = NULL,*rear = NULL;

void display(){
    if(front == NULL){
        printf("Queue is Empty\n");
    }
    else{
        struct node *temp = front;
        while(temp->next != NULL){
            printf("%d --> ",temp->data);
            temp = temp->next;
        }
        printf("%d \n",temp->data);
        printf("\n");
   }
}

void EnQueue(){
    printf("Enter the element\n");
    int val;
    scanf("%d",&val);

    struct node *nn = (struct node *)malloc(sizeof(struct node));
    nn->data = val;
    nn->next = NULL;

    if(front == NULL){
        front = rear = nn;
        printf("The Queue After Insertion Operation Is:\n");
        display();
        size++;
        printf("\n");
    }
    else{
        rear->next = nn;
        rear = nn;
        printf("The Queue After Insertion Operation Is:\n");
        display();


        size++;
        printf("\n");
    }
}

void DeQueue(){
    struct node *temp;
    if(front == NULL){
        printf("Queue Is Empty\n");
        printf("\n");
    }
    else{
        temp = front;
        front = front->next;
        size--;
        free(temp);
        if(size == 0){
            printf("After Deletion Queue Is Empty\n");
            printf("\n");
        }
        else{
        printf("The Queue After Deletion Operation Is\n");
        display();
        printf("\n");
        }

    }
}

void peek(){
    if(front==NULL){
        printf("Queue is empty\n");
        printf("\n");
    }
    else{
        printf("The Peek Of The Queue Is %d\n",front->data);
        printf("\n");
    }
}

int main(){
    printf("QUEUE IMPLEMENTATION USING LINKEDLIST\n");
    printf("-------------------------------------\n");
    printf("\n");
    int choice;
    while(choice!=6){
        printf("Enter 1 For Insertion Operation\n");
        printf("Enter 2 For Deletion Operation\n");
        printf("Enter 3 For Display\n");
        printf("Enter 4 For Finding Peek Element\n");
        printf("Enter 5 For Finding Size of Queue\n");
        printf("Enter 6 For Exit\n");

        printf("\nEnter your choice\n");
        scanf("%d",&choice);

        switch(choice){
         case 1:
                EnQueue();
                break;
         case 2:
                DeQueue();
                break;
         case 3:
                display();
                break;
         case 4:
                peek();
                break;
         case 5:
               printf("The Size Of The Queue Is %d\n",size);
               printf("\n");
               break;

         case 6:
                exit(0);
         default:
                printf("\nInvalid Choice. Enter a valid choice\n");
        }
    }
   return 0;
}
