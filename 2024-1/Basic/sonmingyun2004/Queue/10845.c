#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct linked_list {
    int value;
    struct linked_list * next;
} Linked_List;

typedef struct queue {
    Linked_List * start;
    Linked_List * end;
} Queue;

void push(int x, Queue * que_address, Linked_List * ll_address)
{
    ll_address -> value = x;
    
    if(que_address -> start == NULL)
    {
        que_address -> start = ll_address;
        que_address -> end = ll_address;
    }
    else
    {
        que_address -> end -> next = ll_address;
        que_address -> end = ll_address;
    }
}

int pop(Queue * que_address)
{
    if(que_address -> start == NULL)
    {
        return -1;
    }
    else
    {
        int n = que_address -> start -> value;
        que_address -> start = que_address -> start -> next;
        return n;
    }
}

int size(Queue Q)
{
    Linked_List * address = Q.start;
    if( address == NULL)
        return 0;
    else
    {
        int count;
        for(count = 0; address != NULL; count++)
        {
            address = address -> next;
        }
        return count;
    }
}

int empty(Queue Q)
{
    if(Q.start == NULL)
        return 1;
    else
        return 0;
}

int front(Queue Q)
{
    if(Q.start == NULL)
        return -1;
    else
        return Q.start -> value;
}

int back(Queue Q)
{
    if(Q.start == NULL)
        return -1;
    else
        return Q.end -> value;
}

int main()
{
    Queue Q = {NULL, NULL};
    
    int n;
    scanf("%d", &n);
    
    Linked_List * ll;
    ll = (Linked_List *) calloc(n, sizeof(Linked_List));
    
    int *output;
    output = (int *) calloc(n, sizeof(int));
    int m = 0;
    
    for (int i = 0; i < n; i++)
    {
        char command[6];
        scanf("%s", command);
        
        if(strcmp(command, "push") == 0)
        {
            int n;
            scanf("%d", &n);
            push(n, &Q, ll + i);
        }
        else if(strcmp(command, "pop") == 0)
        {
            output[m] = pop(&Q);
            m++;
        }
        else if(strcmp(command, "size") == 0)
        {
            output[m] = size(Q);
            m++;
        }
        else if(strcmp(command, "empty") == 0)
        {
            output[m] = empty(Q);
            m++;
        }
        else if(strcmp(command, "front") == 0)
        {
            output[m] = front(Q);
            m++;
        }
        else if(strcmp(command, "back") == 0)
        {
            output[m] = back(Q);
            m++;
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        printf("%d\n", output[i]);
    }
    
    free(ll);
    free(output);
}
