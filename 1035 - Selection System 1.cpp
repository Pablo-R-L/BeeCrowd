#include<stdio.h>
int main(){
	int a, b, c, d;
	
	printf("Insira 4 valores: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if (b > c && d > a && c+d > a+b && c > 0 && d > 0 && a%2 == 0) {
		printf("Valores aceitos meu bom"); //2 4 3 5
	} else {
		printf(".......");
	}
	

	
}
