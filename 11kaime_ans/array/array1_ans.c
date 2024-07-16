//array1_ans.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int y[44100]; //y の値を入れておくための配列を定義．大きさは44100とすること．
    int i;
    int ny;
    
    for(i=0;i<100;i++){
        y[i] = rand()%200;//最初の 100 個は乱数で決める．
    }
    
    for(i=100;i<44100;i++){//1秒間分のギターの音のデータを作成する．
        y[i] = (y[i-100]+y[i-99])/2;
    }
    
    for(i=0;i<44100;i++){
        printf("%d\n", y[i]);
    }
    
    return 0;
}
