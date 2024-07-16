//kadai11_2_ans.c
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int source;
    int destination;
} Edge;

int main() {
    int N = 0; //ノード（頂点）の数
    double p; //ノード間にエッジ（辺）を引く確率
    double randomValue; //乱数
    int max_nodes = 50; //ノード（頂点）の最大数
    int num_edge = 0; // エッジ（辺）の数
    Edge edges[max_nodes * (max_nodes - 1) / 2];

    printf("頂点数: ");
    scanf("%d", &N);
    
    printf("辺を引く確率: ");
    scanf("%lf", &p);

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            randomValue = (double)rand() / RAND_MAX; //このようにすると0から1の乱数が生成される

            if (randomValue < p) {
                edges[num_edge].source = i;
                edges[num_edge].destination = j;
                num_edge++;
            }
      }
    }

    FILE* file = fopen("kadai11_2.txt", "w");
    if (file != NULL) {
    for (int i = 0; i < num_edge; i++) {
        printf("%d %d\n", edges[i].source, edges[i].destination);
        fprintf(file, "%d %d\n", edges[i].source, edges[i].destination);
    }
    fclose(file);
    }
    return 0;
}