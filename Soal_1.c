#include <stdio.h>

// menukar dua nilai
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// mengurutkan array menggunakan Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        // Elemen terakhir pada setiap iterasi sudah dalam posisi yang benar
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    
    // Input jumlah angka
    scanf("%d", &n);
    
    int nilai[n];
    
    // Sebelum diurutkan
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
    }

    // Bubble Sort
    bubbleSort(nilai, n);

    // sesudah diurutkan
    for (int i = 0; i < n; i++) {
        printf("%d\n", nilai[i]);
    }

    return 0;
}