#include<stdio.h>
void main()
{
int r,c,a[100][100],b[100][100],sum[100][100],i,j;
printf("Enter the numbers of rows(between 1 and 100:)");
scanf("%d",&r);
printf("Enter the numbers of columns(between 1 and 100:)");
scanf("%d",&c);
printf("Enter the elements of first matrix:\n");
for(i=0;i<r;++i) {
for(j=0;j<c;++j) {
printf("Enter the elements a %d%d:",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("Enter the elements of 2nd matrix:");
for(i=0;i<r;++i) {
for(j=0;j<c;++j) {
printf("\nEnter the elements b %d%d:",i+1,j+1);
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r;++i) {
for(j=0;j<c;++j) {
sum[i][j]=a[i][j]+b[i][j];
}
}
printf("\n sum of two matrices:\n");
for(i=0;i<r;++i) {
for(j=0;j<c;++j) {
printf("%d\t",sum[i][j]);
if(j==c-1) {
printf("\n\n");
}
}
printf("\n");
}
}
