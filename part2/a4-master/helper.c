#include "headerA4.h"
tweet *createTweet(tweet *head)
{
    tweet *empty;
    empty = head;
    int sum = 0;
    int id;
    int check = 0;
    char *user;           //For user name
    user = malloc(51 * sizeof(char));
    char *text;          //Tweet from user
    text = malloc(141 * sizeof(char));
    tweet *Nnode;
    Nnode = malloc(sizeof(tweet));  //allocating size of structure

    printf("Enter a username: ");
    fgets(user, 51, stdin);
    printf("Enter the user's tweet: ");
    fgets(text, 141, stdin);

    user[strlen(user)-1] = '\0';   //Preventing data leakage
    text[strlen(text)-1] = '\0';   //preventing data leakage

    for(int i = 0; i < strlen(user); i++){  //Till user name length
        sum = sum + user[i];  //ascii code addition
    }

    id = sum + strlen(text);
    while(empty != NULL){   // iterates Untill current tweet is empty
        if(empty->id == id){   // If ID is same
            check = 1;      //Used later to name ID UNIQUE
          }
        empty = empty->next;
    }
    if(check == 1){     //If id is similar ; NOT UNIQUE
      Nnode->id = id + (rand() % 999) + 1;     //using rand to add number from 1 to 999 randomly to make Id UNIQUE
    }

    else{
      Nnode->id = id;

    }
    Nnode->next = NULL;
    printf("Your computer generated userid is %d\n", Nnode->id);
    strcpy(Nnode->user, user);
    strcpy(Nnode->text, text);
    free(user);
    free(text);

    return Nnode;
}
