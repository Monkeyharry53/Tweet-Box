#include "headerA4.h"

int main()
{
    int i;
    tweet *Nnode;
    tweet *head = NULL;
    tweet *tail = NULL;
    tweet *check = NULL;        // to check if tweet is empty or not
    tweet *n1;
    tweet *n2;
    tweet *n3;
    printf("Beginning A4 program testing...\n");
    printf("Creating initial queue list...\n");
    for(i = 0; i < 5; i++)            //5 entries from the user
    {
        Nnode = createTweet(head);
        enqueue(&head, &tail, Nnode);
    }
    printf("\n");
    printf("Verify queue contents via printQueue\n");
    printQueue(head);            //calling function that is defined in oher file (TO PRINT )
    getchar();  //Press enter to countinue

    printf("Testing [Enqueue] function\n");
    n1 = malloc(sizeof(tweet));              //1st hard code entry
    n1->id = 3112;    //giving id
    strcpy(n1->user, "tommy");    //user name
    strcpy(n1->text, "By the order of Peaky Blinders!!");  //user tweet(dialogue)
    n1->next = NULL;
    printf("Iteration [1]: [Node]: %d: Created by %s: %s\n", n1->id, n1->user, n1->text);
    enqueue(&head, &tail, n1);   //calling function that is already defined in other file (TO ADD NODE TO THE QUEUE)

    printf("\n");
    printf("After enqueue, queue looks like:\n");
    printQueue(head);
    getchar();

    n2 = malloc(sizeof(tweet));         //2nd hard code entry
    n2->id = 1806;                          //Rest steps are same as described in previous comments
    strcpy(n2->user, "Heisenberg");
    strcpy(n2->text, "You are Goddamn right");
    n2->next = NULL;

    printf("Iteration [2]: [Node]: %d: Created by %s: %s\n", n2->id, n2->user, n2->text);
    enqueue(&head, &tail, n2);
    printf("\n");
    printf("After enqueue, queue looks like:\n");
    printQueue(head);
    getchar();

    n3 = malloc(sizeof(tweet));     //3rd hard code entry
    n3->id = 2408;                 //Rest steps are same as described in previous comments for hard code entries
    strcpy(n3->user, "Vegeta");
    strcpy(n3->text, "One thing a Sayain always keeps, His Pride");
    n3->next = NULL;

    printf("Iteration [3]: [Node]: %d: Created by %s: %s\n", n3->id, n3->user, n3->text);
    enqueue(&head, &tail, n3);
    printf("\n");
    printf("After enqueue, queue looks like:\n");
    printQueue(head);
    getchar();

    printf("Testing [Dequeue] function\nIteration [1]\n");          //Testing functions and showing result after the implimentation of the function
    dequeue(&head, &tail);
    printf("After dequeue, queue looks like:\n");
    printQueue(head);
    getchar();

    printf("Iteration [2]\n");
    dequeue(&head, &tail);
    printf("After dequeue, queue looks like:\n");
    printQueue(head);
    getchar();

    printf("Iteration [3]\n");
    dequeue(&head, &tail);
    printf("After dequeue, queue looks like:\n");
    printQueue(head);
    getchar();

    printf("Testing [isEmpty] function\nIteration [1]\nTesting with list, expecting !isEmpty\n");    //Testing functions and showing result after the implimentation of the funtion
    if(!isEmpty(head))
    {
        printf("SUCCESS: list is not empty\n");
    }
    else
    {
        printf("FAILURE: list is empty\n");
    }
    printf("Using printQueue to verify queue contents\n");
    printQueue(head);
    getchar();

    printf("Iteration [2]\nTesting with list after two dequeues, expecting !isEmpty\n");
    dequeue(&head, &tail);
    dequeue(&head, &tail);
    if(!isEmpty(head))
    {
        printf("SUCCESS: list is not empty\n");
    }
    else
    {
        printf("FAILURE: list is empty\n");
    }
    printf("Using printQueue to verify queue contents\n");
    printQueue(head);
    getchar();

    printf("Iteration [3]\nTesting with empty list, expecting isEmpty\n");
    if(isEmpty(check))
    {
        printf("SUCCESS: list is empty\n");
    }
    else
    {
        printf("FAILURE: list is not empty\n");
    }
    printf("Using printQueue to verify queue contents\n");
    printQueue(head);
    getchar();

    printf("Testing [printQueue] function\nprintQueue was used through the verification process already...\n\n");

    printf("Testing [ascentSortID] function\nIteration [1]\n");      //iteration for 1st time for data hard codded by me
    sortID(&head, &tail);    //calling function that is defined in other file     (TO SORT THE DATA)
    printQueue(head);       //calling function that is defined in other file      (TO PRINT THE DATA)
    getchar();
    printf("Testing [reverseQueue] function\nIteration [1]\n");
    reverse(&head, &tail);
    printQueue(head);
    getchar();
    printf("Testing [ascentSortUsername] function\nIteration [1]\n");
    sortUsername(&head, &tail);
    printQueue(head);
    getchar();

    printf("Iteration [2] for [ascentSortID] function\n");          //iteration for 2nd time for data hard codded by me
    sortID(&head, &tail);   //calling function that is defined in other file
    printQueue(head);
    getchar();
    printf("Iteration [2] for [ascentSortUsername] function\n");
    sortUsername(&head, &tail);
    printQueue(head);
    getchar();
    printf("Iteration [2] for [reverseQueue] function\n");
    reverse(&head, &tail);
    printQueue(head);
    getchar();


    printf("Iteration [3] for [ascentSortID] function\n");       //iteration for 3rd data entered by haRD CODING
    sortID(&head, &tail);   //calling function
    printQueue(head);
    getchar();                                //press enter to countinue
    printf("Iteration [3] for [reverseQueue] function\n");
    reverse(&head, &tail);  //calling function
    printQueue(head);
    getchar();                                //press enter to continue
    printf("Iteration [3] for [ascentSortUsername] function\n");
    sortUsername(&head, &tail);  //calling function
    printQueue(head);    //calling function
    getchar();

    printf("Completed program testing\n");

    while(head != NULL){               //freeing to avoid memory leak
	  tweet* freee=head;
	  head = head->next;
	  free(freee);
    }
    return 0;
}
