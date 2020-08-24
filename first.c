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