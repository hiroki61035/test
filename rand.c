#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetRandom(int min,int max);

int main(void)
{
	int i;

	srand((unsigned int)time(NULL));
	
	for (i = 0;i < 100;i++) {
		printf("%d\n",GetRandom(1,5));
	}
		
	return 0;
}

int GetRandom(int min,int max)
{
	return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}
