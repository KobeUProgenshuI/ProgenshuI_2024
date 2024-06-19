//array3.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    //array3.c
    int r[10];
    int i;
    int q[5];
    int j = 0;
    for(i=0;i<10;i++){
        r[i]=rand()%100;
        if (i % 2 == 0) {
            q[j] = r[i];
            j++;
        } 
    }

    //内容を確認する場合は
    for(j=0;j<5;j++){
        printf("r[%d] = %d, q[%d] = %d\n", 2 * j, r[2 * j], j, q[j]);
    }

	return 0;
}
