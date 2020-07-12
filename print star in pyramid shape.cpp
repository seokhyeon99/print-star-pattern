#include <stdio.h>
int main(void)
{
	int noOfRows;
	int noOfCol;
	int row;
	int col;
	int line = 0;
	char pattern1 = '*';
	char pattern2 = ' ';
	printf("How many lines you make star?");
	scanf("%d", &noOfRows);
	noOfCol = noOfRows;
	for (row = 1; row <= noOfRows; row++)
	{
		for (col = 1; col <= noOfRows + line; col++)
		{
			if (col <= noOfCol - 1)
				printf("%c", pattern2);
			else
				printf("%c", pattern1);
		}
		line = line + 1;
		printf("\n");
		noOfCol--;
	}
}