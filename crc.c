#include<stdio.h> 
#include<string.h> 
#define n strlen(poly) 
int mlength,i,j; 
char data[30]; 
char value[30]; 
char poly[10]; 
int main() 
{ 
 printf("Message:"); 
 scanf("%s",data); 
 printf("Polynomial:"); 
 scanf("%s",poly);
 mlength=strlen(data); 
 for(i=mlength;i<mlength+n-1;i++) 
 data[i]='0'; 
 printf("\nData padded:%s",data); 
{ 
 for(i=0;i<n;i++) 
 value[i]=data[i]; 
 do{ 
 
 if(value[0]=='1') 
{
 for(j=1;j<n;j++) 
 value[j]=((value[j]==poly[j])?'0':'1'); 
} 
 for(j=0;j<n-1;j++) 
 value[j]=value[j+1]; 
 value[j]=data[i++]; 
 }while(i<=mlength+n-1); 
} 
 printf("\nReminder:%s",value); 
 for(i=mlength;i<mlength+n-1;i++) 
 data[i]=value[i-mlength]; 
 printf("\nCRC code:%s\n",data); 
 { 
 printf("Enter the received data:"); 
 scanf("%s", data); 
 printf("Data received: %s",data); 
{ 
 for(i=0;i<n;i++) 
 value[i]=data[i]; 
 do
{ 
 if(value[0]=='1') 
{
 for(j=1;j<n;j++) 
 value[j]=((value[j]==poly[j])?'0':'1'); 
}
for(j=0;j<n-1;j++) 
 value[j]=value[j+1]; 
 value[j]=data[i++]; 
 }
while(i<=mlength+n-1); 
} 
 for(i=0;(i<n-1)&&(value[i]!='1');i++); 
 if(i<n-1) 
 printf("\nError detected\n"); 
 else 
 printf("\nNo error detected\n"); 
} 
 return 0; 
}

