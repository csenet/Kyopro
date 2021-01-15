#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NN 1000 // 生成数
#define M (RAND_MAX + 1.0)
#define N 11   // 近傍の大きさ
#define A 10   // a
#define B 3    // b
#define R 0.05 // ノイズの最大振幅比（1/20程度）
#define PI 3.14159265358979323846

int main(int argc, char *argv[])
{
    FILE *fp1;
    int i, j, h;
    double s[NN], n[NN], o[NN], p[NN];
    double t, f;

    // Usage
    if (argc != 2)
    {
        printf("Usage: ./a.out filename\n");
        exit(1);
    }

    // File Open
    if ((fp1 = fopen(argv[1], "w")) == NULL)
    {
        printf("Error: Unable to open file\n");
    }

    // 信号・ノイズ生成
    f = 5; // 周波数[Hz]
    for (i = 0; i < NN; i++)
    {
        t = (double)i / NN;
        s[i] = A * exp(-B * t) * sin(f * 2 * PI * t);
        n[i] = rand() / M * A * R;
        o[i] = s[i] + n[i];
    }

    // ノイズ除去
    h = NN - 1 / 2;
    for (i = 0; i < NN; i++)
    {
        double sum = 0;
        for (j = -h; j < h; j++)
        {
            sum += o[i + j];
        }
        p[i] = sum / N;
    }

    // 結果出力
    for (i = 0; i < NN; i++)
    {
        t = (double)i / NN;
        fprintf(fp1, "%lf %lf %lf %lf %lf\n", t, s[i], n[i], o[i], p[i]);
    }
    fclose(fp1);

    return 0;
}
