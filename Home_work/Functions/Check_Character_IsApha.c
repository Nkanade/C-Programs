/*Q15.Check whether the accepted character is an alphabet.Display the message accordingly in main.*/

#include<stdio.h>
int check();                                    // Function Declaration

int main()
{
    
  int ss=check();                               //Calling a Function and accepting return value in ss variable.
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

int check()                                            // Function Defination
{
    char c;
    int flag=1;

    printf("Enter The Character :");
    scanf("\n%c",&c);
    if (c>='a'&&c<='z')                                // Here we check that entered character is between the 'a' and 'z'
    {
        return 1;

    }
    else
    {
        return 0;
    }
}
