#include <stdio.h>
int main (int argc, char **argv){
	int i,maior,indiceMaior, x[100];
	for (i = 0 ; i < 100 ; i++){
		scanf("%d",&x[i]);
	}
    indiceMaior=0;
    maior=x[0];
	for (i = 1 ; i < 100 ; i++){
		if(x[i]>maior){
			indiceMaior=i;
			maior=x[i];
		}
	}
	printf("O maior elemento é %d e está no índice %d\n",maior,indiceMaior);
	return 0;
}