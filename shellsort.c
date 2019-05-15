#include <stdio.h>

int shellsort(int data[], int n) {
    for(int range = n/2; range > 0; range = range/2) {
        for(int i = range; i<n; i = i + 1) {
            int temp = data[i];
            int location;
            for(location = i; location >= range && data[location - range] > temp; location = location - range) {
                data[location] = data[location - range];
            }
            data[location] = temp;
        }
    }
    return 0;
}

int main() {
    int data[] = {1,9,2,8,3,7,4,6,5};

    shellsort(data, sizeof(data)/sizeof(data[0]));

    for(int i=0; i<9; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}
