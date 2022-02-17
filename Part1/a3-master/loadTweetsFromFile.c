#include "headerA3.h"
#include <ctype.h>
void loadTweetsFromFile(tweet ** tweetList)
{
    char *filename;
    filename = malloc(50 * sizeof(char));
    char line[1000];
    char words[3][141];    //for words
    int count;
    int wCount;   // for word count
    int cCount;   // for char count(specially for ',')
    printf("Enter a filename to load from: ");
    fgets(filename, 51, stdin);

    filename[strlen(filename) - 1] = '\0';

    FILE *fp;
    fp = fopen(filename, "r");
    if(fp == NULL){
        printf("File could not be opened or file is corrupted\n");
    }

    while(fgets(line, 500, fp))
    {
        wCount = 0;
        cCount = 0;
        count = 0;
        tweet *newNode = malloc(sizeof(tweet));
        line[strlen(line)-1] = '\0';

        for(int i = 0; i < strlen(line); i++){
            if(line[i] != ',')                      //checks that the current char is not ',' store in words(from tweet or file)
            {
                if(isspace(line[i]) && line[i - 1] == ','){  // Check that current char is space and  last char(i - 1) is ',' store previous char in words.
                    words[wCount][cCount++] = line[i - 1];
                }
                words[wCount][cCount] = line[i];
                cCount = cCount + 1 ;
            }

            else if(line[i] == ',' && !isspace(line[i + 1]))              //checks that present char is ',' and next char in not a space
            {
                words[wCount][cCount] = '\0';
                wCount++;
                count++;
                cCount = 0;
            }
        }
        if(count == 2)   //This if is used if there are 2 ',' togther ; or does not end with ','
        {
            words[2][cCount] = '\0';      // than word will become empty ; \0
        }
        newNode->id = atoi(words[0]);    // atoi to couvert string into int
        strcpy(newNode->user, words[1]);
        strcpy(newNode->text, words[2]);
        newNode->next = NULL;

        addNodeToList(tweetList, newNode);
    }
    if(*tweetList != NULL)    // If file is not empty or corrupted than file will be loaded into tweets
    {
        printf("Tweets imported!\n");
    }
    else if(*tweetList == NULL)    // if there are no tweets
    {
        printf("Error loading from file or file is empty\n");
    }
    free(filename);   // Because i used dynamic allocation
}
