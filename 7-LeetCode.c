#include<inttypes.h>
int getLenth(int x){
    int lenth = 0;
    if(x == 0) lenth = 1;
    while(x) lenth += 1, x /= 10;
    return lenth;
}


int reverse(int x){
    int ans = INT32_MAX;
    int sum = 0, a = x, len = getLenth(x);
    int *arr = (int*)calloc(len + 1, sizeof(int));
    int *max = (int*)malloc(sizeof(int) * 11);
    for(int i = 10; i >= 1; i--) max[i] = ans % 10, ans /= 10;
    for(int i = 1; a; i++) arr[i] = a % 10, a /= 10;
    for(int i = len, j = 0; i > 0; i--, j++) sum += arr[i] * pow(10, j);
    if(len == 10){
        for(int i = 1; i <= len; i++){
        if(abs(arr[i]) == max[i]) continue;
        if(abs(arr[i]) < max[i]) return sum;
        else return 0;
        }
    }
    return sum;
}
