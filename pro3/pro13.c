// pro13.c 濃淡画像のノイズ除去
#include <stdio.h>
#include <stdlib.h>
#define NN 1000 //生成数
#define M (RAND_MAX + 1.0)
#define N 3    //マスクの大きさ
#define X 256  //画像横サイズ
#define Y 256  //画像縦サイズ
#define H 1078 //ヘッダサイズ
#define G 256  //階調数

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2, *fp3, *fp4;
    int i, j, k, l, h;
    unsigned char s[X][Y], n[X][Y], o[X][Y], p[X][Y], head[H], x, y;

    // Usage
    if (argc != 2)
    {
        printf("Usage: ./a.out filename\n");
        exit(1);
    }

    // File Open
    if ((fp1 = fopen(argv[1], "r")) == NULL ||
        (fp2 = fopen("1.bmp", "w")) == NULL ||
        (fp3 = fopen("2.bmp", "w")) == NULL ||
        (fp4 = fopen("3.bmp", "w")) == NULL)
    {
        printf("Error: Unable to open file\n");
        exit(1);
    }

    // ファイル読み込み
    fread(head, H, 1, fp1);
    fread(s, X, Y, fp1);
    fclose(fp1);

    // ノイズ生成
    for (i = 0; i < X; i++)
    {
        for (j = 0; j < Y; j++)
        {
            n[i][j] = 0;
        }
    }
    for (i = 0; i < NN; i++)
    {
        x = rand() / M * X;
        y = rand() / M * Y;
        n[x][y] = rand() / M * G;
    }
    fwrite(head, 1, H, fp2);
    fwrite(n, 1, X * Y, fp2);
    fclose(fp2);
    for (i = 0; i < X; i++)
    {
        for (j = 0; j < Y; j++)
        {
            o[i][j] = s[i][j] + n[i][j];
        }
    }
    fwrite(head, 1, H, fp3);
    fwrite(o, 1, X * Y, fp3);
    fclose(fp3);

    // ノイズ除去

    for (i = 0; i < X; i++)
    {
        for (j = 0; j < Y; j++)
        {
            double sum = o[i - 1][j] + o[i + 1][j] + o[i][j - 1] + o[i][j + 1] + o[i][j];
            p[i][j] = sum / 5;
        }
    }

    // 結果出力
    fwrite(head, 1, H, fp4);
    fwrite(p, 1, X * Y, fp4);
    fclose(fp4);

    return 0;
}
