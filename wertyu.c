/**
 * 将字符转换为键盘上前一位的字符：
 * 输入一个错位后敲出的字符串，输出打字员本来想打出的句子。
 * 样例输入：o s, gomr ypfsu/
 * 样例输出：i am fine today.
 */
#include <stdio.h>
char *s = "`123456788890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
int main()
{
    int i, c;
    while ((c = getchar()) != EOF)
    {
        for (i = 1; s[i] && s[i] != c; i++)
            ;
        if (s[i])
            putchar(s[i - 1]);
        else
            putchar(c);
    }
    return 0;
}
