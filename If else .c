#include<stdio.h>
int main()
{
int num;
Printf("Enter your marks");
Scanf("%d",&num);
Printf("you Enter marks is:%d\n",num);
Printf("======your grade========\n");
if(num>85)
{
Printf("you got a A grade\n");
}
Else if (num>70&&num<84)
{
Printf("you got a B grade");
}
Else if (num>55&&num<69)
{
Printf("you got a c grade");
}
Else if (num<40&&num<54)
{
Printf("you got a  D grade");
}
else if(num<40)
{
Printf("you are fail in this exam");
}
Return 0;
}
