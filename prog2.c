#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
        float a,b,c,d,effort,dev_time;
        int ch,kloc,people;
        printf("\n enter the line of code:=");
        scanf("%d",&kloc);
do
{
printf("\n ***Types Of Software***");
printf("\n 1.organic\n2.semi detach \n3.embeded \n4.exit");
printf("\nenter your choice:");
scanf("%d",&ch);
   switch(ch)
{
case 1:
       a=2.4;
       b=1.05;
       c=2.5;
       d=0.38;
       effort=a*(pow(kloc,b));
       dev_time=c*(pow(effort,d));
       people=effort/dev_time;
       printf("\n efforts required=%f",effort);
       printf("\n developement time is=%f",dev_time);
       printf("\n people required is=%d",people);
break;

case 2:
       a=3.0;
       b=1.12;
       c=2.5;
       d=0.35;
       effort=a*(pow(kloc,b));
       dev_time=c*(pow(effort,d));
       people=effort/dev_time;
       printf("\n efforts required=%f",effort);
       printf("\n developement time is=%f",dev_time);
       printf("\n people required is=%d",people);
break;

case 3:
      a=3.6;
      b=1.20;
      c=2.5;
      d=0.32;
      effort=a*(pow(kloc,b));
      dev_time=c*(pow(effort,d));
      people=effort/dev_time;
      printf("\n efforts required=%f",effort);
      printf("\n developement time is=%f",dev_time);
      printf("\n people required is=%d",people);
break;

case 4:
      exit(0);
}
}
while(ch!=4);

}
