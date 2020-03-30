#include<stdio.h>
int main(void)
{
	int a, b, c, d, e;
	int min_h, min_d;

	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

	min_h = (a < b) ? a : b;
	min_h = (min_h < c) ? min_h : c;

	min_d = (d < e) ? d : e;

	printf("%d", (min_h + min_d) - 50);
	return 0; 
}