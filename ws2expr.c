#include <stdio.h>
#include <math.h>

void expr(double a, double b, double c, double d) {
	double x1, x2, x3, x4, x5;
	x1 = (3.0 * a) / 5.0 + 1.0 / b;
	x2 = (3.0 * a + 5.0 * b) / (2.0 + c);
    x3 = (2.0 / 7.0) * (pow(4.0, 3.0 + c) - 5.0 * d);
    x4 = sqrt((2.0 + 8.0 * b) / a);
    x5 = cbrt(b * b - 4.0 * d);

    printf("A = %.1f\n", x1);
    printf("B = %.1f\n", x2);
    printf("C = %.1f\n", x3);
	printf("D = %.1f\n", x4);
    printf("E = %.1f\n", x5);
}

int main(void) {
    int choose;
    //choose 4.1/4.2/4.3 kub jarn
    scanf("%d", &choose);
    
    if (choose == 1){
    	expr(1, 1, 5, 1);
	} 
    else if (choose == 2){
    	expr(9, 2, 0, 1);	
	}
    else if (choose == 3){
    	expr(0, 3, 3, 3);
	}
    return 0;
}

