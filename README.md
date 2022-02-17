# Tweet-Box
This Project is divided into two parts

1) Part1 contains the basic functions that can be performed to create a tweet box.Which are described below

  Main: The main function contains the menu of the program and calls the function according to the choice that user makes and to quit enter 8.

  header: Header file is given in the A3 pdf

  createTweet: This function creates a tweet with the user's input and then adds it to the linked list

  displayTweets: The tweets are displayed that can be enter by a csv file or by the user.

  searchTweetsByKeyword: This function searches through the tweets when user enters a keyword and prints all the tweets containing that word(ignore cases;Lower or upper).

  countStopWords: This function counts the total number of stop words(stop words are given in the pdf).

  deleteTweet: This function deletes a tweet from linked list

  saveTweetsToFile: This function saves the tweets to a file in csv format

  loadTweetsFromFile: This function loads the tweets from a file and saves them to the linked list.

  addNodeToList(Helper): This function acts as a helper function and adds node to linked list.

2)Part 2 contains Sorting and queue functions.

  testA4.c (contains main): The main function contains tweets entry ; 5 from user and 3 hard coded entries and it shows results after the implimentation of functions defined in queueFunction.c and miscFunctions.c 

  header: Header file is almost similar as a3 Header file.

  helper.c - It contains createTweet; This function creates a tweet with the user's input and then adds it to the linked list

  queueFunctions.c: This contains functions that are used for creating queue, deleating it and printing it.

  miscFunctions.c - this contains functions that are used for sorting id and username. I used Bubble Sorting.
