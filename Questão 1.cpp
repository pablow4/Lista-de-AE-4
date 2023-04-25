#include <stdio.h>
#include <stdlib.h>

int main () {
	int x,y;
	int matriz[4][4]={{45,32,83,95}, {26,14,37,42},{40,43,65,77},{74,79,48,55}};
	for(x=0;x<4;x++){
		for(y=0;y<4;y++)
		printf("%4d",matriz[x][y]);
		printf("\n\n");
	};
	float media=(matriz[0][0]+matriz[0][1]+matriz[0][2]+matriz[0][3]+
				matriz[1][0]+matriz[1][1]+matriz[1][2]+matriz[1][3]+
				matriz[2][0]+matriz[2][1]+matriz[2][2]+matriz[2][3]+
				matriz[3][0]+matriz[3][1]+matriz[3][2]+matriz[3][3])/16;
	printf("A media e %2.2f",media);
}
