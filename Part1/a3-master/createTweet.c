#include "headerA3.h"
tweet *createTweet(tweet *tweetList)
{
    tweet *empty;
    empty = tweetList;
    int sum = 0;
    int id;
    int check = 0;
    char *user;           //For user name
    user = malloc(51 * sizeof(char));
    char *text;          //Tweet from user
    text = malloc(141 * sizeof(char));
    tweet *node;
    node = malloc(sizeof(tweet));  //allocating size of structure

    printf("Enter a user: ");
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
      node->id = id + (rand() % 999) + 1;     //using rand to add number from 1 to 999 randomly to make Id UNIQUE
    }

    else{
      node->id = id;

    }
    node->next = NULL;
    printf("Your computer generated userid is %d\n", node->id);
    strcpy(node->user, user);
    strcpy(node->text, text);
    addNodeToList(&tweetList, node);  //calling already defined function to prevent redundancy and Adding NOde to the list
    return tweetList;
}
