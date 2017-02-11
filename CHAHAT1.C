
//Expense Manager
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void caly(int);
void calm(int);
void cal(int);
int i;
int aut[30],ent[30],fam[30],other[30],rent[30],eb[30],food[30],ins[30],tax[30],tra[30],uti[30],tot[30];
FILE *f,*fm,*fy;
void main()
{
int ch;
clrscr();
printf("1.weekly \n 2.monthly\n 3.yearly\n4.Exit\n");
printf("Enter the option");
scanf("%d",&ch);

fm=fopen("aakm.txt","w");
fy=fopen("aaky.txt","w");
f=fopen("aak.txt","w");
switch(ch)
{
case 1:
printf("1.Automobile\n2.Entertainment\n3.Family\n4.Food\n5.Insurance\n6.Tax\n7.Travel\n8.Utilities");
 fprintf(f,"Days\t\t1\t2\t3\t4\t5\t6\t7\n");
 cal(7);
 break;
case 2:
 printf("\n1.Rent\n2.Electrical Bill\n3.Others\n");
 fprintf(fm,"Months\t\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\n");
 calm(12);
 break;
case 3:
 fprintf(fy,"\t\tFOR LAST 5 YEARS\n");
 printf("\n1.Insurance\n2.tax");
 fprintf(fy,"Year\t\t1\t2\t3\t4\t5\n");
 caly(5);
 break;
case 4:
 exit(0);
 break;
}
fcloseall();
getch();
}

void cal(int n)
{
//f=fopen("aak.txt","w");
fprintf(f,"\nAutomobile\t");
printf("\nEnter values");
for(i=0;i<n;i++)
{
scanf("%d",&aut[i]);

fprintf(f, "%d\t",aut[i]);
}
fprintf(f,"\nEntertainment\t");
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d",&ent[i]);
fprintf(f,"%d\t",ent[i]);
}
fprintf(f,"\nFamily\t\t");
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d",&fam[i]);
fprintf(f,"%d\t",fam[i]);
}
fprintf(f,"\nFood\t\t");
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d",&food[i]);
fprintf(f,"%d\t",food[i]);
}
/*fprintf(f,"\nInsurance\t");
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d",&ins[i]);
fprintf(f,"%d\t",ins[i]);
}
fprintf(f,"\nTax\t\t");
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d",&tax[i]);
fprintf(f,"%d\t",tax[i]);
} */
fprintf(f,"\nTravel\t\t");
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d",&tra[i]);
fprintf(f,"%d\t",tra[i]);
}
fprintf(f,"\nUtilities\t");
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d",&uti[i]);
fprintf(f,"%d\t",uti[i]);
}
fprintf(f,"\nTotal\t\t");
for(i=0;i<n;i++)
{
tot[i]=aut[i]+ent[i]+fam[i]+food[i]+tra[i]+uti[i];
fprintf(f,"%d\t",tot[i]);
}
fclose(f);
}
void calm(int n)
{
//f=fopen("aak.txt","w");

fprintf(fm,"\nRent\t\t");
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d",&rent[i]);
fprintf(fm,"%d\t",rent[i]);
}
fprintf(fm,"\nE.Bill\t\t");
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d",&eb[i]);
fprintf(fm,"%d\t",eb[i]);
}

fprintf(fm,"\nOthers\t\t");
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d",&other[i]);
fprintf(fm,"%d\t",other[i]);
}
fprintf(fm,"\nTotal\t\t");
for(i=0;i<n;i++)
{
tot[i]=rent[i]+eb[i]+other[i];
fprintf(fm,"%d\t",tot[i]);
}
fclose(fm);
}



void caly(int n)
{
//f=fopen("aak.txt","w");
fprintf(fy,"\nInsurance\t");
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d",&ins[i]);
fprintf(fy,"%d\t",ins[i]);
}
fprintf(fy,"\nTax\t\t");
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d",&tax[i]);
fprintf(fy,"%d\t",tax[i]);
}

fprintf(fy,"\nTotal\t\t");
for(i=0;i<n;i++)
{
tot[i]=ins[i]+tax[i];
fprintf(fy,"%d\t",tot[i]);
}
fclose(fy);
}


