#include "headerA3.h"

void countStopWords(tweet * tweetList)
{
    char *empty;                //for storing data temporarily
    empty = malloc(141 * sizeof(char));
    char *stopWrds[] = {"a","an","and","are","as","at","be","by","for","from","has","he","in","is","it","its","of","on","that","the","to","was","were","will","with"}; // Given in the Instructions
    char *word;
    int CntStops = 0;   //For counting total numbers od stops(define in variable mentioned above)
    int CntNode = 0;
    tweet *present;        //Storing current tweet
    present = tweetList;

    while(present != NULL){    //untill current tweet is empty
        strcpy(empty, present->text);
        word = strtok(empty, " ,.");

        while(word != NULL)  //untill there are words in tweet
        {
            for(int i = 0; i < 25; i++){
                if(strcmp(word, stopWrds[i]) == 0){  //Checkking Stops in a tweet
                    CntStops = CntStops + 1;
                }
            }
            word = strtok(NULL, " ,.");   // Breaking in order to move to next word(act as line seprater)
        }
        CntNode = CntNode + 1;
        present = present->next;
    }
    printf("Across %d tweets, %d stop words were found.\n", CntNode, CntStops);
}
