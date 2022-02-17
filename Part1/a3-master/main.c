#include "headerA3.h"

int main()
{
    int entery = 0;
    int rvalue;
    tweet *tweetList = NULL;
    while (entery != 8)                        //The MENU given shown is given in A3
    {
        printf("MENU:\n");
        printf("1. Create a new tweet\n");
        printf("2. Display tweets\n");
        printf("3. Search a tweet (by keyword)\n");
        printf("4. find how many words are stop words\n");
        printf("5. Delete the nth tweet\n");
        printf("6. Save tweets to a file\n");
        printf("7. Loads tweets from a file\n");
        printf("8. Exit\n\n");
        printf("Choose a menu option: ");
        scanf("%d", &entery);        //To get user choice
        getchar();
            // These if and else if works according to user choice
        if(entery == 1){
          tweetList = createTweet(tweetList);
        }
        else if(entery == 2){
          displayTweets(tweetList);
        }
        else if(entery == 3){
          rvalue = searchTweetsByKeyword(tweetList);
          if(rvalue == 0){
            printf("No match found.\n");
          }
        }
        else if(entery == 4){
          countStopWords(tweetList);
        }
        else if(entery == 5){
          deleteTweet(&tweetList);
        }
        else if(entery == 6){
          saveTweetsToFile(tweetList);
        }
        else if(entery == 7){
          loadTweetsFromFile(&tweetList);
        }
    }
    return 0;
}
