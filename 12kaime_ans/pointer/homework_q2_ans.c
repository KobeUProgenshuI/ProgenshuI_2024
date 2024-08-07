//homework_q2.c
#include <stdio.h>

//全生徒の成績の合計を計算する関数
int calc_total_score(int scores[], int n){
    int i;
    int total = 0;
    // すべての生徒の得点をループで加算
    // 配列の各要素は、scores[i]を使ってアクセス
    for(i = 0; i < n; i++) {
        total=total+scores[i]; // 各生徒の成績を合計する
    }
    return total;
}

//全生徒の成績の平均を計算する関数
double calc_avg_score(int scores[], int n){
   double average;
   int total = 0;
    for(int i=0;i<n;i++){
        total=total+scores[i];
    }
    average=(double) total/n;

    return average;// 成績の合計を生徒の数で割る
                              
}

int main(void){
    int scores[] = {80, 85, 78, 90, 88, 76, 93, 87, 74, 91};
    int n = sizeof(scores) / sizeof(scores[0]);

    // calc_total_score関数を使って全生徒の成績の合計を計算し、表示します
    printf("Total Score: %d\n", calc_total_score(scores, n));
    // calc_avg_score関数を使って全生徒の成績の平均を計算し、表示します
    printf("Average Score: %lf\n", calc_avg_score(scores, n)); // 平均成績を出力

    return 0;
}
