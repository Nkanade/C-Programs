//Q15
#include<stdio.h>
int check();

int main()
{
    
  int ss=check();
  printf("%d",ss);
  if(ss==1)
  {
    printf("Charatcter");

  }
  else
  {
    printf("Other Symbol");
  }

}

int check()
{
    char c;
    int flag=1;

    printf("Enter The Character :");
    scanf("\n%c",&c);
    if (c>='a'&&c<='z')
    {
        return 1;

    }
    else
    {
        return 0;
    }
}
