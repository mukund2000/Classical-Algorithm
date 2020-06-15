#include<stdio.h>
void main()
{
 int arrival[10],burst[10],aux[10];
 int Wait[10],TAT[10],CT[10];
 int i,j,smallest,count=0,time,n;
 double avg=0,tt=0,end;
 printf("\nEnter the Total no of Process: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("\nEnter arrival time of process %d is ",i+1);
   scanf("%d",&arrival[i]);
 }
 for(i=0;i<n;i++)
 {
   printf("\nEnter burst time of process %d is ",i+1);
   scanf("%d",&burst[i]);
 }
 for(i=0;i<n;i++)
 aux[i]=burst[i];

  burst[9]=9999;
 //printf("time => process number");
 for(time=0;count!=n;time++)
 {
   smallest=9;
  for(i=0;i<n;i++)
  {
   if(arrival[i]<=time && burst[i]<burst[smallest] && burst[i]>0 )
   smallest=i;
  }
  burst[smallest]--;
  if(burst[smallest]==0)
  {
   count++;
   end=time+1;
   CT[smallest] = end;
   Wait[smallest] = end - arrival[smallest] - aux[smallest];
   TAT[smallest] = end - arrival[smallest];
  }
 }
 printf("pid \t burst \t arrival  \tcompletion  \twaiting \tturnaround ");
 for(i=0;i<n;i++)
 {
   printf("\n %d \t   %d \t %d\t\t%d   \t\t%d\t\t%d",i+1,aux[i],arrival[i],CT[i],Wait[i],TAT[i]);
   avg = avg + Wait[i];
   tt = tt + TAT[i];
 }
 printf("\n\nAverage waiting time = %lf\n",avg/n);
 printf("Average Turnaround time = %lf",tt/n);
}
