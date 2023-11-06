int isUnit(char *s1, char *s2){
    for(int i = 0; s1[i]; i++){
        for(int j = 0; s2[j]; j++){
            if(s1[i] != s2[j]) continue;
            return 0;
        }
    }
    return 1;
}

int maxProduct(char ** words, int wordsSize){
    int ans = 0;
    for(int i = 0; i < wordsSize - 1; i++){
        for(int j = i + 1; j < wordsSize; j++){
            int a = (int)strlen(words[i]), b = (int)strlen(words[j]);
            if(ans < a * b && isUnit(words[i], words[j])) ans = a * b;
        }
    }
    return ans;
}
