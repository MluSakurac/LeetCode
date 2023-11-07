bool isPalindrome(int x){
    if(x % 10 == 0 && x != 0 || x < 0) return false;
    if(x < 10) return true;
    int length = 0, s = x;
    while(s) length += 1, s /= 10;
    int l = length;
    int *arr = (int*)calloc(length, sizeof(int));
    int y = x, i = 0, m = 0;
    while(y) arr[--length] = y % 10, y /= 10;
    while(i < l) m += arr[i] * pow(10, i), i++;
    return m == x;
}
