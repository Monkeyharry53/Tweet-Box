Student Name: Manjot Singh
Username: msingh48@uoguelph.ca
Student ID: 1141657
Course: CIS*2500



1)Compilation of this program is through makefile.
 'make' will compile the make file and './a4' will run the makefile.

2) functions work
testA4.c (contains main): The main function contains tweets entry ; 5 from user and 3 hard coded entries and it shows results after the implimentation of functions defined in queueFunction.c and miscFunctions.c 

header: Header file is almost similar as a3 Header file.

helper.c - It contains createTweet; This function creates a tweet with the user's input and then adds it to the linked list

queueFunctions.c: This contains functions that are used for creating queue, deleating it and printing it.

miscFunctions.c - this contains functions that are used for sorting id and username. I used Bubble Sorting.

-> Important functions used for this project

createTweet: This function creates a tweet with the user's input and then adds it to the linked list

displayTweets: The tweets are displayed that can be enter by a csv file or by the user.

searchTweetsByKeyword: This function searches through the tweets when user enters a keyword and prints all the tweets containing that word(ignore cases;Lower or upper).

countStopWords: This function counts the total number of stop words(stop words are given in the pdf).

deleteTweet: This function deletes a tweet from linked list

saveTweetsToFile: This function saves the tweets to a file in csv format

loadTweetsFromFile: This function loads the tweets from a file and saves them to the linked list.

addNodeToList(Helper): This function acts as a helper function and adds node to linked list.




3) According to my testing the code runs fine and give output as wanted but if there is some error I would check it by testing again.

4) As per my testing there are no warnings and no error(code is executable)

5) I have tested my code using valgrind are there are no memory leaks and no errors. If you find one I will be happy to know.