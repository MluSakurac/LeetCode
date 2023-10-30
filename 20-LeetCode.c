/*************************************************************************
	> File Name: 20-LeetCode.c
	> Author: Sakura M Lu 
	> Mail: 
	> Created Time: Mon 30 Oct 2023 11:03:18 AM CST
 ************************************************************************/

#include<stdio.h>

char stack[10001];

bool isValid(char *s){
    int top = 0;
    for(int i = 0; s[i]; i++){
        if(s[i] == '[' || s[i] == '{' || s[i] == '(') {
            stack[top++] = s[i];
        } else {
            switch(s[i]){
                case ')':
                    if(top == 0 || stack[top - 1] != '(') return false;
                    top -= 1; break;
                case ']':
                    if(top == 0 || stack[top - 1] != '[') return false;
                    top -= 1; break;
                case '}':
                    if(top == 0 || stack[top - 1] != '{') return false;
                    top -= 1; break;
            }
        }
    }
    if(top == 0) return true;
    return false;
}
