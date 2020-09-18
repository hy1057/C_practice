#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char sss[100];
    scanf("%s",&sss);//继续输入数字。
    int len;
    //check if success
    char stdData[] = "0,1,2,3,2,1,0";
    if(!strcmp(stdData,sss)) {
        printf("success\n");
    }
    
    len = strlen(sss);
    for(int i=0;i<len;i+=2) {
        if(isupper(sss[i])) {
            printf("zhuang gan\n");
            break;
        } else if('-' == sss[i]) {
            printf("chu jie\n");
            break;
        } else if(isdigit(sss[i])) {
            if(stdData[i] != sss[i]) {
               printf("bad path\n");
                break;
            }
        }
    }
    
    return 0;
}
