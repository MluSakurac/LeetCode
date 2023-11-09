int min(int a, int b){
    return a < b ? a : b;
}

char* longestCommonPrefix(char** strs, int strsSize) {
    char *ans = (char*)malloc(sizeof(char) * 201);
    strcpy(ans, strs[0]);
    for(int i = 1; i < strsSize; i++){
        for(int j = min((int)strlen(strs[i]), (int)(strlen(ans))); j >= 0; j--){
            if(strs[i][j] != ans[j]) ans[j] = '\0';
        }
    }
    return ans;
}
