#include <stdio.h>

int len(char c[]){
    int i = 0;
    
    // 入力された文字列を，文字列の最後になるまで1つずつ見ていく
    while(c[i] != '\0'){
        i++;
    }
    
    return i;
}

int main(void){
	char c[]="abc";
	printf("%d\n", len(c));// 3と表示されるようにしたい．
    return 0;
}
