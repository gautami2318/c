#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int d[5],c[9],i,p;
printf("\nEnter Data : \n ");
for(i=0;i<5;i++)
{
scanf("%d",&d[i]);
}
printf("\Data : ");
for(i=0;i<5;i++)
{
printf("%d",d[i]);
}
printf("\nParity : ");
printf("\n1.Even \n2.Odd \n Enter : ");
scanf("%d",&p);
printf("Codeword : ");
if(p==1)
{
for(i=0;i<9;i++)
{
if(i==0 || i==2 || i==3 || i==4 || i==6)
{
c[0]=d[0];
c[2]=d[1];
c[3]=d[2];
c[4]=d[3];
c[6]=d[4];
}
else
{
c[8]=c[6]^c[4]^c[2]^c[0];
c[7]=c[6]^c[3]^c[2];
c[5]=c[4]^c[3]^c[2];
c[1]=c[0];
}
}
}
else if(p=2)
{
for(i=0;i<9;i++)
{
if(i==0 || i==2 || i==3 || i==4 || i==6)
{
c[0]=d[0];
c[2]=d[1];
c[3]=d[2];
c[4]=d[3];
c[6]=d[4];
}
else
{
c[8]=!(c[6]^c[4]^c[2]^c[0]);
c[7]=!(c[6]^c[3]^c[2]);
c[5]=!(c[4]^c[3]^c[2]);
c[1]=!(c[0]);
}
}
}
else
{
printf("\nInvalid.");
}
for(i=0;i<9;i++)
{
printf("%d",c[i]);
}
}
