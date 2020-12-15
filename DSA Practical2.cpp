#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
int len;
struct Node *head=NULL;
struct Node *tail=NULL;
void InsertElement(){
printf("Enter the Element\n");
int ele;
scanf("%d",&ele);
struct Node *temp;
temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=ele;
if(head == NULL){
    head=tail=temp;
    tail->next=NULL;
    len++;
    return;
}
else if(ele <= head->data){
    temp->next=head;
    head=temp;
    len++;
}
else{
    struct Node *temp2;
    temp2=head;
    while(temp2->next !=NULL && temp2->next->data<= temp->data){
            temp2=temp2->next;

    }
    temp->next=temp2->next;
    temp2->next=temp;
    len++;
}
printf("\n");
}
int SearchElement(int ele){
struct Node *temp;
temp=head;
int counts=0;
while(temp->next!=NULL && temp->data!=ele){
    temp=temp->next;
    counts+=1;
}
if(temp->data == ele){
    return counts;
}
else{
    return -1;
}

}
void DeleteElement(){
int ele;
if(len == 0){
    printf("List is Empty\n");
}
else if(len == 1){
    printf("Enter the Element\n");
    scanf("%d",&ele);
    int idx;
    idx=SearchElement(ele);
    if(idx!=-1){
        head=tail=NULL;
        len--;
    }
    else{
        printf("Entered Element is Not Found in Linked List\n");
    }
}
    else{
        printf("Enter the Element\n");
        scanf("%d",&ele);
        int idx;
        idx=SearchElement(ele);
        if(idx == -1){
            printf("Entered Element Not Find in List\n");
        }

        else{
            if(idx ==0){
            struct Node *temp=head;
            head=temp->next;
            len--;
        }
        else if(idx == len-1){
           struct Node *temp2=head;
           for(int i=0;i<idx-1;i++){
            temp2=temp2->next;
           }
           temp2->next=NULL;
           len--;
        }
        else{
            struct Node *temp3=head;
            for(int i=0;i<idx-1;i++){
                temp3=temp3->next;
            }
            temp3->next=temp3->next->next;
            len--;


        }




}
}
}

void Display(struct Node *head){
printf("The Linked List is\n");
while(head){
    printf("%d -> ",head->data);
    head=head->next;
}
printf("NULL");
printf("\n");
       }






int main(){
int user_choice;
while(user_choice!= 5){
printf("Enter 1 For Insertion\n");
printf("Enter 2 For Deletion\n");
printf("Enter 3 For Searching Element\n");
printf("Enter 4 For Displaying\n");
printf("Enter 5 For quit\n");
scanf("%d",&user_choice);
printf("\n");
switch(user_choice){
case 1:
InsertElement();
break;
case 2:
DeleteElement();
break;
case 3:
printf("Enter the Element To Search\n");
int e;
scanf("%d",&e);
int idx;
idx=SearchElement(e);
if(idx!=-1){
printf("%d is At %d Index\n",e,idx);
}
else{
printf("Entered Element Not Found\n");
}
break;
case 4:
if(len == 0){
printf("List is Empty\n");
}
else{
Display(head);}
break;
case 5:
exit(0);
break;
default:
printf("Invalid Input\n");
}}
return 0;
}
