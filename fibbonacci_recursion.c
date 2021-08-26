#include <stdio.h>


int fibbonacci_recursion(int n) {
   	if(n == 0){
      	return 0;
   	} else if(n == 1) {
      	return 1;
   	} else {
		return (fibbonacci(n-1) + fibbonacci(n-2));
	}
}

int main() {
  	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("Fibbonacci of position %d is %d : " , n, fibbonacci_recursion(n));

	return 0;
}
