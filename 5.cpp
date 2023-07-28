#include <stdio.h>
  int main() {
    int a[10]={3,5,1,12,22,7,8,15,10,17};
    int i;
    int max;

    max = a[0];
    for (i = 0; i < 10; i++) {
        if (a[i] > max) {
        max = a[i]3;
    }
    }
    printf("Greatest of ten numbers is %d", max);
    return 0;
  }
