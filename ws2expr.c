#include <stdio.h>
#include <stdlib.h>
int expr(a,b,c,d){
	int x1 = ((3*a)/(5+(1/6)));
	int x2 = (3*a)+(5*b)/(2+c);
	int x3 = (2/7)*((4**(3+c))-(5*d));
	int x4 = ((2+(8*b))/a)**(1/2);
	int x5 = ((b**2)-(4*d))**(1/3);
}
int main() {
	int a,b,c,d,wht,x1,x2,x3,x4,x5;
//pick 4.1 or 4.2 or 4.3 kub jarn
	scanf("%d",&wht);
	if(wht==4.1){
		expr(1,1,5,1);
	}
	if(wht==4.2){
		expr(9,2,0,1);
	}
	if(wht==4.3){
		expr(0,3,3,3);
	}
	
	
	return 0;
}
