#include<stdio.h>
#include<string.h>
void logic1();
void logic2();
void logic3();
void logic4();
void logic5();
void logic6();
void month(int sd,int d);
void main( )
{
	int n;
	
X : 
printf("\n\twelcome to brain taesers.....?!?");
printf("\n \nenter your choice.....\n");
	printf("\n1.Magic maths");
	printf("\n2.To find your name...");
	printf("\n3.Calendar for a month...");
    printf("\n4.To find word in ur Mind...");
	printf("\n5.Let's play a game of brain teasers....");
	printf("\n6.Exit");
   scanf(" %d",&n);
   switch(n)
   {
   case 1:logic1();               
                break;
    case 2:logic2();
                 break;
      case 3: logic3();
                       break;
      case 4: logic4();
                break;
      case 5:logic5();
                  break;
       case 6:logic6();
                      break;
                  
     default: { 
       	printf("\n\noops...!!your entry is invalid");
       	printf("\n \npress any number start again....");
       	scanf("%d",&n);

     	goto X;
        }
   }
  
}
     
  void logic1()
  {
  		int a,m,p, n,n1,n2,n3;
		printf(" choose a 3 - digit no in ur Mind....!?\n");
		printf("\n\n\n if u want u can use a calculator.... or paper and pen r just enough");
   printf("\n\n Ready....! \n\t press any key to continue....!");
scanf("%d",&m);
printf(" \n\n\nreverse the digits in the no. u have selected...\n\nnow....\n\nfind the difference \nbetween the selected no.and reversed no.");
printf("\n\nenter  the last digit of the result obtained above...");
scanf("%d",&n);
n1=9-n;
n2=9;
n3=n;
printf("\n\nthe result is ....\n\t%d%d%d",n1,n2,n3);
printf("\n\ninteresting right.....!\n\n");
printf(" \n\nfor something more interesting press any key...");
scanf("%d",&p);
printf("\n\nthe result is ....\n\t%d%d%d",n1,n2,n3);
printf("\nnow reverse. and add the result no.");
printf("\ni will guess the result press any key to  continue");
scanf("%d",&a);
printf("\n the next result would be....:1089\n");
printf("\n---------------------------------\nhope you enjoyed brain teasers.....");
printf("\n \n thank you\n - satya and niharika");

}
  	void logic2()
  	{	int p,q,r;
		printf("\n let's test your eye power");
	printf("\n try to find your name in this puzzle\n");
	printf("\n S A J K L G N Y P T K M O C");
	printf("\n A T H Q R B Z G O C X N P S");
	printf("\n R E T Y O P L G N S L Q A B");
	printf("\n N R V Y O U R N A M E K L B");
	printf("\n M P N D A C L Q W F U G X T");
	printf("\n V C M Q R V I L E A P E U J");
	printf("\n Y O I S D R F H P K N A Q L");
	printf("\n N P Q S M F H E C R D L V W");
printf("\n\n got it....?\nelse press any number to continue");
scanf("%d",&p);
printf("\n\n don't give up easily\n\n i wil give u a hint \n\n dont go diagonally\n");
printf(" \n  got it.....?\n\n else press any number to continue...");
scanf("%d",&q);
  printf("\n Fine then.....!!\n I wil show your name in the puzzle\n");
  printf("\npress any number to see your name");
 scanf("%d",&r);
  printf("\n?? see the 4th row????");
  printf("\n ...........................................................");     
   printf("\n\n N R V * Y O U R N A M E * K L B");
   printf("\n\n ...........................................................");
  printf("\n hope u enjoyed brain teasers...."); printf("\n-------------------------------------------------------");
   printf("\nthank you \n-Niharika and satya"); 
    
}
  		void logic3()
  		{
  			printf("\t\t(^o^)?");
  				int p, t,q;
	printf("\nhere u can create calendar for a month\n");
	printf("\n enter any number to continue......");
	scanf("%d",&t);
	printf("\n lets assume\nsunday as 0\nmonday  as 1\nTuesday as 2\nwednesday as 3\n..........\n...........\n saturday as 6\n");
	printf("\n now enter the starting day of desired month in integer as shown above\n");
	scanf("%d",&p);
	printf("\n\nenter number of days in that month 28 or 29 or 30 or 31\n");
	scanf("%d",&q);
	if(q>27&&p<7&&q<32)
	month(p,q);
	else
	{		
	printf("\nyour entry is invalid\n\n thank you\n - satya and  niharika");  
	   }
}
void month(int sd,int d)
{
	int i,j;
	printf(". Sun Mon Tue Wed Thu Fri Sat\n");
	printf("------------------------------------\n");
	for(i=0;i<sd;i++)
	printf("    ");
	for(j=1;j<=d;j++)
	{
		if(i>6)
		{
			printf("\n");
			i=1;
		}
		else
		i++;
		printf("%4d",j);
	}
	printf("\n----------------------------------");
	printf("\n\n Hope you enjoyed this .....\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n thank you \n -Satya and Niharika");
  			}
  			void logic4()
  			{
  				printf("\tsource : anonymus\n");
  				
	int i,n,j,k,s,m,c[10],d[10];
	char a='A',w[20][10]={"First","Second","Third","Fourth","Fifth","Sixth","Seventh","Eighth","Ninth","Tenth"},al[10][10],bl[10][10],cl[10][10];
	for(i=0;i<6;i++)
	{
		for(j=0;j<5;j++)
		{
			al[i][j]=a;
			a++;
		}
	}
	printf("Choose one word in your mind\n\nGive Information of each letter with row number\n\n");
	for(i=0;i<6;i++)
	{
		printf("%d...",i+1);
		for(j=0;j<5;j++)
		{
			printf("   %c   ",al[i][j]);
			if(al[i][j]=='Z')
			  break;
		}
	   printf("\n\n");
	}
	printf("Please Enter the no of letter in that word\t:   ");
	scanf("%d",&n);
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		  printf("%s\t:\t",w[i]);
    	  scanf("%d",&c[i]);
    	  printf("\n");
	}
	for(k=0;k<n;k++)
	{
		s=c[k];
		for(m=0;m<5;m++)
		{
			bl[k][m]=al[s-1][m];
		}
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			cl[j][i]=bl[i][j];
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d...",i+1);
		for(j=0;j<n;j++)
		{
			printf("  %c  ",cl[i][j]);
		}
		printf("\n\n\n");
	}
	for(i=0;i<n;i++)
	{
		  printf("%s\t:\t",w[i]);
    	  scanf("%d",&d[i]);
    	  printf("\n");
	}
	printf("\n\nThe word in your mind is\n\n");
	j=-1;
	for(i=0;i<n;i++)
	{
		k=d[i]-1;
		j++;
		printf("%c",cl[k][j]);
	}		
	printf("\n -----------------------------------------\n");
	printf("\n source-anonymus\n\n Hope you enjoyed brain teasers...  \n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\nthank you \n -Satya and Niharika");	
}
  				
  				    void logic5()
  				    {
  				  
	int i,count=0;
		char z,n[20],t[]= "welcome", a[20],b[20],q[20],c[]="envelope",p[]="teapot",d[]="smiles";
printf("lets start the quizzz...!!");
printf("\n\npress any key to continue..!");
scanf("%c",&z);
				printf("\n\nI start with E and\n end with the same letter\n and I contain a letter in me.....!!\n\n");
	gets(a);
strlwr(a);
if((strcmp(a,c))==0)
{
	printf("\n\ncorrect answer....!!!");
	count++;
}
else 
{
	printf("\n\noops!wrong answer...");
}
printf("\n\nI start with T end with T and always contain T in me...!!\n\n");
gets(b);
strlwr(b);
if((strcmp(b,p))==0)
{
	printf("\n\ncorrect answer");
	count++;
}
else
{
	printf("\n\noops!!wrong answer");
}
printf("\n\nI am the longest word of english...!\n\n");

gets(q);
strlwr(q);

if((strcmp(q,d))==0)
{
	printf("\n\n ...correct answer..");
	count++;
}
	else
{
	printf("\n\noops..!wrong answer");
}
printf("\n\nwhat is the first word you saw in the main menu");
gets(n);
strlwr(n);

if((strcmp(n,t))==0)
{
	printf("\n\ncorrect answer..");
	count++;
}
else
{
	printf("\n\nwrong answer");
}
printf("\n\n\n\nknow your total score...press any no....");
scanf("%d",&i);
printf("\n\n\nyour total score is\n\n ....:%d",(count*10));
if(count>=3)
{
	printf("...\n...genious...");
}
else if(count==0)
{
	printf("..\n\n.improve lateral thinking..");
}
else
{
	printf("\ngood try.....!!");
	printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n Hope you enjoyed brain teasers.....");
	printf("\n------------------------------------");
	printf("\n thank you \n - satya and niharika");
} 				
   	}
   void logic6()
    {
    	printf("\n\t Thank you  \n \n\t Niharika and Satya......  ");
    }
