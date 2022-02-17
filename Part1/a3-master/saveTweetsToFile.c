#include "headerA3.h"

void saveTweetsToFile(tweet * tweetList)
{
    tweet *present;
    present = tweetList;   //storing current tweet
    char *filename;     // file name ; by user
    filename = malloc(100 * sizeof(char));
    printf("Enter the filename where you would like to store your tweets: ");
    fgets(filename, 100, stdin);

    filename[strlen(filename)-1] = '\0';

    FILE *fp ;
    fp = fopen(filename, "w");   //opening file in write mode
    if(fp == NULL){
        printf("File does not exists or is corrupted\n");
    }
    while(present != NULL){
        fprintf(fp, "%d,%s,%s\n", present->id, present->user, present->text);
        present = present->next;
    }
    printf("Output successful\n");
}
