#include<stdio.h>
#define MAX_SIZE 5
#define E_T_DEFAULT 0.0f
typedef float E_t;

int top_index=-1;
E_t items[MAX_SIZE];

E_t top(){
    if(empty())
    {
        printf("Stack Empty");
        return E_T_DEFAULT;
    }
    return items[top_index];
}
bool empty(){
    return (top_index==-1);
}
bool full(){
    return(top_index==MAX_SIZE-1);
}
bool size(){
    return top_index+1;
}

void push(E_t item){
    if(full())
    {
        printf("Stack full\n");
        return ;
    top_index++;
    items[top_index]= item;
}
void pop()
{
    if(empty())
    {
        printf("Stack empty\n");
        return ;
}
items[top_index] =E_T_DEFAULT;//
top_index--;
}