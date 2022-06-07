#include <stdio.h>
#include <math.h>

int eh_quadrado_perfeito(int num){
	for (int i = 0; pow(i, 2.0) <= num; i++ ){
		double square = pow(i, 2.0);
		if(square == num) {
			return 1;
		}
	}
	return 0;
}

int main(){
	printf("%d", eh_quadrado_perfeito(4));
	return 0;
}
