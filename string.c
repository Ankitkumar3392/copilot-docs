#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char str[30],str1[30];
  int c,i,len,s=0,z,k=0,f;
  printf("Enter a number::");
  gets(str);
  len=strlen(str);
  for(i=0;i<=len;i++)
  {
    if(s>0)
    {
      str1[k]=str[i];
    }
    if(c==0)
    {
      z=i;
      c++;
      s++;
    }
    if(str[i]==32||str[i]=='\0')
    {
      str1[k+1]=str[z];
      str[k+2]='e';
      str[k+3]='y';
      c=0;
      s=0;
      k+=2;
    }
    k++;
  }
}
