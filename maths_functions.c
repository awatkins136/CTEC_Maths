#include <stdio.h>

int main()
{
	int i, j, k, l;
	printf("Type two integer values:\n");
	scanf("%i", &j);
	scanf("%i", &k);
	printf("Choose 1 function from add (1), subtract (2), multiply(3) or divide (4):\n");
	scanf("%i", &l);
	switch (l) {
	case 1:
		i=j+k;
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
	default:
		printf("Exiting switch statement\n");
		break;
	}
	return 0;
}
