#include <stdio.h>

int main()
{
	char c;
	int i, j, k;
	printf("Type two integer values:\n");
	scanf("%i", &j);
	scanf("%i", &k);
	printf("Choose a function from add (a), subtract (s), multiply(m) or divide (d)\n");
	scanf("%c", &c);
	switch (c) {
	case 'a':
		i=j+k;
		printf("%i\n", i);
		break;
	case 's':
		printf("%i\n", i);
		break;
	case 'm':
		printf("%i\n", i);
		break;
	case 'd':
		printf("%i\n", i);
		break;
	default:
		break;
	}
	return 0;
}
