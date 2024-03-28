#include<stdio.h>
int main()
{
int i,j,n;
printf("Here n is how many lines you want to print every digit\n");
printf("Enter the value of n.(N must be an  odd   number ):");
scanf("%d",&n);

//for0
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if(((i==1 || i==n) && j!=1 && j!=n) ||((j==1||j==n) && i!=n && i!=1))
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}
printf("\n");

//for1
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
printf("\n");

//for8
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if(i==1 || i==n || i==n/2+1 || j==1 || j==n)
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}
printf("\n");

//for2
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if(i==1 ||i==n ||i==n/2+1)
 printf(" *");
 else if(i>=(n/2)+1 && j==1)
 printf(" *");
 else if(i<=(n/2)+1 && j==n)
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}
printf("\n");

//for1
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
printf("\n");
//for9
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if(i==1 || i==n/2+1 || i==n || (j==1 && i<=n/2+1) || j==n )
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}
printf("\n");
//for4
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if(i==n/2+1||j==n||(j==1 && i<=n/2+1))
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}
printf("\n");
//for7
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if(i==1 || (i+j==n+1))
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}
printf("\n");
//for1
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
printf("\n");
//for7

for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if(i==1 || (i+j==n+1))
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}
printf("\n");
//for7

for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if(i==1 || (i+j==n+1))
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}


    return 0;
}