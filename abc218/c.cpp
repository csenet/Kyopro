#include <iostream>
#include <string>
using namespace std;

bool array_equal(const int* array1, size_t size1, const int* array2, size_t size2);

int main(void) {
    int n;
    cin >> n;
    int S[n][n];
    int T[n][n];
    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < n; j++) {
            S[i][j] = (line.at(j) == '#') ? 1 : 0;
        }
    }
    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < n; j++) {
            T[i][j] = (line.at(j) == '#') ? 1 : 0;
        }
    }


    /* 座標を移動させる
     * 上下左右に±Nづつ
     */

    for (int x = -n; x < n; x++) {
        for (int y = -n; y < n; y++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    int temp[n][n];
                    if (S[i + x][i + y] != NULL) {
                        temp[i][j] = S[i + x][i + y];
                    } else {
                        temp[i][j] = 0;
                    }
                    // 移動されたデータ
                    if (memcmp(temp, T, sizeof(temp)) == 0) {
                        cout << "Yes" << endl;
                        return 0;
                    }

                    // 90
                    int temp90[n][n];
                    for (int l = 0; l < n; l++) {
                        for (int m = 0; m < n; m++) {
                            temp90[l][m] = temp[n - 1 - m][l];
                        }
                    }
                    if (memcmp(temp90, T, sizeof(temp)) == 0) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                    // 180
                    int temp180[n][n];
                    for (int l = 0; l < n; l++) {
                        for (int m = 0; m < n; m++) {
                            temp180[l][m] = temp[n - 1 - l][n - 1 - m];
                        }
                    }
                    if (memcmp(temp180, T, sizeof(temp)) == 0) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                    // 270
                    int temp270[n][n];
                    for (int l = 0; l < n; l++) {
                        for (int m = 0; m < n; m++) {
                            temp270[l][m] = temp[m][n - 1 - l];
                        }
                    }
                    if (memcmp(temp270, T, sizeof(temp)) == 0) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }


    /* 右回転を4回する */


    cout << "No" << endl;

    return 0;
}


bool array_equal(const int* array1, size_t size1, const int* array2, size_t size2) {
    assert(array1 != NULL);
    assert(array2 != NULL);
    assert(size1 != 0);
    assert(size2 != 0);

    // 要素数が違うなら、絶対に一致しない
    if (size1 != size2) {
        return false;
    }

    return memcmp(array1, array2, size1 * sizeof(int)) == 0;
}