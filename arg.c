#include<stdio.h>
int main(int argc, char* argv[])
{
	int i;
	printf("argu count: %d\n", argc);
	for(i = 0; i<argc;i++)
		printf("%d  %s\n",i,argv[i]);
	return 0;
}
