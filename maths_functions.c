#include <stdio.h>

int main()
{
	int x;
	int y;
	printf("Additions\n");
	scanf("%i %i", &x,&y);
	printf( "%i + %i = %i \n", x, y, x+y);
	//scanf("%i %i", &x,&y);
	printf("Substraction\n");
        scanf("%i %i", &x,&y);
        printf( "%i - %i = %i \n", x, y, x-y);
	printf("Multiplication\n");
        scanf("%i %i", &x,&y);
        printf( "%i * %i = %i \n", x, y, x*y);
	printf("Division\n");
        scanf("%i %i", &x,&y);
        printf( "%i / %i = %i \n", x, y, x/y);

	return 0;

}
