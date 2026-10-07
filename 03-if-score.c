// if文で、60点以上なら10点、それ以外は0点を求める
#include <stdio.h>

int main(void)
{
    int score = 75;
    int point;

    printf("%s\n",(score>=60)?"合格":"不合格");
    return 0;
}
