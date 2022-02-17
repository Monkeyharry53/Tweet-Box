#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

typedef struct microtweet
{
    int id; //non-unique integer value
    char user [51]; // the username / userid of the person who wrote the tweet
    char text [141]; // the text of the tweet
    struct microtweet *next; //dynamic connection to the next tweet
} tweet;

void enqueue (tweet ** head, tweet ** tail, tweet * node);
void dequeue (tweet ** head, tweet ** tail);
int isEmpty (tweet * head);
void printQueue (tweet * head);
void sortID (tweet ** head, tweet ** tail);
void reverse (tweet ** head, tweet ** tail);
void sortUsername (tweet ** head, tweet ** tail);
tweet *createTweet(tweet *head);
