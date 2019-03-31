#include<stdio.h>
void activity_selection(int start[], int end[], int n)
{
   printf("\nSELECTED ACTIVITIES INDEX ARE: ");
   printf("0 ");
   int j,i=0;
   for(j=1; j< n; j++)
      if(start[j] >= end[i])
          {
            printf("%d ",j);
            i=j;
          }
}
int main()
{
   int n,i;
   printf("Enter size of list: ");
   scanf("%d",&n);
   int start[n],end[n];
   printf("\nEnter start time\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&start[i]);
   }
   printf("\nEnter End time\n");
   for(i=0;i<n;i++)
   {
        scanf("%d",&end[i]);
   }
   printf("\nStart Time: ");
   for(i=0;i<n;i++)
   {
       printf("%d ",start[i]);
   }
   printf("\nEnd Time: ");
   {
       for(i=0;i<n;i++)
        printf("%d ",end[i]);
   }
   printf("\n\n");
   activity_selection(start,end,n);
   return 0;
}
