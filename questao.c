#include <stdio.h>
#include <stdlib.h>

int main () {
    int matriz[][4] = {{45,32,83,95}, {26,14,37,42}, {40,43,65,77}, {74,79,48,55}};
    int i, aux, n;

    for (n = 0; n < 4; n++) {
        for (i = 0; i < 4; i++) {
            if (matriz[i] > matriz[i + 1]) {
					aux = matriz[i][i];
					matriz[i][i] = matriz[i + 1];
					matriz[i + 1] = aux;
				}
        }
    }

    for (n = 0; n < 4; n++){
        printf ("%d/t", matriz[i][i]);
    }
}