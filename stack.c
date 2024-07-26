#include <stdio.h>

#define max 5

int stack[max], top= -1, val, i;

//push
int push(){
     if(top == (max-1)){
          printf("stack is full \n");
        }else{
          printf("enter value: ");
          scanf("%d", &stack[top]);
          top++;
        };
        printf("\n");
}

//display
int display(){
    if(top == -1){
        printf("empty stack; \n");
    }else{
        for(i=-1;i<top;i++){
            printf("%d \n", stack[i]);
        }
        printf("\n");
    }
}

//pop
int pop(){
    if(top == -1){
        printf("stack is empty, nothing to pop. \n");
    }else{
        val == stack[top];
        printf("popped value: %d \n", val);
        top--;
       
       
    }
}

//peep
int peep(){
    if(top == -1){
        printf("stack is empty, nothing to pop. \n");
    }else{
        val = stack[top];
        printf("value: %d \n",val);
    }
}


int main(){
  int opt;
  do{
    printf("\n main menu \n 1.push \n 2.display \n 3.pop \n 4.peep \n Choose operation: ");
    scanf("%d", &opt);
   
    switch (opt){
        case 1:
            push();
            break;
        case 2:
            display();
            break;
        case 3:
            pop();
            break;
        case 4:
            peep();
            break;
       
        default: printf("enter vaild input \n");
    }
  }
  while(opt != 5);
 
  return 0;
}