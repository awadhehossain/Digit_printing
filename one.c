#include<stdio.h>
int main()
{
int i,j,n;
printf("Here n is how many lines you want to print 1\n");
printf("Enter the value of n.(N must be an  odd   number ):");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if(j==2)
 printf(" *");
 else if(i==n && j<=(n/2)+1)
printf(" *");
else if(i==2 && j==1)
printf(" *");
 else
 printf("  ");
}
printf("\n");

}




    return 0;
}