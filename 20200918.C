//华为笔试
//倒车入库问题
//输入为车辆经过的区域编号，0~10
//若按照标准路线行驶，输出“success”
//若出现字母，表示撞到杆子，输出“zhuang gan”
//若出现-1，表示超出停车范围，输出“chu jie”
//若不按顺序经过区域，输出“bad path”

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char sss[100];
    scanf("%s",&sss);
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
