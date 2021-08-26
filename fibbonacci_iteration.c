#include <stdio.h>


int fibbonacci_iteration(int n) {

  	int f[n+2];   
  	int i;

 	f[0] = 0;
	f[1] = 1;
 
  	for (i = 2; i <= n; i++){
      	f[i] = f[i-1] + f[i-2];
  	}
 
	return f[n];
}

int main() {
  	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("Fibbonacci of position %d is %d : " , n, fibbonacci_iteration(n));

	return 0;
}
