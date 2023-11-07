
int isVowelChar(char c){
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': return 1;
        default : return 0;
    }
    return 0;
}

int isVowelString(char *s){
    return (isVowelChar(s[0]) && isVowelChar(s[strlen(s) - 1]));
}

int vowelStrings(char** words, int wordsSize, int left, int right) {
    int ans = 0;
    for(int i = left; i <= right; i++){
        char *temp = words[i];
        if(isVowelString(temp)) ans += 1;
    }
    return ans;
}
