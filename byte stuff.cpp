#include<stdio.h>
#include<string.h>
int main()
{
int i=0,j=0;
 char m[50],d[50];
 printf("Flag = '@'");
 printf("Escape char = '#'");
 printf("\nEnter data : ");
 scanf("%s",m);
 d[j]='@';
 j++;
 while(m[i]!='\0')
 {
 if(m[i]=='@'||m[i]=='#')
 {
 d[j]='#';
 j++;
 d[j]=m[i];
 j++;
 i++;
}
else
{
d[j]=m[i];
j++;
i++;
}
}
d[j]='@';
puts(d);
}

