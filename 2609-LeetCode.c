int min(int a, int b){
    return a < b ? a : b;
}

int findTheLongestBalancedSubstring(char * s){
    if(*s == '\0') return 0;
    char *idex = s;
    int ans = 0;
    while(*idex){
        int a = 0, b = 0;
        while(*idex == '0') idex += 1, a += 1;
        while(*idex == '1') idex += 1, b += 1;
        if(ans < min(a, b) * 2) ans = 2 * min(a, b);
    }
    return ans;
}
