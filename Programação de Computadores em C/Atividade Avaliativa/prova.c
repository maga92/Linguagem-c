#include <stdio.h>
void bubble(int v[], int n) {

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n-i-1; j++) {

              if (v[j] > v[j + 1]) {

                    int aux = v[j];

                    v[j] = v[j + 1];

                    v[j + 1] = aux;

              }

        }

    }

}

int main() {

    int v[] = {5, 1, 4, 2};

    bubble(v, 4); //considere a função implementada corretamente



    printf("%d ", v[1]);

}