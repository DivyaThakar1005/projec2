/*#include<stdio.h>

int main()
{int a,b,c;

printf("Enter Three numbers:");
scanf("%d %d %d",&a,&b,&c);

if(a>b)
{
    if(a>c)
    {
        printf("%d is the greatest of all numbers.",a);
    }
    else 
          {  printf("%d is the greatest of all numbers.",b);
          }    
}
    else
    {
      printf("%d id greatest of all numbers.",c);
    }
    


 
    return 0;
    */

/*#include<stdio.h>
int main()
{
  int a;
  printf("Enter a number:");
  scanf("%d",&a);

if(a>0)
{
printf("Number is positive.");
}
else if(a<0)
{
  printf("Number is negative");
}
else
{
  printf("Numner id 0");
}

  return 0;
}
 */

#include<stdio.h>
int main()

{
  char c;
  printf("Enter any character:");
  scanf("%c",&c);

  if(c=='a'||c=='A')
  {
    printf("character is vowel");

  }
  else if(c=='e'||c=='E')
  {
    printf("character is vowel");

  }
  else if(c=='i'||c=='I')
  {
    printf("character is vowel");

  } 
  else if(c=='o'||c=='O')
  {
    printf("character is vowel");


  }
  else if(c=='u'||c=='U')
  {
    printf("character is vowel");

  }
  else
  {
    printf("character is consonant");

  }
  return 0;
}



