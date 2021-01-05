#include<stdio.h>
struct Node{
int data;
struct Node* next;
};
struct Node* newnode;
struct Node* top;
struct Node* delnode;
struct Node* node;
struct Node* createnode(int n){
node  = (struct node*)malloc(sizeof(struct Node));
node->data = n;
node->next = NULL;
return node;
}

void Push(int n){
newnode = createnode(n);
if(top == NULL){
    top = newnode;
}
else{
    newnode->next = top;
    top = newnode;
}
}
int pop(){
int n = top->data;
delnode = top;
top = top->next;
free(delnode);
return n;
}

int evaluate(char postfix[]){
    int i;
    char ch;
    int val;
    int a, b;

    /* evaluate postfix expression */
    for (i = 0; postfix[i] != '\0'; i++) {
        ch = postfix[i];
        if (isdigit(ch)) {
            /* we saw an operand,push the digit onto stack
ch - '0' is used for getting digit rather than ASCII code of digit */
            Push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            /* we saw an operator
* pop top element a and next-to-top element b
* from stack and Evaluate
*/
            a = pop();
            b = pop();

            switch (ch) /* ch is an operator */
            {
            case '*':
                val = b * a;
                break;

            case '/':
                val = b / a;
                break;

            case '+':
                val = b + a;
                break;

            case '-':
                val = b - a;
                break;
            }

            /* push the value obtained above onto the stack */
            Push(val);
        }
    }
    printf("\nResult of Expression After Evaluation Is: %d \n", pop());
}



int main(){
printf("\n");
printf("\n");
printf("\n");
printf("---------------------------------------------------------------------------\n");
printf("Evaluation of Postfix Expression using Stack (Implemented Using LinkedList)\n");
printf("---------------------------------------------------------------------------\n");
printf("\n");
top = NULL;
printf("Enter the PostFix Expression\n");
char s[100];
scanf("%s",s);
evaluate(s);
return 0;
}
