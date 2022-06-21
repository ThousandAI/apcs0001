/*
 ============================================================================
 Name        : class02.c
 Author      : Thousand AI
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setbuf(stdout,NULL);
	int x,y,temp;
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);
	temp = x;
	x = y;
	y = temp;
	printf("x: %d\n",x);
	printf("y: %d",y);

	return 0;

}
