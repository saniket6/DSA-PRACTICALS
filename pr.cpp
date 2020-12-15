#include <stdio.h>
int arr[10],n;
void insert1(int ele, int idx){
        if(idx == n){
            arr[n]=ele;
        }
            for(int i = n; i>=idx; i--){
                arr[i] = arr[i-1];
            }
            arr[idx] = ele;
            n++;
        }



void delet(int idx){
    for(int i=idx;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}

int findidx(int ele){
    for(int i = 0; i<n; i++){
            if(arr[i] == ele){
                return i;
                break;
            }
        }
        return -1;
}


void display(){
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}
int main() {
printf("Enter The Size Of Array\n");
scanf("%d",&n);
printf("Enter The Elements Of Array\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

printf("\n");
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\n");
int choice;
while(choice!=5){
printf("\n");
printf("Enter 1 For Insertion\n");
printf("Enter 2 For Deletion\n");
printf("Enter 3 For Finding The Location\n");
printf("Enter 4 For Displaying The Array\n");
printf("Enter 5 For Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1: //Insert
printf("\n");
printf("Enter 1 For Inserting The Element At Given Position\n");
printf("Enter 2 For Inserting The Element At End Of Array\n");
int insertion_choice;
scanf("%d",&insertion_choice);
if(insertion_choice==1){
printf("\n");
printf("Enter The Element\n");
int val;
scanf("%d",&val);
printf("\n");
printf("Enter The Index\n");
int idx;
scanf("%d",&idx);
insert1(val,idx);
}
else{
printf("\n");
printf("Enter The Element\n");
int val;
scanf("%d",&val);
insert1(val,n);
}
break;
case 2: //Delete
printf("\n");
printf("Enter 1 For Deletting The Element By Position\n");
printf("Enter 2 For Deleting The Element By Value\n");
int deletion_choice;
scanf("%d",&deletion_choice);
if(deletion_choice==1){
printf("\n");
printf("Enter The Index\n");
int idx;
scanf("%d",&idx);
delet(idx);}
else{
printf("\n");
printf("Enter The Element\n");
int ele;
scanf("%d",&ele);
int idx;
idx=findidx(ele);
if(idx!=-1){
delet(idx);
}
else{
printf("Not Found\n");
}
}
break;
case 3: //Findelement
printf("\n");
printf("Enter The Element\n");
int ele;
scanf("%d",&ele);
int idx;
idx=findidx(ele);
if(idx!=-1){
printf("%d is At %d position\n",ele,idx);
}
else{
printf("Element Not Found\n");
}
break;
case 4: //Display
printf("\n");
printf("Display Of Array\n");
display();
break;
case 5: //Exit
break;
default:
    printf("Invalid Input");
}}
return 0;
}
