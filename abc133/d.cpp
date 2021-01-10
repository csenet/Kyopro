#include<bits/stdc++.h>
using namespace std;
  int n;
void vec_diff(float a[n], float b[n]){
    /* Calcurate the difference of two vectors. Be caution that b[n] changes.*/
    for (int i = 0; i < n; i++){
        b[i] -= a[i];
    }
}

int main(){
  cin >> n;
    float m[n][2];    // The matrix
    for(int i=0;i<n;i++){
      m[i][0]=1;
      m[i][1]=1;
    }
    float b[n];
    for(int i=0;i<n;i++){
      cin >> b[n]*2;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%1.f ", m[i][j]);
            if (j == n-1){
                printf("\n");
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            float coef = m[j][i] / m[i][i];
            float del[n];

            for (int k = 0; k < n; k++){
                del[k] = m[i][k] * coef;
            }
            vec_diff(del, m[j]);
            b[j] -= b[i] * coef;
        }
    }

    for (int i = n -1; i >= 0; i--){
        float x = 1. / m[i][i];
        m[i][i] *= x;
        b[i] *= x;

        for (int j = 0; j < i; j++){
            b[j] -= b[i]*m[j][i];
            m[j][i] = 0;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%1.f ", m[i][j]);
            if (j == n - 1){
                printf("\n");
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%f ", b[i]);
    }

    return 0;
}
