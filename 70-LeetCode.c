int arr[46] = {1, 1};

int climbStairs(int n){
    for(int i = 2; i <= n; i++){
        arr[i] = arr[i - 1] +arr[i - 2];
    }
    return arr[n];
}
