#include "headerA3.h"

void deleteTweet(tweet ** tweetList)
{
    tweet *node;
    tweet *empty;
    empty = *tweetList;         //Temporarily storing tweet
    int ncount = 0;
    int n;               //Value from user
    tweet *count;
    count = *tweetList;
    if(*tweetList == NULL){    //If there is no tweet
        return;
    }
    while(count != NULL){  // will iterate untill all tweets are over
        ncount++;            //Node count
        count = count->next;
    }
    printf("Currently there are %d tweets\n", ncount);
    printf("Which tweet do you wish to delete - enter a value between 1 and %d: ", ncount);
    scanf("%d", &n);

    if(n == 1){           //Special case for 1st tweet as here head is declared
        *tweetList = empty->next;
        printf("Tweet %d deleted. There are now %d tweets left.\n", empty->id, ncount - 1);
        free(empty);    // Freeing because it is dynamically defined
        return;
    }
    for(int i = 1; (empty != NULL) && (i < n - 1); i++){      //Deleting other tweets
        empty = empty->next;
    }
    if(empty->next == NULL){
        return;
    }

    node = empty->next->next;
    printf("Tweet %d deleted. There are now %d tweets left.\n", empty->next->id, ncount - 1);
    free(empty->next);
    empty->next = node;

}
