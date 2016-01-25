#include <stdio.h>

int main(int argc, char *argv[])
{
	char c;
	printf("Choose a function from add (a), subtract (s), multiply(m) or divide (d)\n");
	scanf("%c", &c);
	switch (c) {
	case a:
		printf("%i\n", argv[1] + argv[2]);
		break;
	case s:
		printf("%i\n", argv[1] - argv[2]);
		break;
	case m:
		printf("%i\n", argv[1] * argv[2]);
		break;
		
}
