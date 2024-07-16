//renshu11_1_3.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int r[20];
	int i;
	for(i=0;i<3;i++){
		r[i]=rand()%10;
		printf("%d \n", r[i]); //確認用
	}

	return 0;
}
