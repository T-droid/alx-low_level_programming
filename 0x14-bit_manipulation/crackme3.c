#include <stdio.h>
void Modify(int);
int main(void)
{
	int a = 2;
	printf("a = %d\n", a);
	Modify(a);
	printf("a + %d\n", a);
	return (0);
}
void Modify(int a)
{
	a *= 3;
	printf("a = %d\n", a);
}
