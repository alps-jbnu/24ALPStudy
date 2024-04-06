#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct linked_list{
    int value;
    struct linked_list * next;
} Linked_List;

void push(int x, Linked_List ** stack, Linked_List * new_Linked_List_address)
{
    (*new_Linked_List_address).value = x;
    
    new_Linked_List_address -> next = *stack;
    
    *stack = new_Linked_List_address;
}

int size(Linked_List ** stack)
{
    int n = 0;
    Linked_List * address = *stack;
    while(1)
    {
        if(address == 0)
            break;
        else
        {
            address = address -> next;
            n++;
        }
    }
    return n;
}

int pop(Linked_List ** stack)
{
    if(*stack == NULL)
    {
        return -1;
    }
    else
    {
        int n = ((*stack) -> value);
        *stack = ((*stack) -> next);
        return n;
    }
}

int empty(Linked_List ** stack)
{
    if(*stack == NULL)
        return 1;
    else
        return 0;
}

int top(Linked_List ** stack)
{
    if(*stack == NULL)
        return -1;
    else
        return (*stack) -> value;
}

int main(void)
{
    Linked_List * stack = NULL;
    int n;
    scanf("%d", &n);
    
    Linked_List *new;
    new = (Linked_List *)calloc(n, sizeof(Linked_List));
    
    int * output;
    int m = 0;
    output = (int *)calloc(n, sizeof(int));
    
    
    for(int i = 0; i < n; i++)
    {
        char command[6];
        scanf("%s", command);
        
        if(strcmp(command, "push") == 0)
        {
            int j;
            scanf("%d", &j);
            push(j, &stack, new + i);
        }
        else
        {
            if(strcmp(command, "pop") == 0)
                output[m] = pop(&stack);
            else if(strcmp(command, "size") == 0)
                output[m] = size(&stack);
            else if(strcmp(command, "empty") == 0)
                output[m] = empty(&stack);
            else if(strcmp(command, "top") == 0)
                output[m] = top(&stack);
            
            m++;
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        printf("%d\n", output[i]);
    }
    
    free(new);
    free(output);
    
}
