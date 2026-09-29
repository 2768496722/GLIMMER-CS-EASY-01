# include <stdio.h>
int main(void){
    char name[20];
    int age;
    int count=0;
    char choice;
    do{
        printf("请输入姓名：");
        scanf("%s", &name);
        printf("请输入年龄：");
        scanf("%d", &age);
        printf("姓名：%s,年龄:%d\n",name,age);
        count++;
        printf("第%d次操作已完成,是否继续输入(y/n)?\n",count);
        scanf(" %c",&choice);
    }while(choice=='y');
    printf("程序结束,共运行%d次。",count);
    return 0;
}