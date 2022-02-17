#include "headerA3.h"

void addNodeToList(tweet**tweetList,tweet * node)  //DONE
{
    if(*tweetList != NULL){
      tweet *empty = *tweetList;

      while(empty->next != NULL){
          empty = empty->next;
      }
      empty->next = node;
    }
    else{
      *tweetList = node;
    }

}
