#include <stdio.h>

double sqrt(int a){
	
	int count = 0;
	double x = 2;
	while(1){
		if( count++ == 30)
			break;
			
		x = (x + (a / x)) /2;
	}
	return x;
}

int main() {
	
	printf("%.10f", sqrt(6));
}
