#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int x,cmp,flag=0,tot,it,jt,h1,l[10],pte,ptf,ptp,d[10],p[10],f[5],fo,f1,fo1,temp,temp1,g[5],g1[5],co[5]
,co1[5],temp2,temp3,gp,gp1,gc,gc1,pos,pos1;
float total;
char a[5][20],a1[30],a2[30];
int i,j=0,k,b[5][5][3];
clrscr();
printf("You are using match prediction tool!\n\n");
printf("To use this tool,press 1 or press 0 to exit\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
break;
else if(d[i]==0)
exit(0);
else
{
 clrscr();
 printf("Invalid entry.\n\n");
 printf("Press 1 to continue or 0 to exit:\n");
                }
}
clrscr();
printf("By using this tool you can calculate your team's chances of winning a match\nagainst an opponent.\n\n");
printf("Press 1 to continue and 0 to exit.\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
break;
else if(d[i]==0)
exit(0);
else
{
clrscr();
printf("Invalid entry.\n\n");
printf("Press 1 to continue or 0 to exit:\n");
}
}
clrscr();
printf("With the entry of simple statistics in this tool,the percentage of winning is\ncalculated.\n\n");
printf("Press 1 to continue and 0 to exit:\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
break;
else if(d[i]==0)
exit(0);
else
{
clrscr();
printf("Invalid entry.\n\n");
printf("Press 1 to continue or 0 to exit:\n");
}
}
clrscr();			//Team versus record along with team names is to be entered
printf("We first begin by entering the versus record of 5 teams for the last 15 matches\n\n");
for(i=0;i<5;i++)
{
printf("Enter team %d's name without spaces\n",i+1);
scanf("%s",a[i]);
if(i>0)
               {
              		  for(j=i-1;j>=0;j--)
                 	{
     			cmp=strcmp(a[i],a[j]);
                    				if(cmp==0)
                    				{
                    				 	printf(“Team name entered already!\n”);
                                                                        printf(“Enter different team’s name this time!\n”);
                                                                        flag=1;
                      					break;
                      				}
              }
          }
              
                if(flag==1)
             	  {
              		i--;
              		flag=0;
              		continue;
              	       }		
}

clrscr();
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
printf("Enter team %s vs %s record for 15 matches:\n",a[i],a[j]);
for(k=0;k<3;k++)              //Assignment of points to wins and draws
{
if(k==0)
{
printf("Enter the losses\n");
scanf("%d",&b[i][j][k]);
b[j][i][2]=b[i][j][0];
    }
 
if(k==1)
 {
                                                                          	printf("Enter the draws\n");
                                                                          	scanf("%d",&b[i][j][k]);
                                                                          	b[j][i][2]=b[i][j][0];
                     }
                                                          
                                                           if(k==2)
{
       printf("Enter the wins\n");
       scanf("%d",&b[i][j][k]);
       b[j][i][2]=b[i][j][0];
       clrscr();
}
tot=b[i][j][0]+b[i][j][1]+b[i][j][2];
}
if(tot!=15)
     {
                 printf("Enter correct record of last fifteen matches!\n\n");
                 j--;
                continue;
      }
}
}
re:clrscr();
printf(“The list of team’s are:\n”);
for(i=0;i<5;i++)
printf(“%d.%s\n”,i+1,a[i]);
for(i=0;i<10;i++)
{
printf("Enter your team's name without spaces:\n");    //User’s and opponent team’s name is to be entered 
scanf("%s",a1);
for(i=0;i<10;i++)
{
	x=strcmp(a1,a[i]);
	if(x==0)
	{
		it=i;
		goto ft;
	}
}
i=-1;
printf("Enter valid team name!\n\n");
continue;
}
ft:for(i=0;i<10;i++)
{
cmd:printf("Enter opponent team's name without spaces:\n");
scanf("%s",a2);
if(strcmp(a1,a2)==0)
{
printf(“Cannot have two teams playing against each other!\n”);
goto cmd;
}
for(i=0;i<10;i++)
{
		x=strcmp(a2,a[i]);
		  if(x==0)
		{
			jt=i;
			goto st;
		}
}
i=-1;
printf("Enter valid team name!\n\n");
continue;
}
st:clrscr();
for(i=0;i<15;i++)
{
if(b[it][jt][1]==i)
{
pte=i;
break;
}
}
for(i=0;i<15;i++)
{
if(b[it][jt][2]==i)
{
pte=pte+2*i;
break;
}
}
printf("Press 1 to continue and 0 to exit:\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
break;
else if(d[i]==0)
exit(0);
else
{
clrscr();
printf("Invalid entry.\n\n");
printf("Press 1 to continue or 0 to exit:\n");
}
}
clrscr();
printf("Is your team playing at home or away?\n\n");     //Home or away specification of user’s team
for(i=0;i<10;i++)
{
printf("Press 1 for home and 2 for away:\n");
scanf("%d",&l[i]);
if(l[i]==1)
{
h1=2;
goto go;
}
else if(l[i]==2)
{
h1=0;
goto go;
}
else
{
clrscr();
printf("Invalid data!\n\n");
}
}
go:clrscr();
printf("Great!\n");
printf("Press 1 to continue and 0 to exit:\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
break;
else if(d[i]==0)
exit(0);
else
{
clrscr();
printf("Invalid entry.\n\n");
printf("Press 1 to continue or 0 to exit:\n");
}
}
clrscr();
printf("Now,since we are done with the easy part,we now get on with some serious\nstatistics.");
printf("Formations to be precise.\n\n");
printf("Press 1 to continue and 0 to exit:\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
break;
else if(d[i]==0)
exit(0);
else
{
clrscr();
printf("Invalid entry.\n\n");
printf("Press 1 to continue or 0 to exit:\n");
}
}
clrscr();
printf("Since you are a novice when it comes to football,this tool will guide you\nthrough the tactical part of formations.");
printf("Lets get started!\n\n");
printf("Press 1 to continue and 0 to exit:\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
break;
else if(d[i]==0)
exit(0);
else
{
clrscr();
printf("Invalid entry.\n\n");
printf("Press 1 to continue or 0 to exit:\n");
}
}
clrscr();		//Details of various formations
printf("The list of formations you could choose from are:\n");
printf("1.(4-3-3) 2.(4-2-2-2) 3.(4-2-3-1) 4.(4-5-1) 5.(4-4-2)\n");
printf("The technical aspects of the formations are given below.\n\n");
printf("4-3-3 is a formation that is chosen when the team playes a lot of passes,in\nother words the team presses a lot on the opponents when they lose possession.\n\n");
printf("4-2-2-2 is a pure attacking formation,if your team just loves to go forward all the time,then this is your formation.\n\n");
printf("4-2-3-1 is a formation similar to the 4-3-3 formation without the relentless\npressing on opponents when you lose the ball.\n\n");
printf("4-5-1 is a counter attacking formation.\n\n");
printf("4-2-2 is formation for teams who adopt a total football kind of philosophy,\nwherein most of the play goes around in the pockets of space near the wings.\n");
printf("Now that you have your formation in mind,we proceed further.\n\n");
printf("Press 1 to continue and 0 to exit:");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
break;
else if(d[i]==0)
exit(0);
else
{
clrscr();
printf("Invalid entry.\n\n");
printf("Press 1 to continue or 0 to exit:\n");
}	
}
clrscr();
printf("Now,if your formation is 4-3-3,enter 433.And if lets say your formation is\n4-2-3-1,enter 4231.\n\n");
printf("Enter the formation in the above format:\n");
for(i=0;i<5;i++)
{
scanf("%d",&f[i]);
switch(f[i])
{
case 433:clrscr();
	 	printf("Nice!\n\n");
	 	printf("You have selected 4-3-3.\n\n");
	 	fo1=f[i];
	 	goto abc1;

case 4222:clrscr();
	  	printf("Nice!\n\n");
	  	printf("You have selected 4-2-2-2.\n\n");
	  	fo1=f[i];
	  	goto abc1;

case 4231:clrscr();
	  	printf("Nice!\n\n");
	  	printf("You have selected 4-2-3-1.\n\n");
	  	fo1=f[i];
	  	goto abc1;

case 451:clrscr();
	 	printf("Nice!\n\n");
	 	printf("You have selected 4-5-1.\n\n");
	 	fo1=f[i];
	 	goto abc1;

case 442:clrscr();
	 	printf("Nice!\n\n");
	 	printf("You have selected 4-4-2.\n\n");
	 	fo1=f[i];
	 	goto abc1;

default:printf("\nEnter correct formation!\n");
		printf("The list of formations you could choose from are:\n");
		printf("1.(4-3-3) 2.(4-2-2-2) 3.(4-2-3-1) 4.(4-5-1) 5.(4-4-2)\n\n");
		printf("Enter formation:\n");
}
}
abc1:printf("Press 1 to proceed further and 0 to exit.\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
break;
else if(d[i]==0)
exit(0);
else
{
clrscr();
printf("Invalid entry.\n\n");	
printf("Press 1 to continue or 0 to exit:\n");
}
}
clrscr();
printf("Enter the number of goals scored in the last 5 matches:\n");      //No of goals scored is to be entered
for(i=0;i<5;i++)
{
scanf("%d",&g[i]);

if(g[i]>30) 
{
clrscr();
printf("Enter correct data!\n\n");
printf("Enter the number of goals scored in the last 5 matches correctly this time:\n");
}
else if(g[i]<0)
{
clrscr();
printf("Enter valid data!\n");
printf("Enter the number of goals scored in the last 5 matches,correctly this time:\n");
}
else
{
temp=g[i];
break;
}
}
if(temp>25)            //Assignment of points according to the number of goals scored
gp=8;
else if(temp>20)
gp=5;
else if(temp>15)
gp=3;
else if(temp>10)
gp=3;
else if(temp>5)
gp=2;
else if(temp>=0)
gp=1;
clrscr();      //Goals conceded to be entered
printf("Now,enter the number of goals conceded in the last 5 matches:\n");
for(i=0;i<5;i++)
{
scanf("%d",&co[i]);
if(co[i]>30)
{
clrscr();
printf("Please enter correct data!\n");
printf("Enter the number of goals conceded in the last 5 matches:\n");	
}	
else if(co[i]<0)
{
clrscr();
printf("Enter valid data!\n");
printf("Enter the number of goals conceded in the last 5 matches:\n");
}
else
{
temp1=co[i];
break;
}
}
if(temp1>25)            // Assignment of points according to the number of goals conceded
gc=1;
else if(temp1>20)
gc=2;
else if(temp1>15)
gc=3;
else if(temp1>10)
gc=3;
else if(temp1>5)
gc=5;
else if(temp1>=0)
gc=8;
clrscr();
printf("The number of teams in the league are 20.\n");   //Position in the table
printf("Enter team's postion:\n");
for(i=0;i<10;i++)
{
scanf("%d",&p[i]);
if((p[i]<=20)&&(p[i]>0))
{
pos=p[i];
break;
}
else
{
clrscr();
printf("Enter valid data!\n");
printf("Enter postion again:\n");
}
}
clrscr();
printf("Bravo!\n");
printf("You have successfully entered the 1st team's data!\n");
printf("Press 1 to continue and 0 to exit:\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
break;
else if(d[i]==0)
exit(0);
else
{
clrscr();
printf("Invalid entry.\n\n");
printf("Press 1 to continue or 0 to exit:\n");
}	
}
clrscr();
printf("Good!\n\n");            //Opponent team’s data entry
printf("The technical details of the various formations will be displayed once again foryour convenience.\n\n");
printf("4-3-3 is a formation that is chosen when the team playes a lot of passes,in\nother words the team presses a lot on the opponents when they lose possession.\n\n");
printf("4-2-2-2 is a pure attacking formation,if your team just loves to go forward all the time,then this is your formation.\n\n");
printf("4-2-3-1 is a formation similar to the 4-3-3 formation without the relentless\npressing on opponents when you lose the ball.\n\n");
printf("4-5-1 is a counter attacking formation.\n\n");
printf("4-2-2 is formation for teams who adopt a total football kind of philosophy,\nwherein most of the play goes around in the pockets of space near the wings.\n");
printf("Press 1 to continue and 0 to exit:\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
break;
else if(d[i]==0)
exit(0);
else
{
clrscr();
printf("Invalid entry.\n\n");
printf("Press 1 to continue or 0 to exit:\n");
}
}
clrscr();
printf("The formation should be entered in a way similar to that of the one\nentered for the 1st team.\n");
printf("Enter the formation of the 2nd team:\n");
for(i=0;i<5;i++)
{
scanf("%d",&f[i]);
switch(f[i])
{
case 433:clrscr();
		printf("Nice!\n\n");
	 	printf("You have selected 4-3-3.\n\n");
	 	fo=f[i];
	 	goto abc;

case 4222:clrscr();
	 	printf("Nice!\n\n");
	  	printf("You have selected 4-2-2-2.\n\n");
	  	fo=f[i];
	  	goto abc;

case 4231:clrscr();
	 		 printf("Nice!\n\n");
	  		printf("You have selected 4-2-3-1.\n\n");
	  		fo=f[i];
	  		goto abc;

case 451:clrscr();
	 		printf("Nice!\n\n");
	 		printf("You have selected 4-5-1.\n\n");
	 		fo=f[i];
	 		goto abc;

case 442:clrscr();
	 		printf("Nice!\n\n");
	 		printf("You have selected 4-4-2.\n\n");
	 		fo=f[i];
	 		goto abc;

default:printf("\nEnter correct formation!\n");
		            printf("The list of formations you could choose from are:\n");
		            printf("1.(4-3-3) 2.(4-2-2-2) 3.(4-2-3-1) 4.(4-5-1) 5.(4-4-2)\n\n");
		            printf("Enter formation:\n");

}
}
abc:printf("Press 1 to continue and 0 to exit:\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
break;
else if(d[i]==0)
exit(0);
else
{
clrscr();
printf("Invalid entry.\n\n");
printf("Press 1 to continue or 0 to exit:\n");
}
}
clrscr();
switch(fo1)              //Comparison of formations and assignment of points
{
case 433:{
	  	switch(fo)
	 	{
	  		case 433:{
ptf=2;
		   			goto t4;
  }
	  		
                                           case 4222:{
ptf=3;
		   			goto t4;
    }
	  		
                                             case 451:{
ptf=2;
		  			goto t4;
  }
	  
case 4231:{	
                               ptf=2;
		   			  goto t4;
                                                             }

	 		 case 442:{
ptf=3;
		   			goto t4;
  }
	   }
}

case 4222:{
	   	switch(fo)
	  	{
	  		case 433:{
ptf=2;
		   			goto t4;
  }

	  		case 4222:{	
ptf=2;
		   			goto t4;
   }
	  
case 451:{
ptf=3;
		  			goto t4;
  }
	  		
case 4231:{
ptf=2;
		   			goto t4;
    }
	  
case 442:{
ptf=2;
		   			goto t4;
  }
	   }
}

case 451:{
	   	switch(fo)
	 	{
	  		case 433:{
ptf=3;
		   			goto t4;
}
	  
case 4222:{
ptf=3;
		   			goto t4;
    }
	  		case 451:{
ptf=2;
		  			goto t4;
}
	  
case 4231:{
ptf=2;
		   			goto t4;
     }
	  
case 442:{
ptf=2;
		   			goto t4;
}
	   }
}

case 4231:{
	    switch(fo)
	 	{
	  		case 433:{
ptf=3;
		   			goto t4;
}
	  
case 4222:{
ptf=3;
		   			goto t4;
   }

	  		case 451:{
ptf=2;
		  			goto t4;
  }

	  		case 4231:{
ptf=2;
		   			goto t4;
   }

			case 442:{
ptf=2;
		   			goto t4;
}
	   }
}

case 442:{
	  	switch(fo)
	 	{
	  		case 433:{
ptf=2;
		   			goto t4;
}
	  
case 4222:{
ptf=3;
		   			goto t4;
   }
	  		
case 451:{
ptf=2;
		  			goto t4;
  }
	  		
case 4231:{
ptf=2;
		   			goto t4;
      }
	  
case 442:{
ptf=2;
		   			goto t4;
  }
	   }
     }
}
t4:clrscr();
printf("Now,enter the number of goals scored in the last 5 matches:\n");
for(i=0;i<5;i++)
{
scanf("%d",&g1[i]);
if(g1[i]>30)
{
printf("Enter correct data please!\n");
printf("Enter the number of goals scored in the last 5 matches:\n");
}
else if(g1[i]<0)
{
printf("Enter valid data!\n");
printf("Enter the number of goals scored in the last 5 matches:\n");
}
else
{
temp2=g1[i];
break;
}
}
if(temp2>25)
gp1=8;
else if(temp2>20)
gp1=5;
else if(temp2>15)
gp1=3;
else if(temp2>10)
gp1=3;
else if(temp2>5)
gp1=2;
else if(temp2>=0)
gp1=1;
clrscr();
printf("Enter the number of goals conceded in the last 5 matches:\n");
for(i=0;i<5;i++)
{
scanf("%d",&co1[i]);
if(co1[i]>30)
{
clrscr();
printf("Please enter correct data!");
printf("Enter the number of goals conceded in the last 5 matches:\n");
}
else if(co1[i]<0)
{
clrscr();
printf("Enter valid data!");
printf("Enter the number of goals conceded in the last 5 matches:\n");
}
else
{
temp3=co1[i];
break;
}
}
if(temp3>25)
gc1=1;
else if(temp3>20)
gc1=2;
else if(temp3>15)
gc1=3;
else if(temp3>10)
gc1=3;
else if(temp3>5)
gc1=5;
else if(temp3>=0)
gc1=8;
clrscr();
printf("You are one step away from getting the result!\n");
printf("Enter 2nd team's position in the table where the number of teams are 20.\n");
printf("Enter postion:\n");
for(i=0;i<10;i++)
{
scanf("%d",&p[i]);
if((p[i]<=20)&&(p[i]>0))
{
pos1=p[i];
break;
}
else
{
clrscr();
printf("Enter valid data!\n\n");
printf("Enter 2nd team's position:\n");
}
}
clrscr();                       //Comparison of positions and assignment of points
if((pos>0)&&(pos<=5))
{
if((pos1>0)&&(pos1<=5))
ptp=1;
else if((pos1>5)&&(pos1<=10))
ptp=2;
else if((pos1>10)&&(pos1<=15))
ptp=3;
else
ptp=4;
}
else if((pos>5)&&(pos<=10))
{
if((pos1>0)&&(pos1<=5))
ptp=0;
else if((pos1>5)&&(pos1<=10))
ptp=1;
else if((pos1>10)&&(pos1<=15))
ptp=1;
else
ptp=2;
}

else if((pos>10)&&(pos<=15))
{
if((pos1>0)&&(pos1<=5))
ptp=0;
else if((pos1>5)&&(pos1<=10))
ptp=1;
else if((pos1>10)&&(pos1<=15))
ptp=1;
else
ptp=2;
}

else if((pos>15)&&(pos<=20))
{
if((pos1>0)&&(pos1<=5))
ptp=0;
else if((pos1>5)&&(pos1<=10))
ptp=0;
else if((pos1>10)&&(pos1<=15))
ptp=0;
else
ptp=1;
}
clrscr();
printf("Congratulations!\n");
printf("You have successfully provided all the data required for the tool to process andgive the result!\n\n");
printf("Press 1 to get the result or 0 to exit:\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
break;
else if(d[i]==0)
exit(0);
else
{
clrscr();
printf("Invalid entry.\n\n");
printf("Press 1 to continue or 0 to exit:\n");
}
}
clrscr();
total=h1+pte+ptf+gp-gp1-gc+gc1+ptp;     //The result is computed
total=total/30;
total=total*100;
printf("%s has %.2f percent chance of winning against %s\n\n",a[it],total,a[jt]);
printf("\t\t\tThank you for using MPT!!!\n\n\n");
printf("Press 1 to continue using MPT by selecting other teams or\npress 0 to exit:\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
if(d[i]==1)
goto re;
else if(d[i]==0)
exit(0);
else
{
printf("Invalid entry!\n\n");
printf("Press 0 to exit:\n");
}
}
getch();
}
