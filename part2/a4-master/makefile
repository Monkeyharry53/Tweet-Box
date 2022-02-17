CC=gcc
CFLAGS=-Wall -std=c99

a4 : queueFunctions.o testA4.o helper.o miscFunctions.o
	$(CC) queueFunctions.o testA4.o helper.o miscFunctions.o -o a4
queueFunctions.o : queueFunctions.c
	$(CC) $(CFLAGS) -c queueFunctions.c
testA4.o : testA4.c
	$(CC) $(CFLAGS) -c testA4.c
helper.o : helper.c
	$(CC) $(CFLAGS) -c helper.c
miscFunctions.o : miscFunctions.c
	$(CC) $(CFLAGS) -c miscFunctions.c
clean :
	rm *.o a4
