#include "headerA4.h"

void enqueue (tweet ** head, tweet ** tail, tweet * node){
    if(*head == NULL)           //if there is no tweet
    {
        *head = node;
        *tail = node;
        (*head)->next = NULL;
        (*tail)->next = NULL;
    }
    else
    {
        (*tail)->next = node;
        *tail = node;
        (*tail)->next = NULL;
    }
}
void dequeue (tweet ** head, tweet ** tail)
{
    tweet *empty = *head;

    *head = (*head)->next;

    if(*head == NULL){         //if it is empty
      printf("Tweet list empty\n");
      empty = NULL;
    }

    free(empty);    //to delete
}

int isEmpty (tweet * head)
{
    if(head != NULL){       //if tweet is not empty(there are tweets)
        return 0;
    }
    else{                    //if tweet in empty (NO tweet)
        return 1;
    }
}

void printQueue (tweet * head)
{
    tweet *temp;
    temp = head;         //for performing individual action
    if(head == NULL){   //if queue is empty
        printf("Queue is empty\n");
    }
    else{
        while(temp != NULL)
        {
            printf("%d: Created by %s: %s\n", temp->id, temp->user, temp->text);
            temp = temp->next;
        }
    }
}

