/*
 ============================================================================
 Name        : class07.c
 Author      : ThousandAI
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int fibonacci(int num){
	if(num == 1 || num == 2) return 1;
	int ans = fibonacci(num-1) + fibonacci(num-2);
	return ans;
}


int main(void) {
	printf("%d", fibonacci(6));
}
