#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,max=-99,c,i,song;
	for(i=0;i<4;i++){
		scanf("%d",&a);
		(a>max)?(song = max,max = a):((a>song)?(song = a):(song = song));
		}
	printf("%d",song);
	return 0;
}
