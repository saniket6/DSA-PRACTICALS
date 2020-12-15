#include<stdio.h>
#define size 10
class st{
    private:
        char st[size];
        int top ;
    public:
        St();
        int push(int);
        int pop();
        int isEmpty();
        int Peek();
        int size();
}
st::st(){
    top=-1;
}
int st::Peek(){
return st[top];
}
int st::size(){
return sizeof(st)/sizeofst[0];
}
int st::isEmpty(){
    if(top == -1){
        return -1;
    }
    else{
        return 0;
    }

    }


int st::push(int val){

    ++top;
    st[top]=val;
    return val;


    }
    int pop(){
    int temp;
    if(isEmpty()){
            return 0;
    }
        temp = st[top];
        --top;
        return temp;

    }







int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{   char exp[size];
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");

    st stack,postfix;
    int length=sizeof(exp)/sizeof(exp[0]);
    for(int i=0;i < length;i++){
         char ch = exp.charAt(i);
           if(ch=='('){
               stack.push(ch);
           }
            else if( ch>='0' && ch<='9'||ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){

                postfix.push(ch+"");

            }
            else if(ch==')'){
                while(postfix.size() > 1  && stack.size() > 0 && stack.peek() != '(' ){
                     char op = stack.pop();
                     char postv2[size]=postfix.pop();
                     char postv1[size] = postfix.pop();
                     char val=postv1+postv2+op;
                     postfix.push(val);


                }
                stack.pop();
            }
            else if( ch=='+' || ch=='-' || ch=='*' || ch=='/'){
             while( postfix.size() > 1 && stack.size() > 0 && stack.peek() != '(' && GetPriority(stack.peek()) >= GetPriority(ch)){
                                                   char op = stack.pop();
                     char postv2[size]=postfix.pop();
                     char postv1[size] = postfix.pop();
                     char val=postv1+postv2+op;
                     postfix.push(val);


                }
                stack.push(ch);
        }
        }
        while(stack.size()>0&&postfix.size()>1 ){

                     char op = stack.pop();
                     char postv2[size]=postfix.pop();
                     char postv1[size] = postfix.pop();
                     char val=postv1+postv2+op;
                     postfix.push(val);


                }




    }


return 0;
}
