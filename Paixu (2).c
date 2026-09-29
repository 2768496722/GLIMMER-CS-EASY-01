#include <stdio.h>

int square(int a) {
    return a*a;
}

int avg(int a, int b, int c){
    return (a + b + c) / 3;
}

int var(int avg,int a,int b, int c){
    return (square (avg - a) + square (avg - b) + square (avg - c))/3;
}

int total(int avg,int var){
    return 3*avg - var/3;
}

int zh(int a,int b,int c){
    int p =avg(a, b, c);
    int f =var(p, a, b, c);
    return total(p,f);
}
void print_ranking(int zh1, int zh2, int zh3){
if (zh1 >= zh2 && zh2 >= zh3) {
        printf("小明 > 小强 > 小林\n");
    } else if (zh1 >= zh3 && zh3 >= zh2) {
        printf("小明 > 小林 > 小强\n");
    } else if (zh2 >= zh1 && zh1 >= zh3) {
        printf("小强 > 小明 > 小林\n");
    } else if (zh2 >= zh3 && zh3 >= zh1) {
        printf("小强 > 小林 > 小明\n");
    } else if (zh3 >= zh1 && zh1 >= zh2) {
        printf("小林 > 小明 > 小强\n");
    } else {
        printf("小林 > 小强 > 小明\n");
    }
}
int main() {
    int x1, x2, x3;
    int y1, y2, y3;
    int z1, z2, z3;

    printf("请输入小明的三项成绩(顺序为A B C,以一个空格为间隔): ");
    scanf("%d %d %d", &x1, &x2, &x3);
    printf("请输入小强的三项成绩(顺序为A B C,以一个空格为间隔): ");
    scanf("%d %d %d", &y1, &y2, &y3);
    printf("请输入小林的三项成绩(顺序为A B C,以一个空格为间隔): ");
    scanf("%d %d %d", &z1, &z2, &z3);

    int zh1 = zh(x1,x2,x3);
    int zh2 = zh(y1,y2,y3);
    int zh3 = zh(z1,z2,z3);

    print_ranking(zh1,zh2,zh3);

    return 0;
}