#include<stdio.h>
#include<conio.h>
#include<process.h>


int FindPos(int[],int,int);
int lsearch(int[],int,int);

void Lsearch();
void Bsearch();
void Insertion(int[],int);
void Deletion(int[],int);
void selsort(int[],int);
void bubblesort(int[],int);
void search();
void insert();
void sorting();
void queue();
void stack();

 #define MAX 5
int a,ch,i,q[10],ele,n;
int top, status;
int i,item;

//************************MAIN FUNCTION************************************
void main()
{
 int c;
 clrscr();

	printf("\n\n\n\t\t\t DATA STRUCTURE ");
	printf("\n\n\t\t\t    LEARNING");
	printf("\n\n\t\t\t     PAKAGE");
	printf("\n\n\n\t\t MADE BY : ");
	printf("\tPRINCE GANGURDE \n\t\t ");
	printf("\n\t\t\t  FARHAN KHAN & RAJ HATNAGAR ");
	printf("\n\n\t\t SUBJECT : DATA STRUCTURE USING 'C'");
	printf("\n\n\t\t COLLEGE: SANDIP POLYTECHNIC");
	printf("\n\n\n\n\t\t\t PRESS ANY KEY TO CONTINUE\t");

getch();

do
{
		clrscr();
		printf("\n\n\n\tMAIN MENU");
		printf("\n\n\t 1. SEARCHING");
		printf("\n\n\t 2. INSERTION/DELETION ");
		printf("\n\n\t 3. SORTING");
		printf("\n\n\t 4. QUEUE OPERATIONS");
		printf("\n\n\t 5. STACK OPREATIONS");
		printf("\n\n\t 6. EXIT");
		printf("\n\n\tPlease Select Your Option \t ");
		scanf("%d",&c);
		clrscr();
		   switch(c)
	       {
			case 1: search();
				  break;
			case 2: insert();
				  break;

			case 3:sorting();
				 break;
			case 4:queue();
				 break;
			case 5:stack();
				 break;
			case 6:break;
		   default :printf("Wrong choice");
	       }
	}while(c!=6);

      printf("\n\n\n\t\t\t|      THANK YOU         |\n");
     printf("\n\n\t\t\t|     PRINCE GANGURDE    |\n");
     printf("\n\n\t\t\t|     FARHAN KHAN        |\n\n");
     printf("\n\n\t\t\t|     RAJ HATNAGAR       |\n\n");
     printf("\n\n\t\t\t  PRESS ANY KEY TO EXIT\t");

    getch();
}




//************************SEARCHING*************************************

void search()
{

 int ch;

do
{
 clrscr();

 printf("\n Menu: ");
 printf("\n 1.Linear Search");
 printf("\n 2.Binary Search");
 printf("\n 3.EXIT: ");
 scanf("%d",&ch);

    switch(ch)
 {
    case 1:
      {
	 Lsearch();
	  break;
      }
    case 2:
      {
	 Bsearch();
	 break;
      }

    default:printf("\n");
	 break;
 } }
while(ch!=3);
printf("\n PRESS ANY KEY TO EXIT\t");
getch();

}


void Lsearch()
{
   int ARRR[10],n,j,item;

  printf("\n Enter the Desired array size(Max.50): ");
 scanf("%d",&n);
 printf("\n Enter Array elements ");
 for(i=0;i<n;i++)
    {
      scanf("%d",&ARRR[i]);
    }

do
{
int index=-1;
 clrscr();

 printf("\n Enter Elements to be searched for: ");
 scanf("%d",&item);

  for(j=0;j<n;j++)
  {
   if(ARRR[j]==item)
    { index=j;
     }
  }
   if(index==-1)
     {	 printf("\n Sorry!! Given element could not be found.");
       }
	 else
       {
	 printf("\n Element found at index: %d ",index);
	 printf("\n Position: %d ",index+1);
	 }

 printf("\n Want to search more elements? PRESS 0 TO CONTINUE : ");
     scanf("%d",&ch);


    }while(ch==0);
  printf("\n PRESS ANY KEY TO EXIT\t");

 getch();
 }


void Bsearch()
{
 int ARRR[10],beg,n,last,mid,item;

 printf("\n Enter the Desired array size(Max.50): ");
 scanf("%d",&n);
 printf("\n Enter Array elements ");
 for(i=0;i<n;i++)
    {
      scanf("%d",&ARRR[i]);
    }

do
{
int index=-1,i=0;
 clrscr();

 printf("\n Enter Elements to be searched for: ");
 scanf("%d",&item);

 beg=0;
 last=n-1;

 while(i!=n-1)
 {
    mid=last/2;
    if(item==ARRR[mid])
    index=mid;
    else if(item>ARRR[mid])
    beg=mid+1;
    else
    last=mid-1;
    i++;
 }

	 if(index==-1)
      {	 printf("\n Sorry!! Given element could not be found.");
	 }
	 else
	{ printf("\n Element found at index: %d ",index);
	 printf("\n Position: %d ",index+1);
	 }

  printf("\n Want to search more elements? PRESS 0 TO CONTINUE : ");
     scanf("%d",&ch);

    }while(ch==0);
  printf("\n PRESS ANY KEY TO EXIT\t");

 getch();

}

//***************************INSERT/DELETE*******************************


void insert()
{
   int AR[50],N,choice,i;
clrscr();

 printf("\n Enter size of array(Max.50): ");
 scanf("%d",&N);
 printf("\n Enter array elements is ascending order:\n");
 for(i=0;i<N;i++)
 {
	scanf("%d",&AR[i]);}
	printf("\n Menu:");
	printf("\n 1.Insertion");
	printf("\n 2.Deletion");
	printf("\n Enter Choice(1/2): ");
	scanf("%d",&choice);
    switch(choice)
   {
	case 1: Insertion(AR,N);
	  break;
	case 2: Deletion(AR,N);
	  break;
	default:printf("\n !!Please enter either 1 or 2");
	  break;
   }
}

void Insertion(int ar[],int y)
{
int ch;
 int item,index,i;
 do
  {
  clrscr();
   printf("\n Enter element to be inserted: ");
    scanf("%d",&item);
    if(y==50)
     {
       printf("\n Overflow");
	   exit(1);
     }
     index=FindPos(ar,y,item);
     for(i=y;i>index;i--)
      {
       ar[i]=ar[i-1];
      }
     ar[index]=item;
     y=y+1;

     printf("\n Array after insertion is: \n");
  for(i=0;i<y;i++)
  { printf("%d \t",ar[i]);}
     printf("\n Want to insert more element? PRESS 0 TO CONTINUE : ");
     scanf("%d",&ch);


    }while(ch==0);
  printf("\n PRESS ANY KEY TO EXIT\t");
getch();

}

int FindPos(int AR[],int size,int item)
{
 int pos,i;
 if(item<AR[0]) pos=0;
 else
 { for(i=0;i<size-1;i++)
   {  if(AR[i]<=item&&item<AR[i+1])
       { pos=i+1;
	 break;
       }
   }
  if(i==size-1)
  pos=size;
 }
  return pos;
}


void Deletion(int AR[],int N)
{
  int ch;
  int item,index,i;
  do
    {clrscr();

     printf("\n Enter element to be deleted: ");
       scanf("%d",&item);
       if(N==0)
	{  printf("Underflow!!");
	   exit(1);
	}
       index=lsearch(AR,N,item);
       if(index!=-1)
       AR[index]=0;
       else
       printf("\n !!Sorry no such element is found");
       for(i=index;i<N;i++)
	 {
	  AR[i]=AR[i+1];
	 }
	N=N-1;

		printf("\n Array after deletion is: \n");
	for(i=0;i<N;i++)
	  {
	   printf("%d \t",AR[i]);
	  }


	printf("\n\n Want to delete more element? PRESS 0 TO CONTINUE\t");
	scanf("%d",&ch);


  } while(ch==0);
  printf("\n PRESS ANY KEY TO EXIT\t");
getch();
}


int lsearch(int AR[],int size,int item)
{  int i;
   for(i=0;i<size;i++)
  { if(AR[i]==item)
    return i;
  }
  return -1;
}

//**********************SORTING*****************************************


void sorting()
{
  int AR[50],ITEM,N,index,n,i,c;
clrscr();

  printf("How many element you want to insert in array?(Max.50): ");
  scanf("%d",&N);
  printf("Enter element of array: ");
  for(i=0;i<N;i++)
       {	scanf("%d",&AR[i]);  }

 do
 {

  printf("Menu\n1.Selection Sort\n2.Bubble Sort\n3.EXIT\nEnter Choice: ");
  scanf("%d",&n);
  switch(n)
  {	case 1: selsort(AR,N);
		break;
	case 2: bubblesort(AR,N);
		break;
	case 3:goto hathi;
	default:printf("Enter Valid Choice");
		break;
  }
  printf("\nThe Sorted Array is shown below:\n");
  for(i=0;i<N;i++)
	printf("%d \t",AR[i]);
		printf("\n");


  printf("\nPRESS 0 TO CONTINUE\n");
  scanf("%d",&c);
  }while(c==0);
   hathi:
  printf("\n PRESS ANY KEY TO EXIT\t");
getch();



}


void selsort(int AR[],int size)
{ int small,pos,tmp,i,j,k;
  for(i=0;i<size;i++)
  {	small=AR[i];
	pos=i;
	for(j=i+1;j<size;j++)
	{	if(AR[j]<small)
		{ small=AR[j];
		  pos=j;
		}
	 else
	{ tmp=AR[i];
	 AR[i]=AR[pos];
	 AR[pos]=tmp; }
	}
  printf("\nArray after pass: is-\n");
	for(k=0;k<size;k++)
		printf("\t%d",AR[k]);
  }
}

void bubblesort(int AR[],int size)
{ int tmp, ctr=0,i,j,k;
  for(i=0;i<size;i++)
	{  for(j=0;j<(size-1)-i;j++)
	   {  if(AR[j]>AR[j+1])
	      { tmp=AR[j];
		AR[j]=AR[j+1];
		AR[j+1]=tmp;
	      }
	   }
	   printf("Array after iterationis:");

	   ++ctr;
	   printf("\n",ctr);
	   for(k=0;k<size;k++)
		printf("\t%d",AR[k]);
	   printf("\n");
	}
}



//************************QUEUE OPERATIONS***********************************


void queue()
{ int f=0,r=-1;
clrscr();
printf("\n Enter size of QUEUE:\t");
scanf("%d",&n);


do
{

printf("\n Enter your choice\n");
printf("\n 1. To insert elements in a queue\n");
printf("\n 2. To delete elements in a queue\n");
printf("\n 3. EXIT\n\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
if(r==n-1)
 { printf("\n QUEUE OVERFLOW");
  }
  else
 {
 printf("\n Enter the element you want to insert:\t");
  scanf("%d",&ele);
 r=r+1;

  q[r]=ele;

 if(f==-1)
 { printf("\n QUEUE after insertion:\t\t");
 for(i=0;i<=r;i++)
 {
  printf("%d\t",q[i]);
  }}

  printf("\n QUEUE after insertion:\t\t");
 for(i=f;i<=r;i++)
 {
  printf("%d\t",q[i]);
  }}
 printf("\n\n");

  printf("\n\n\n\n\t\t\t PRESS ANY KEY TO CONTINUE\t");
getch();
clrscr();
}
break;
case 2:
{if(r==-1)
  {
  printf("\n QUEUE UNDERFLOW");
  }
  else if(f>r)
  {
  printf("\n  QUEUE UNDERFLOW");
  }
  else
 {

 printf("\n Deleted element is:");
 printf("%d",q[f]);
 f=f+1;

 printf("\n \nQUEUE after deletion:\t\t");
 { for(i=f;i<=r;i++)
  printf( "%d\t",q[i]);
  }}
 printf("\n\n");

 printf("\n\n\n\n\t\t\t PRESS ANY KEY TO CONTINUE\t");
 getch();
clrscr();
}

break;
case 3:
break;
default:printf("\n wrong choice");
}
}
while(ch!=3);

 printf("\n\n\n\n\t\t\t PRESS ANY KEY TO EXIT\t");
getch();

}

//***************************STACK*************************************

void push (int stack[], int item)
{  if (top == (MAX-1))
status = 0;
 else
 {  status = 1;
++top;
stack [top] = item;
 }
}

int pop (int stack[])
{
int ret;
if (top == -1)
{ ret = 0;
status = 0;
}
 else
 { status = 1;
ret = stack [top];
--top;
 }
return ret;
}


void display (int stack[])
{ int i;
printf ("\nThe Stack is: ");
 if (top == -1)
printf ("empty");
 else
{ for (i=top; i>=0; --i)
 printf ("\n--------\n|%3d  |\n--------",stack[i]);
}
printf ("\n");
}

void stack()
{
int stack [MAX], item;
 int ch;
 clrscr ();
 top = -1;

 do
 {do
{printf ("\nMAIN MENU\n");
printf ("\n1.PUSH ");
printf ("\n2.POP ");
printf ("\n3.Exit ");
printf("\nEnter Your Choice: ");
scanf("%d", &ch);
if (ch<1 || ch>3)
printf ("\nInvalid Choice, Please try again");
}while (ch<1 || ch>3);
switch (ch)
{case 1:
printf("\nEnter the Element to be pushed : ");
scanf("%d", &item);
printf (" %d", item);
push(stack, item);
if(status)
{  printf ("\nAfter Pushing ");
display (stack);
if (top == (MAX-1))
printf ("\nSTACK IS FULL");
}
else
printf ("\nSRTACK OVERFLOW");
break;
case 2:
item = pop (stack);
if (status)
{ printf ("\nThe Popped item is %d. After Popping: ");
 display (stack);
}
else
printf ("\nSTACK UNDERFLOW\n");
break;
default:
printf ("\nPRESS ANY KEY TO EXIT\n");
}
 }while (ch != 3);
getch();
}
