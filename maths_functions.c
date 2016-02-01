//This is the line causing issue in the conflict branch
#include <stdio.h>

int functions();
int maxmin();

int main()
{
	int i, j, k, l;
	printf("Choose a program from simple functions (1) or 
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

int functions()
{
	
}

int maxmin()
{
	
}
