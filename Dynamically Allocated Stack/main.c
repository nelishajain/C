#include <stdlib.h> 
#include <stdio.h>

struct node{
char data;
struct node *next;
};

struct node* top = NULL;

void push (char c) 
{
struct node* temp = (struct node*)malloc(sizeof(struct node*)); 
temp->data = c;
temp->next =top;
top = temp;
}
 
char pop()
{
char value;
struct node *temp; 
temp = top;
value = top->data;
top=top->next;
free(temp);
return value;
}

int empty() 
{
  if(top==NULL)
{
return 0;
}
else
{
return 1;
}
}
main(int argc, char *argv[])
{


int c;
char a[1];
char cmd [10];
FILE *file;
FILE *output;
output = fopen(argv[2], "a");
file = fopen(argv[1], "r");
if (file) {
    while ((c = fscanf(file,"%s ", cmd)) != EOF)
       {

        if(strcmp(cmd,"push")==0)
         {
        fscanf(file,"%s",a);
        push(a[0]);
         
        }
else
{
         if(empty()==1)
{
        pop();
}
else
{
 fprintf(stderr,"Stack is empty\n");
exit(1);
} 
       
}

       }

    
    fclose(file);
 
}


while(empty()!=0)
{

 fprintf(output,"%c",pop());
}
   fclose(output);

}
