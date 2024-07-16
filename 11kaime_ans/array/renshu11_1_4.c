//renshu11_1_4.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    // ここから下は renshu11_1_3.c の内容．
    int r[20];
    int i;
    for(i=0;i<3;i++){
		r[i]=rand()%10;
    }
    // ここまで renshu11_1_3.c の内容
    
    for(i=3;i<20;i++){
     	r[i] = (r[i-1]+r[i-2]+r[i-3]) / 3;
    }
    
    printf("%d\n",r[19]); // 番号は 0 から始まるので，r[19] が20番目．
    return 0;
}