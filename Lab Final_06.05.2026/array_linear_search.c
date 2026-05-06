#include <stdio.h>

int main(){
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = 8;
    int search = 55;

    int found = 0;

    for (int i=0; i<n; i++) {
        if (arr[i] == search) {
            printf("Value is found :%d",i);
        }
    }
    return 0;
}