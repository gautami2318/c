#include<stdio.h>
#include<string.h>
int main()
{
char data[50],stuff[50],dstuff[50];
int i,j,no_of_frames,tframe,fsize,dsize,s;
printf("\nEnter data:");
scanf("%s",data);
dsize=strlen(data);
printf("\nEnter size of frame:");
scanf("%d",&fsize);
s=fsize;
tframe=fsize-1;
no_of_frames=(dsize/tframe)+1;
j=0;
for (i=0;i<(dsize+no_of_frames);i++)
{
if (i%fsize==0)
{
if ((dsize-j)<fsize)
{
fsize=dsize-j+1;
}
stuff[i]=(char)(48+fsize);
fsize=s;
}
else
{
stuff[i]=data[j];
j++;
}
}
stuff[dsize+no_of_frames]='\0';
printf("Stuffed data is %s",stuff);
//dstufing
j=0;
for (i=0;i<(dsize+no_of_frames);i++)
{
if (i%fsize!=0)
{
dstuff[j]=stuff[i];
j++;
}
}
printf("\nDstuffed data:%s",dstuff);
}
