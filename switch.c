/**
 * 将文本中不区分左右的双引号，替换为对应的左右双引号。
 * 由于环境配置的中文字符双引号字体左右双引号也不明显，故用中括号代替
 */
#include <stdio.h>
#include <string.h>
int main() {
    int c,q=0;
    while((c=getchar())!=EOF){
        if(c=='"') printf("%s", (q=!q)?"[":"]");
        else printf("%c",c);
    }
    return 0;
}