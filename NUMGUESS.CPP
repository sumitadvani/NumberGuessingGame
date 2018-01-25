#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
clrscr();
int i,j;
char intr[]="#Created By:-";
 char name[]="SUMIT ADVANI";
 textcolor(15);
 gotoxy(29,11);

	for(i=0;intr[i]!='\0';i++)
	{
		cout<<intr[i]<<" ";
		delay(300);
	}
 gotoxy(29,14);

	for(i=0;name[i]!='\0';i++)
	{
		textcolor(i+2);
		cprintf("%c",name[i]);
		cout<<" ";
		delay(300);
	}
 textcolor(15);
	for(i=1;i<=55;i++)
		{
			clrscr();
			gotoxy(1,10);
			textcolor(10);
			cprintf("Please wait loading ");
			for(j=1;j<=i;j++)
			{
				textcolor(9);
				cprintf("*");
				textcolor(15);
			}
			cout<<"\n "<<(i*100)/55<<"%";
			delay(100);
		}
clrscr();
cout<<"\n\n\n\n\n\n\n";

	for(i=0;i<80;i++)
	{
		textcolor(1);
		cprintf("*");
	}
 textcolor(15);
 cout<<"\n\n\t   ";
 textcolor(10+BLINK);
 cprintf("T H E   F A M O U S   N U M B E R   G U E S S I N G   G A M E ");
 cout<<"\n\n\n";
	for(i=0;i<80;i++)
	{
		textcolor(1);
		cprintf("*");
	}
 textcolor(15);
 delay(4000);
 clrscr();
 cout<<"\n\n";

	for(i=0;i<80;i++)
	{
		textcolor(1);
		cprintf("*");
	}
 textcolor(15);
 cout<<"\n\n\t   ";
 textcolor(10+BLINK);
 cprintf("R U L E S   O F   P L A Y I N G   T H E   G A M E ");
 cout<<"\n\n\n";
	for(i=0;i<80;i++)
	{
		textcolor(1);
		cprintf("*");
	}
 cout<<"\n";
 textcolor(15);
 cout<<"-----------------------------------------------------------------\n";
 cout<<"|                                                               |\n";
 cout<<"|   1.  You must choose the number between 1 & 10.		|\n";
 cout<<"|   2.  You will get only three chances for one game.    	|\n";
 cout<<"|                                                               |\n";
 cout<<"-----------------------------------------------------------------";
 cout<<"\n\n\nPress any key...";
 getch();
clrscr();
int n,choose;
char ch='y';
randomize();
while(ch=='y'||ch=='Y')
{
choose=random(10)+1;
for(i=0;i<3;i++)
{
clrscr();
cout<<"\nEnter the no. between 1 to 10 that computer have chosen already :\n";
cin>>n;
	if(n==choose)
	{
		textcolor(3+BLINK);
		cout<<"\n\n\t\t";
		cprintf(">>> C O N G R A T S <<<");
		cout<<"\n\n\t\t";
		cprintf("!!! You have won this game !!!");
		cout<<"\n\n\t\tW A I T ...";
		delay(2000);
		textcolor(15);
		break;
	}
	else
	{
		textcolor(12+BLINK);
		cout<<"\n\n\t\t";
		cprintf(">>> S O R R Y <<<");
		cout<<"\n\n";
		cout<<"\t\t";
		cprintf("!!! Try again !!!");
		cout<<"\n\nW A I T ...";
		delay(2000);
		textcolor(15);
	}

}
clrscr();
	if(i==3)
	{
		textcolor(12+BLINK);
		cout<<"\n\n\t\t";
		cprintf(">>> S O R R Y <<<");
		cout<<"\n\n";
		cout<<"\n\n\t";
		cprintf("!!! Try again later in next game !!!");
		cout<<"\n\nW A I T ...";
		textcolor(15);
	}
delay(2000);
clrscr();
cout<<"\n\nWant to play more games:...(y/n)...\n";
cin>>ch;
}
textcolor(11);
cout<<"\n\n\n\t\t\t";
cprintf("...THANK YOU...");
cout<<"\n\n\t\t\t";
cprintf("! FOR PLAYING !");
textcolor(15);
getch();
}