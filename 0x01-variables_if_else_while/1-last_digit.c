#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*moreheadersgoesthere*/

/*bettystyledocforfunctionmaingoesthere*/
/**
 * main - mainfunction
 *
 * Description:NULL
 * Return:0
*/
int main(void)
{
int n;
int lastDigit;
char lastDigitOf[] = "Last digit of";
char wordIs[] = "is";
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*yourcodegoesthere*/
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		char endWord[] = "and is greater than 5";

			printf("%s %d %s %d %s\n", lastDigitOf, n, wordIs, lastDigit, endWord);
	}
	else if (lastDigit == 0)
	{
		char endWord[] = "and is 0";

		printf("%s %d %s %d %s\n", lastDigitOf, n, wordIs, lastDigit, endWord);
	}
	else
	{
		char endWord[] = "and is less than 6 and not 0";

		printf("%s %d %s %d %s\n", lastDigitOf, n, wordIs, lastDigit, endWord);
	}
	return (0);
}
