//This is the line causing issue in the conflict branch
#include <stdio.h>

int functions();
int maxmin();

int main()
{
	int i;
	printf("Choose a program from simple functions (1) or max and min (2)\n");
	scanf("%i", &i);
	switch (i) {
	case 1:
		functions();
		break;
	case 2:
		maxmin();
		break;
	default:
		break;
	}
	return 0;
}

int functions()
{
	int i, j, k, l;
	printf("Type two integer values:\n");
	scanf("%i", &j);
	scanf("%i", &k);
	printf("Choose a function from add (1), subtract (2), multiply(3), divide (4) or remainder (5):\n");
	scanf("%i", &l);
	switch (l) {
	case 1:
		i=k+j;
		printf("%i\n", i);
		break;
	case 2:
		i=j-k;
		printf("%i\n", i);
		break;
	case 3:
		i=j*k;
		printf("%i\n", i);
		break;
	case 4:
		i=j/k;
		printf("%i\n", i);
		break;
	case 5:
		i=j%k;
		printf("%i\n", i);
		break;
	default:
		printf("Exiting switch statement\n");
		break;
	}
	return 0;
}

int maxmin()
{
	int num, max, min;
	printf("Type 5 integer values:\n");
	scanf("%i", &num);
	max = min = num;
	
	for (int i = 0;i<4;i++)
	{
		scanf("%i", &num);
		if (max < num)
			max = num;
		else if (min > num)
			min = num;
	}
	printf("The max integer is %i and the minimum is %i\n", max, min);
}
