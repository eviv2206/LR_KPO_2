#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int n = 6;
    int a[n][n];
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = rand() % 15 + 2;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!(a[i][j] == 0 || a[i][j] == 1)) {
                int counter = 0;
                for (int k = 0; k < n; k++) {
                    for (int l = 0; l < n; l++) {
                        if (!(a[k][l] == 0 || a[k][l] == 1) && a[i][j] == a[k][l]) {
                            counter++;
                            if (counter > 1) {
                                a[k][l] = 1;
                            }
                        }
                    }
                }
                if (counter > 1) {
                    a[i][j] = 1;
                } else if (counter == 1) {
                    a[i][j] = 0;
                }
            }
        }
    }

    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;

}
