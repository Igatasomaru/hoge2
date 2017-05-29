#include <stdio.h>

void main(){
	printf("hello world");
	getchar();
	int s,n;
	for (s=0;s<10;s++) {
		printf("%d\n",s);
		n=s%3;
		if (n==0) {
			printf("Multiples of 3");
		}
	}
}