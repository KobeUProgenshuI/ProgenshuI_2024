// renshu11_2_1.c
#include <stdio.h>
#include <string.h>

typedef struct{
    int test; //試験の得点
    int report; //レポートの得点
    int attend[3]; //出席の有無（出席ならば1，欠席ならば0）
    int bonus; //ボーナス得点の追加
}seiseki;

int main(void){
    double attend_score; //出席点（attendの平均をとり，満点が100点となるように調整）
    seiseki prog1;
    
    prog1.test = 80; 
    prog1.report = 69;
    prog1.attend[0] = 1; //出席ならば1
    prog1.attend[1] = 0; //欠席ならば0
    prog1.attend[2] = 1;
    prog1.bonus = 0;
    attend_score = (double)100*(prog1.attend[0]+prog1.attend[1]+prog1.attend[2])/3; 
    printf("プログラミング演習Iの成績：\n");
    printf("総合得点は%f点です．", (prog1.test+prog1.report+attend_score)/3);

    seiseki prog1_rev;
    prog1_rev = prog1;
    prog1.report = 6;
    prog1_rev.bonus = 10;
    printf("最終得点は%fです．", (prog1_rev.test+prog1_rev.report+attend_score)/3+prog1_rev.bonus);

    return 0;
}
    