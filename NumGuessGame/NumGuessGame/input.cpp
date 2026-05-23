#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int GetRandom(int min, int max)
{
	int t = (int)time(nullptr);

	int randomNuber = t % 10;

	return randomNuber;
}

int AddNumber()
{
	int addNumber;

	printf("‚O`‚X‚Ì’†‚Å‚¨D‚İ‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	scanf_s("%d", &addNumber);

	return addNumber;
}