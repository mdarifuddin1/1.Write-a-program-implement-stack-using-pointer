#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct stack{

  int  top;
   int data [MAX] ;

};
void push ( struct stack *, int);
void  traverse (struct stack * );
int pop (struct stack *);
int   isFull(int);
int  isEmpty(int);


int main(){

struct stack mystack;
   mystack.top = -1;



  while(1){

        int ch ,item;

    printf(" \n Enter your choice ");
    printf(" \n 1. Push  ");
    printf(" \n 2. pop  ");
    printf(" \n 3. traverse ");
    printf("  \n 4. Exit \n");
    scanf("%d",&ch);
    switch(ch){

    case 1:
        printf("\n Enter a value ");
        scanf("%d", &item);
        push( &mystack, item);
         break ;
    case 2:
       item= pop(&mystack);
       if(item){

        printf(" \n %d the vale is pop",item);
       }
       else{
            printf(" \n the stack is Underflow");
       }
       break;
    case 3:
        traverse( &mystack);
        break ;

    case 4:
        exit(0);
    }

  }

  return 0;
}

void push (struct stack *mystack ,int item){

    if(isFull(mystack->top)){

          printf("\n The stack is full.  ");
      }


        else{
            mystack-> top++;
           mystack -> data[mystack ->top] = item;
            printf(" \n %d is push. ",item);

        }
}

void  traverse(struct stack *mystack){

       if(isEmpty (mystack ->top)){

           printf("\n The stack is Underflow ");
       }
       else{

        for(int i =mystack ->top; i>=0; i-- ){

            printf("%d ",mystack ->data[i]);
        }
          printf("  \n ");
       }

}

int pop(struct stack *mystack){

if(isEmpty (mystack ->top)){

    return 0;
}else{
        return mystack ->data[mystack->top--];
}

}



int isFull (int top){

         if(top == MAX - 1){

              return 1;
         }

            else{
                return 0;
            }
}

int isEmpty( int top){

      if(top == MAX-1){

        return 1;
      }

 else{

      return 0;

}
}



