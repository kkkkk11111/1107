#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc, char*argv[]){

	printf("hello");
	sleep(atoi(argv[1]));
	printf("bye");
	return 0;
}
