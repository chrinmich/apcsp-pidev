#include <stdio.h>
#include<string.h>
#include"finalproject.h"

int main(int argc, char* argv[])
{   
  char ans[100];
  int n, num1, num2, num3, num4, result;
  char option;
  if (argc == 4)
  {
    sscanf(argv[1], "%d", &n);  //n
    sscanf(argv[2], "%d", &num1);  //num1
    sscanf(argv[3], "%d", &num2);  //num2
  }
  else
  {
    printf("\nwhat operation do you want to do?\n");
    printf(" press 1 for addition\n");
    printf(" press 2 for subtraction\n");
    printf(" press 3 for multiplication\n");
    printf(" press 4 for division\n");
    printf(" press 5 for area of triangle\n");
    printf(" press 6 for area of rhombus\n");
    scanf("%d",&n);

    if(n == 1|| n == 2|| n == 3|| n == 4) {
      printf("please enter a number\n");
      scanf("%d",&num1);
      printf("please enter a second number\n");
      scanf("%d",&num2);
    }
    else {
      printf("please enter the base\n");
      scanf("%d",&num1);
      printf("please enter the height\n");
      scanf("%d",&num2);
    }
  }

  if(n == 1|| n == 2|| n == 3|| n == 4)
  {
      switch(n)
      {
      case 1:result=num1+num2;
          printf("addition of two numbers is %d",result);
          break;
      case 2:result=num1-num2;
          printf("subtraction of two numbers is %d",result);
          break;
      case 3:result=num1*num2;
          printf("multiplcation of two numbers is %d",result);
          break;
      case 4:result=num1/num2;
          printf("division of two numbers is %d",result);
          break;
      default:printf("wrong input");
      }
    }
    else if (n == 5|| n == 6)
    {  
      switch(n)
      {
      case 5:result=(num1*num2)/2;
          printf("area of triagle is %d",result);
          break;
      case 6:result=(num1*num2);
          printf("area of rhombus is %d",result);
          break;
      default:printf("wrong input");
      }
  }
    //printf("\n do you want to continue y/n?\n");
    //scanf("%s", ans);
  //} while (strcmp(ans,"y") == 0);
  return 0;
}
