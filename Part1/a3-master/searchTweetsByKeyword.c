#include "headerA3.h"
#include <ctype.h>

int searchTweetsByKeyword(tweet * tweetList)
{
    tweet *present;   //Storing current tweet
    present = tweetList;
    char *keyword;
    keyword = malloc(100 * sizeof(char));  //dynamic allocation
    int rvalue = 0;   //return value

    printf("Enter a keyword to search: ");
    fgets(keyword, 100, stdin);   //geting word from user

    keyword[strlen(keyword)-1] = '\0';   //preventing storage leakage

    for(int i = 0; i < strlen(keyword); i++){  //using to converting in Lower case to make it simple to find word
        keyword[i] = tolower(keyword[i]);
    }

    while(present != NULL)
    {
        if(strstr(present->text, keyword))   // check that the text in tweet is similar to keyword that user wants to find
        {
            printf("Match found for '%s': %s wrote: \"%s\"\n", keyword, present->user, present->text);
            rvalue = 1;
        }
        present = present->next;
    }

    return rvalue;
}
