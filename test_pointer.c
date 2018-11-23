#include<stdio.h>

void exchange(int * q1,int * q2,int * q3);

int main(int argc,char *argv[])//tips: mainº¯ÊýÒªÄÜÔÚÃüÁîÐÐÀï½ÓÊÕ²ÎÊý 
{ 
    int a, b, c;
	int *p1, *p2, *p3;
   
	if(argc == 1)
	{
  		printf("please enter 3 integer number:");
   		scanf("%d%d%d", &a, &b, &c);   	
    }
	else if(argc == 4)//tips: ÕâÀïÒªÊµÏÖ´ÓÃüÁîÐÐ¶ÁÈëÊý¾Ý£¬ÓÃscanf Ö»ÄÜ´Ó¼üÅÌÊäÈë 
	{
  		printf("please enter 3 integer number:");
   		scanf("%d%d%d", &a, &b, &c);   	
	}
	else
		return -1;
	
    p1 = &a;
    p2 = &b;
    p3 = &c; 
    exchange(p1, p2, p3);  
    printf("the order is :%d,%d,%d\n",a,b,c);
   
	return 0;
}

void exchange(int *q1,int *q2,int *q3)
{
   void swap(int *pt1,int *pt2);
   swap(q3,q2);
   swap(q2,q1);
   swap(q2,q3);
}

void swap(int *p1,int *p2)
{
  int temp;
  

  //比较重要的，temp赋值为指向p1的数值，不能是p1（地址）
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

