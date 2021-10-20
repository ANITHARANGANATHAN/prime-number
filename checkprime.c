#include<stdio.h>
#include<math.h>
int checkprime(int i,int num)
{
  if(num==i)
    return 0;
  else
    if(num%i==0)
      return 1;
  else
  {
    return checkprime(i+1,num);
    
  }

}
int main()
{
  int  num;
  printf("enter your number:");
  scanf("%d",&num);
  if(checkprime(2,num)==0
     printf("it is a prime number.");
  else
     printf("it is not a prime number.");
  }
