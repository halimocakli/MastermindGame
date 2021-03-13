#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE 4

void randomColors(char computerColorChoices[], const unsigned int size)
{
	int randomColor;

	for (int i = 0; i < size; i++)
	{
		randomColor = 1 + rand() % 6;

		switch (randomColor)
		{
		case 1:
			computerColorChoices[i] = 'R';
			break;
		case 2:
			computerColorChoices[i] = 'G';
			break;
		case 3:
			computerColorChoices[i] = 'B';
			break;
		case 4:
			computerColorChoices[i] = 'Y';
			break;
		case 5:
			computerColorChoices[i] = 'P';
			break;
		case 6:
			computerColorChoices[i] = 'O';
			break;
		default:
			break;
		}
	}
}

void userInterface()
{
	printf("");
}

int main()
{
	srand(time(NULL));

	char clientColorChoices[SIZE];
	char computerColorChoices[SIZE];
}