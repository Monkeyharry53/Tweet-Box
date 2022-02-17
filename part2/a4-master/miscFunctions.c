#include "headerA4.h"

void sortID (tweet ** head, tweet ** tail){
  tweet *present;   //for storing head data to perform task without effecting the data in head
  present = *head;   //creating a copy
  int empty;
  int size = 0;
  int flag = 0;    //Using the concept of bollean
  char preuser[51];
  char pretext[141];
  while (present != NULL){  //if there are no tweets
      size++;
      present = present->next;
  }
  for(int i = 0; i < size; i++)
  {
    present = *head;
    while(present->next != NULL)
      {
        if(present->id > present->next->id)     //for sorting id of given data in assending order
        {
          empty = present->id;                        //steps for sorting
          present->id = (present->next)->id;
          (present->next)->id = empty;
          strcpy(preuser, present->user);
          strcpy(present->user, (present->next)->user);
          strcpy((present->next)->user, preuser);

          strcpy(pretext, present->text);
          strcpy(present->text, (present->next)->text);
          strcpy((present->next)->text, pretext);
          flag = 1;            //if data is sorted
        }
        present = present->next;
    }
    if(flag == 0){
      break;
    }
  }
}

void sortUsername (tweet ** head, tweet ** tail){
  tweet *present;
  present = *head;
  int empty;
  int size = 0;
  int flag = 0;
  char preuser[51];
  char pretext[141];
  while (present != NULL){
      size++;
      present = present->next;
  }
  for(int i = 0; i < size; i++)
  {
    present = *head;
    while(present->next != NULL)        //works till there is data in head
      {
        if(strcmp(present->user,present->next->user) > 0)   //sorting data according to username
        {
          empty = present->id;
          present->id = (present->next)->id;
          (present->next)->id = empty;
          strcpy(preuser, present->user);
          strcpy(present->user, (present->next)->user);
          strcpy((present->next)->user, preuser);

          strcpy(pretext, present->text);
          strcpy(present->text, (present->next)->text);
          strcpy((present->next)->text, pretext);
          flag = 1;
        }
        present = present->next;
    }
    if(flag == 0){
      break;
    }
  }
}

void reverse (tweet ** head, tweet ** tail){
    tweet* Nnode;
    tweet* Pnode = NULL;
    tweet* currentHead = *head;

    if(*head == NULL){     //if there is no data(NO tweets)
        printf("The list is empty\n");
        return;
    }

    while (currentHead!=NULL){    //following steps reverse the data inside head
        Nnode = currentHead->next;
        currentHead->next = Pnode;
        Pnode = currentHead;
        currentHead = Nnode;
    }

    tweet* currentHolder = *head;
    *head = *tail;
    *tail = currentHolder;
}
