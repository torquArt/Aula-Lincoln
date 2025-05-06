#include <stdio.h>

int main() {
	int x;
	int a = 15,b = 10,c = 12,d = 10;
	x = a;
	x = x<<4;
	x = x|b;
	x = x<<4;
	x = x|c;
	x = x<<4;
	x = x|d;
	
	printf("X = %x \n", x);

	d = x & 15;
	x = x>>4;
	c = x & 15;
	x = x>>4;
	b = x & 15;
	x = x>>4;
	a = x;
	
	printf("a = %x , b = %x, c = %x, d = %x \n",a,b,c,d);
	return 0;
}