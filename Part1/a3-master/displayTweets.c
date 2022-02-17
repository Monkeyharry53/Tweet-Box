#include "headerA3.h"
void displayTweets(tweet * tweetList)     //DONE
{
    tweet *present;
    if(tweetList == NULL){  //If there is no tweet
        printf("list is empty\n");
      }
    present = tweetList;  // The current Tweet

    while(present != NULL)  //untill tweets are not null
    {
        printf("%d: Created by %s: %s\n", present->id, present->user, present->text);
        present = present->next;
    }
}
