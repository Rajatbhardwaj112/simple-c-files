#include<conio.h>
#include<string.h>
#include<bios.h>
#include<iostream.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip.h>


void starting()
{
	clrscr();
	int i,j;
	textbackground(BLACK);
	textcolor(YELLOW);
	clrscr();
	delay(100);
	for (i=2,j=63;j>68,i<28;i++,j--)
	{
		delay(100);
		gotoxy(i,8);
		cputs(" RAJAT BHARDWAJ ");




	}
	textcolor(CYAN+BLINK);
	gotoxy(36,21);
		cputs(" PRESENTS " );


		{
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(700);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(900);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(700);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(400);
			delay(100);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(700);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(900);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(600);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(700);
			delay(200);
			nosound();
			sound(7);
			delay(200);
			nosound();
			sound(400);
			delay(200);
			nosound();

			}
}
void scan()
{
	textbackground(BLUE);
	cout<<"a";
	clrscr();
	for(int i=0;i<80;i++)
	for(int j=0;j<25;j++)
	{
		gotoxy(j,i);
		cputs(" ");
	}

	textcolor(11);
	gotoxy(6,3);
	cputs("UNAUTHORISED ACCESS ");
	gotoxy(6,4);
	textcolor(11);
	cputs("??????????????????????????????????????????????????????????????????????");
	textcolor(7);
	gotoxy(7,5);
	cputs("A tresspasser detected                                      ");
	gotoxy(7,6);
	cputs("Shutting down all the power systems                         ");
	gotoxy(7,7);
	cputs("                                                            ");


	textbackground(BLUE);
	for(i=25;i<=80;i++)
	{
	gotoxy(i,1);
	cputs(" ");
	gotoxy(i,2);
	cputs(" ");
	gotoxy(i,3);
	cputs(" ");
	gotoxy(i,8);
	cputs(" ");
	gotoxy(i+21,5);
	cputs(" ");
	gotoxy(i+21,7);
	cputs(" ");
	gotoxy(i+52,4);
	cputs(" ");
	gotoxy(i+50,6);
	cputs(" ");

	}

	textcolor(11);
	gotoxy(7,23);
	cputs("??????????????????????????????????????????????????????????????????????");
	textcolor(7);
	for(j=0;j<51;j++)
	{
	gotoxy(j+21,22);
	cputs("?");
	}
	textcolor(11);
	gotoxy(7,22);
	cputs("   % complete");
	textcolor(YELLOW);
	j=20;
	for(i=0;i<100;i++)
	{
	gotoxy(7,22);
	cout<<i;
	if(i%2==0)
	{
	j++;
	gotoxy(j,22);
	cputs("?");
	}
	delay(130);
	}
}

void error()
{
	textbackground(BLUE);
	int i,j;

	for(i=0;i<40;i++)
	for(j=0;j<9;j++)
	{
		gotoxy(i+15,j+8);
		cputs(" ");
	}

	textcolor(15);
	for(i=0;i<40;i++)
	 {
		 gotoxy(i+15,8);
		 cputs("?");
		 gotoxy(i+15,17);
		 cputs("?");
		 gotoxy(i+25,8);
		 cputs("?");
		 gotoxy(i+25,17);
		 cputs("?");

		  if(i<9)
		  {
			gotoxy(15,i+8);
			cputs("?");
			gotoxy(65,i+8);
			cputs("?");
		  }

		  if(i==0)
		  {
			gotoxy(15,8);
			cputs("?");
			gotoxy(15,17);
			cputs("?");
		  }

		  if(i==39)
		  {
			gotoxy(65,8);
			cputs("?");
			gotoxy(65,17);
			cputs("?");
		  }
	 }
	 gotoxy(16,9);
	 cputs("A Tresspasser Has Tried To Hack The System  ");
	 gotoxy(16,10);
	 cputs("     So The System Will Shut Down.               ");
	 gotoxy(16,12);
	 cputs("It is highly advisable that you backup your hard ");
	 gotoxy(16,13);
	 cputs("      disk before the power off.                 ");

	 textbackground(BLUE);
	 for(i=55;i<65;i++)
	  {
	  gotoxy(i,11);
	  cputs(" ");
	  gotoxy(i,14);
	  cputs(" ");
	  gotoxy(i,15);
	  cputs(" ");
	  gotoxy(i,16);
	  cputs(" ");
	  }
	 textcolor(BLUE);
	 for(i=9;i<19;i++)
	  {
	  gotoxy(66,i);
	  cputs("?");
	  }
	 for(i=17;i<66;i++)
	  {
		gotoxy(i,18);
		cputs("?");
	  }
	 int K;
	  ss:
	 textcolor(WHITE);
	 gotoxy(37,15);
	 textbackground(BLACK);
	 cputs("  OK  ");
	 K=bioskey(0);
	 if(K!=7181)
	 goto ss;
}

	void torture()
{
	clrscr();
	char file[30],disc[50];
	int i=0,j=0,l;

	textbackground(BLUE);
	for(i=0;i<80;i++)
	for(j=0;j<25;j++)
	{
		gotoxy(j,i);
		cputs(" ");
	}
	textbackground(BLUE);
	for(i=30;i<80;i++)
	for(j=0;j<10;j++)
	{
		gotoxy(j,i);
		cputs(" ");
	}
	textbackground(LIGHTRED);
	for(i=15;i<56;i++)
	for(j=7;j<17;j++)
	{
		gotoxy(i,j);
		cputs(" ");
	}
	textcolor(BLACK);
	for(i=8;i<17;i++)
	 {
		gotoxy(55,i);
		cputs("?");
	 }
	for(i=16;i<55;i++)
	 {
		 gotoxy(i,16);
		 cputs("?");
	 }


	textcolor(WHITE);
	 for(l=0;l<9;l++)
	 {
		 if(l==0)
		{
		  strcpy(file,"System");
		  strcpy(disc,"logo.sys,LOGOS.SYS,msconfig.exe...");
		}
	 if(l==1)
	  {
		  strcpy(file,"Screen Savers..");
		  strcpy(disc,"Nature.scr,Boing.scr,3D Text..");
	  }
	 if(l==2)
	  {
		  strcpy(file,"Program Files..");
		  strcpy(disc,"ACDSee,Winamp,MusicMatch Jukebox,IE.");
	  }
	 if(l==3)
	  {
		  strcpy(file,"Music Files-mp3..");
		  strcpy(disc,"Backstreet Boys,Westlife,MLTR.");
	  }
	 if(l==4)
	  {
		  strcpy(file,"Pictures..");
		  strcpy(disc,"Bollywood,Hollywood,Singers,Westers");
	  }
	 if(l==5)
	  {
		  strcpy(file,"Games..");
		  strcpy(disc,"Cricket,Delta Force,Tomb Raider...");
	  }
	 if(l==6)
	  {
		strcpy(file,"C++ Files..");
		strcpy(disc,"Turboc C++, Project.cpp... ");
	  }
	 if(l==7)
	  {
		  strcpy(file,"Personal Files..");
		  strcpy(disc,"*.doc,*.jpg,*.txt,*.all...");
	  }
	 if(l==8)
	  {
		  strcpy(file,"Cleaning All..");
		  strcpy(disc,"*.* ALL...");
	  }

	 gotoxy(15,7);
	 cputs("?????????????????????????????????????????");
	 gotoxy(15,8);
	 cputs("? CREATING BACKUP.......                 ?");
	 gotoxy(15,9);
	 cputs("?                                        ?");
	 gotoxy(15,10);
	 cputs("?                                        ?");
	 gotoxy(15,11);
	 cputs("?			      % complete ?");
	  gotoxy(15,12);
	 cputs("?                                        ?");
	 gotoxy(15,13);
	 cputs("?                                        ?");
	 gotoxy(15,14);
	 cputs("?                                        ?");
	 gotoxy(15,15);
	 cputs("?????????????????????????????????????????");
	 textcolor(LIGHTGRAY);	//201? 187? 200? 188? 186? 205? 202? 203? 204? 185?206?
	for(j=0;j<23;j++)
	  {
		  gotoxy(j+17,11);
		  cputs("?");
	  }

	textcolor(WHITE);
	gotoxy(51,8);
	cout<<"   ?  ";
	textcolor(WHITE);
	gotoxy(18,10);
	cputs(file);
	gotoxy(18,13);
	cputs(disc);
	textbackground(BLUE);
	for(i=0;i<80;i++)
	{
		gotoxy(i,1);
		cputs(" ");
	}


	textcolor(YELLOW);
	for(j=0;j<23;j++)
	  {
	  textbackground(RED);
	  gotoxy(j+17,11);
	  cputs("?");
	  delay(140);
	  gotoxy(24+17,11);
	  cout<<j*4;
	  }
	//*/
	textcolor(WHITE);
    }
	textbackground(LIGHTGRAY);
	for(i=7;i<64;i++)
	for(j=8;j<15;j++)
	 {
		 gotoxy(i,j);
		 cputs(" ");
	 }
	 gotoxy(7,8);
	 cout<<"???????????????????????????????????????????????????????";
	 gotoxy(7,9);
	 cout<<"?             Now all your files been saved .          ?";
	 gotoxy(7,10);
	 cout<<"?                         ENJOY!                       ?";
	 gotoxy(7,11);
	 cout<<"?                 BETTER LUCK NEXT TIME                ?";
	 gotoxy(7,12);
	 cout<<"?						       ?";
	 gotoxy(7,13);
	 cout<<"?						       ?";
	 gotoxy(7,14);
	 cout<<"???????????????????????????????????????????????????????";

	 int K;
	 ss:
	 textcolor(WHITE);
	 gotoxy(32,12);
	 textbackground(BLACK);
	 cputs("  OK  ");
	 K=bioskey(0);
	 if(K!=7181)
	 goto ss;

}
void con()
{
	clrscr();
	 textbackground(BLUE);
	 int i,j;
	 for(i=0;i<80;i++)
	 for(j=0;j<25;j++)
	 {
		 gotoxy(i,j);
		 cputs(" ");
	 }
}


//end of the functions and definitions of virus
int aut(int);
int au(int);
int bl(int);
void col1();
int in(int);
void col();
int vic(int,int);
void doc();
void close();
int dic(char,char,char,char,char);
int ino(int);
int inn(int);
void das();
void de(char);
void de2(char);
void pre(int);

void das()
{
	clrscr();
	cout<<"\n\n"<<setw(45)<<"NOTS & CROSSESS\n"<<setw(46)<<"The gaming software";
}


void doc()
{
	clrscr();
	cout<<setw(45)<<"NOTS & CROSSESS\n"<<setw(46)<<"The gaming software";
}



int ino(int d)
{
	char a;
	gotoxy(1,d);
	cputs("Enter your choice:");
	row:
	cin>>a;
	switch(a)
	{
		case '1':gotoxy(27,6);break;
		case '2':gotoxy(35,6);break;
		case '3':gotoxy(43,6);break;
		case '4':gotoxy(27,9);break;
		case '5':gotoxy(35,9);break;
		case '6':gotoxy(43,9);break;
		case '7':gotoxy(27,12);break;
		case '8':gotoxy(35,12);break;
		case '9':gotoxy(43,12);break;
	default:{
		gotoxy(1,15);
		cout<<"Wrong Choice!! Enter again:";
		goto row;
		}
	}
	cputs("O");
	return(a);
}

int inn(int d)
{
	char a;
	gotoxy(60,d);
	cputs("Enter your choice:");
	raw:
	cin>>a;
	switch(a)
	{
		case '1':gotoxy(27,6);break;
		case '2':gotoxy(35,6);break;
		case '3':gotoxy(43,6);break;
		case '4':gotoxy(27,9);break;
		case '5':gotoxy(35,9);break;
		case '6':gotoxy(43,9);break;
		case '7':gotoxy(27,12);break;
		case '8':gotoxy(35,12);break;
		case '9':gotoxy(43,12);break;
	default:{gotoxy(50,15);cout<<"Wrong Choice!! Enter again:";goto raw;}
	}
	cputs("X");
	return(a);
}


int aut(int a)
{
	switch(a)
	{
		case 1:gotoxy(27,6);
		break;
		case 2:gotoxy(35,6);
		break;
		case 3:gotoxy(43,6);
		break;
		case 4:gotoxy(27,9);
		break;
		case 5:gotoxy(35,9);
		break;
		case 6:gotoxy(43,9);
		break;
		case 7:gotoxy(27,12);
		break;
		case 8:gotoxy(35,12);
		break;
		case 9:gotoxy(43,12);
		break;
		case 13:{gotoxy(3,17);cout<<"You Won. Human supemacey still existing!!!";}
	default:{cout<<"Wrong Choice!! Get out@#$%&*!";exit(0);}
	}
	cputs("O");
	return(0);
}


int au(int a)
{
	delay(300);
	switch(a)
	{
		case 1:gotoxy(27,6);break;
		case 2:gotoxy(35,6);break;
		case 3:gotoxy(43,6);break;
		case 4:gotoxy(27,9);break;
		case 5:gotoxy(35,9);break;
		case 6:gotoxy(43,9);break;
		case 7:gotoxy(27,12);break;
		case 8:gotoxy(35,12);break;
		case 9:gotoxy(43,12);break;
		case 13:{gotoxy(3,17);cout<<"You Won. Human supemacey still existing!!!";}
		default:{cout<<"Wrong Choice!! Get out@#$%&*!";exit(0);}
	}
	cputs("X");
	gotoxy(72,3);
	cputs("I play ");
	cout<<a;
	return(0);
}


int bl(int b)
{
	switch(b)
	{
		case 1:gotoxy(27,6);break;
		case 2:gotoxy(35,6);break;
		case 3:gotoxy(43,6);break;
		case 4:gotoxy(27,9);break;
		case 5:gotoxy(35,9);break;
		case 6:gotoxy(43,9);break;
		case 7:gotoxy(27,12);break;
		case 8:gotoxy(35,12);break;
		case 9:gotoxy(43,12);break;
		default:{cout<<"Wrong Choice!! Get out@#$%&*!";exit(0);}
	}
	cputs("O");
	gotoxy(1,15);
	cputs("Remaining Move is ");
	cout<<b;
	gotoxy(1,16);
	cputs("All moves over");
	gotoxy(1,17);
	cputs("Its a draw!");
	gotoxy(1,18);
	return(0);
}


int in(int d)
{
	int a;
	gotoxy(1,d);
	cputs("Enter your choice:");
	cin>>a;
	switch(a)
	{
		case 1:gotoxy(27,6);break;
		case 2:gotoxy(35,6);break;
		case 3:gotoxy(43,6);break;
		case 4:gotoxy(27,9);break;
		case 5:gotoxy(35,9);break;
		case 6:gotoxy(43,9);break;
		case 7:gotoxy(27,12);break;
		case 8:gotoxy(35,12);break;
		case 9:gotoxy(43,12);break;
		case 13:{gotoxy(3,17);cout<<"You Won. Human supemacey still existing!!!";
		getch();exit(0);}
		default:{cout<<"Wrong Choice!! Get out@#$%&*!";exit(0);}
	}
	cputs("O");
	return(a);
}


int vic(int a,int b)
{
	switch(b)
	{
		case 1: textcolor(WHITE+BLINK);
			gotoxy(27,6);
			cputs("X");
			gotoxy(35,6);
			cputs("X");
			gotoxy(43,6);
			cputs("X");
			break;
		case 2: textcolor(WHITE+BLINK);
			gotoxy(27,9);
			cputs("X");
			gotoxy(35,9);
			cputs("X");
			gotoxy(43,9);
			cputs("X");
			break;
		case 3:	textcolor(WHITE+BLINK);
			gotoxy(27,12);
			cputs("X");
			gotoxy(35,12);
			cputs("X");
			gotoxy(43,12);
			cputs("X");
			break;
		case 4: textcolor(WHITE+BLINK);
			gotoxy(27,6);
			cputs("X");
			gotoxy(27,9);
			cputs("X");
			gotoxy(27,12);
			cputs("X");
			break;
		case 5: textcolor(WHITE+BLINK);
			gotoxy(35,6);
			cputs("X");
			gotoxy(35,9);
			cputs("X");
			gotoxy(35,12);
			cputs("X");
			break;
		case 6: textcolor(WHITE+BLINK);
			gotoxy(43,6);
			cputs("X");
			gotoxy(43,9);
			cputs("X");
			gotoxy(43,12);
			cputs("X");
			break;
		case 7: textcolor(WHITE+BLINK);
			gotoxy(27,6);
			cputs("X");
			gotoxy(35,9);
			cputs("X");
			gotoxy(43,12);
			cputs("X");
			break;
		case 8: textcolor(WHITE+BLINK);
			gotoxy(43,6);
			cputs("X");
			gotoxy(35,9);
			cputs("X");
			gotoxy(27,12);
			cputs("X");
			break;
		default:cout<<"Wrong choice";
		}
		textcolor(LIGHTGRAY);
		gotoxy(1,13);
		cputs("I play ");
		cout<<a;
		gotoxy(1,15);
		cputs("Bet ya..");
		gotoxy(1,16);
		cputs("The coputer has beaten the human");
		return (0);
}

void col1()
{

	for(int i=25;i<46;i++)
	{
		gotoxy(i,7);
		cputs("?");
	}
	for (i=25;i<46;i++)
	{
		gotoxy(i,10);
		cputs("?");
	}
	for (i=5;i<14;i++)
	{
		gotoxy(30,i);
		cputs("?");
	}
	for (i=5;i<14;i++)
	{
		gotoxy(40,i);
		cputs("?");
	}
	gotoxy(30,7);
	cputs("?");
	gotoxy(40,7);
	cputs("?");
	gotoxy(30,10);
	cputs("?");
	gotoxy(40,10);
	cputs("?");
	gotoxy(29,5);
	cputs("1");
	gotoxy(39,5);
	cputs("2");
	gotoxy(46,5);
	cputs("3");
	gotoxy(29,8);
	cputs("4");
	gotoxy(39,8);
	cputs("5");
	gotoxy(46,8);
	cputs("6");
	gotoxy(29,11);
	cputs("7");
	gotoxy(39,11);
	cputs("8");
	gotoxy(46,11);
	cputs("9");
}

void col()
{
	for(int i=24;i<47;i++)
	{
		gotoxy(i,7);
		cputs("?");
		gotoxy(i,10);
		cputs("?");
	}

	for(i=24;i<47;i++)
	{
		gotoxy(i,4);
		cputs("?");
		gotoxy(i,13);
		cputs("?");
	}

	for (i=4;i<14;i++)
	{
		gotoxy(31,i);
		cputs("?");
		gotoxy(40,i);
		cputs("?");
	}
	for(i=4;i<13;i++)
	{
		gotoxy(47,i);
		cputs("?");
		gotoxy(24,i);
		cputs("?");

	}
	gotoxy(31,7);
	cputs("?");
	gotoxy(40,7);
	cputs("?");
	gotoxy(31,10);
	cputs("?");
	gotoxy(40,10);
	cputs("?");
	gotoxy(47,4);
	cputs("?");
	gotoxy(24,4);
	cputs("?");
	gotoxy(47,13);
	cputs("?");
	gotoxy(24,13);
	cputs("?");
	gotoxy(31,13);
	cputs("?");
	gotoxy(40,13);
	cputs("?");
	gotoxy(31,4);
	cputs("?");
	gotoxy(40,4);
	cputs("?");
	gotoxy(24,7);
	cputs("?");
	gotoxy(24,10);
	cputs("?");
	gotoxy(47,7);
	cputs("?");
	gotoxy(47,10);
	cputs("?");
	gotoxy(30,5);
	cputs("1");
	gotoxy(39,5);
	cputs("2");
	gotoxy(46,5);
	cputs("3");
	gotoxy(30,8);
	cputs("4");
	gotoxy(39,8);
	cputs("5");
	gotoxy(46,8);
	cputs("6");
	gotoxy(30,11);
	cputs("7");
	gotoxy(39,11);
	cputs("8");
	gotoxy(46,11);
	cputs("9");

}

void close()
{
	int i,j;
	for(j=13,i=20;j>-1,i<50;j--,i++)
	{
		delay(70);
		gotoxy(i,6);
		cputs("?");
		gotoxy(i,13);
		cputs("?");
	}
	for(j=13;j>6;j--)
	{
		delay(70);
		gotoxy(19,j);
		cputs("?");
		gotoxy(49,j);
		cputs("?");
	}
	gotoxy(19,6);
	cputs("?");
	gotoxy(49,6);
	cputs("?");
	gotoxy(19,13);
	cputs("?");
	gotoxy(49,13);
	cputs("?");
	gotoxy (20,7);
	cputs("Thank");
	gotoxy (26,7);
	delay(250);
	cputs("you");
	gotoxy (30,7);
	cputs("for");
	delay(250);
	gotoxy(34,7);
	cputs("playing.");
	delay(250);
	gotoxy(20,9);
	cputs("Hope you enjoyed. ");
	gotoxy(20,20);


}

void de(char a)
{
	delay(1000);
	switch(a)
	{
		case '1':gotoxy(27,6);break;
		case '2':gotoxy(35,6);break;
		case '3':gotoxy(43,6);break;
		case '4':gotoxy(27,9);break;
		case '5':gotoxy(35,9);break;
		case '6':gotoxy(43,9);break;
		case '7':gotoxy(27,12);break;
		case '8':gotoxy(35,12);break;
		case '9':gotoxy(43,12);break;
		default:{gotoxy(50,15);cout<<"Wrong Choice!!";}
	}
	cputs("O");
}

void de2(char a)
{
	delay(1000);
	switch(a)
	{
		case '1':gotoxy(27,6);break;
		case '2':gotoxy(35,6);break;
		case '3':gotoxy(43,6);break;
		case '4':gotoxy(27,9);break;
		case '5':gotoxy(35,9);break;
		case '6':gotoxy(43,9);break;
		case '7':gotoxy(27,12);break;
		case '8':gotoxy(35,12);break;
		case '9':gotoxy(43,12);break;
		default:{gotoxy(3,15);cout<<"akjdfjadfj";delay(1000);cout<<"Wrong Choice!!";}
	}
	cputs("X");
}


int dic (char p,char q,char r,char s,char t)                          //HERE
{
	int m=0;
	if((p=='1')||(q=='1')||(r=='1')||(s=='1')||(t=='1'))
	 {
		 if((q=='2')||(p=='2')||(r=='2')||(s=='2')||(t=='2'))
		  {
			   if((r=='3')||(p=='3')||(q=='3')||(s=='3')||(t=='3'))
			   m=1;
		  }
		 else if(q=='4'||p=='4'||r=='4'||s=='4'||t=='4')
		  {
			   if(r=='7'||p=='7'||q=='7'||s=='7'||t=='7')
			   m=1;
		  }
		 else if(p=='5'||q=='5'||r=='5'||s=='5'||t=='5')
		  {
			   if(p=='9'||q=='9'||r=='9'||s=='9'||t=='9')
			   m=1;
		  }
	 }

	else if ((p=='2')||(q=='2')||(r=='2')||(s=='2')||(t=='2'))
	 {
		  if ((p=='5')||(q=='5')||(r=='5')||(s=='5')||(t=='5'))
		{
			if ((p=='8')||(q=='8')||(r=='8')||(s=='8')||(t=='8'))
			m=1;
		}
	}

	else if ((p=='3')||(q=='3')||(r=='3')||(s=='3')||(t=='3'))
	{
		if((p=='6')||(q=='6')||(r=='6')||(s=='6')||(t=='6'))
		{
			if((p=='9')||(q=='9')||(r=='9')||(s=='9')||(t=='9'))
			m=1;
		}
		else if((p=='5')||(q=='5')||(r=='5')||(s=='5')||(t=='5'))
		{
				if((p=='7')||(q=='7')||(r=='7')||(s=='7')||(t=='7'))
				m=1;
		}
	}

	else if((p=='4')||(q=='4')||(r=='4')||(s=='4')||(t=='4'))
	{
		if((p=='5')||(q=='5')||(r=='5')||(s=='5')||(t=='5'))
		{
			if((p=='6')||(q=='6')||(r=='6')||(s=='6')||(t=='6'))
			m=1;
		}
	}

	else if((p=='7')||(q=='7')||(r=='7')||(s=='7')||(t=='7'))
	{
		if((p=='8')||(q=='8')||(r=='8')||(s=='8')||(t=='8'))
		{
			if((p=='9')||(q=='9')||(r=='9')||(s=='9')||(t=='9'))
			m=1;
		}
	}
	return(m);
}

void pre (int a)
{
	switch(a)
	{
		case 4:{
		vic(8,3);
		break;
	}
	default:cout<<"";
	}
}
//end of nots and cross function definitions

void table()
{
	textcolor(LIGHTBLUE);
	textbackground(BLACK);
	cout<<"a";
	clrscr();
	cout<<setw(45)<<"PERIODIC TABLE"<<endl;
	cout<<setw(3)<<"1"<<setw(74)<<"2"<<endl;
	cout<<setw(3)<<"H"<<setw(76)<<"He\n"<<endl;
	cout<<setw(3)<<"3"<<setw(4)<<"4"<<setw(51)<<"5"<<setw(4)<<"6";
	cout<<setw(4)<<"7"<<setw(4)<<"8"<<setw(4)<<"9"<<setw(4)<<"10"<<endl;
	cout<<setw(4)<<"Li"<<setw(4)<<"Be"<<setw(50)<<"B"<<setw(4)<<"C";
	cout<<setw(4)<<"N"<<setw(4)<<"O"<<setw(4)<<"F"<<setw(4)<<"Ne"<<endl;
	cout<<setw(25)<<"            <---------Transitional Series--------->";
	cout<<endl;
	cout<<setw(4)<<"11"<<setw(4)<<"12"<<setw(50)<<"13"<<setw(4)<<"14";
	cout<<setw(4)<<"15"<<setw(4)<<"16"<<setw(4)<<"17"<<setw(4)<<"18";
	cout<<endl;
	cout<<setw(4)<<"Na"<<setw(4)<<"Mg"<<setw(50)<<"Al"<<setw(4)<<"Si";
	cout<<setw(3)<<"P"<<setw(4)<<"S"<<setw(5)<<"Cl"<<setw(4)<<"Ar";
	cout<<endl<<endl;
	cout<<setw(4)<<"19"<<setw(4)<<"20"<<setw(7)<<"21"<<setw(4)<<"22";
	cout<<setw(4)<<"23";
	cout<<setw(4)<<"24"<<setw(4)<<"25"<<setw(4)<<"26"<<setw(4)<<"27";
	cout<<setw(4)<<"28";
	cout<<setw(5)<<"29"<<setw(5)<<"30"<<setw(5)<<"31"<<setw(4)<<"32";
	cout<<setw(4)<<"33"<<setw(4)<<"34"<<setw(4)<<"35"<<setw(4);
	cout<<"36"<<endl;
	cout<<setw(3)<<"K"<<setw(5)<<"Ca"<<setw(7)<<"Se"<<setw(4)<<"Ti";
	cout<<setw(4)<<"V"<<setw(4)<<"Cr"<<setw(4)<<"Mn"<<setw(4)<<"Fe";
	cout<<setw(4)<<"Co"<<setw(4)<<"Ni"<<setw(5)<<"Cu"<<setw(5)<<"Zn";
	cout<<setw(5)<<"Ga"<<setw(4)<<"Ge"<<setw(4)<<"As"<<setw(4)<<"Se";
	cout<<setw(4)<<"Br"<<setw(4)<<"Kr"<<endl<<endl;
	cout<<setw(4)<<"37"<<setw(4)<<"38"<<setw(7)<<"39"<<setw(4)<<"40";
	cout<<setw(4)<<"41";
	cout<<setw(4)<<"42"<<setw(4)<<"43"<<setw(4)<<"44"<<setw(4)<<"45";
	cout<<setw(4)<<"46";
	cout<<setw(5)<<"47"<<setw(5)<<"48"<<setw(5)<<"49"<<setw(4)<<"50";
	cout<<setw(4)<<"51"<<setw(4)<<"52"<<setw(4)<<"53"<<setw(4);
	cout<<"54"<<endl;
	cout<<setw(4)<<"Rb"<<setw(4)<<"Sr"<<setw(6)<<"Y"<<setw(5)<<"Zr";
	cout<<setw(4)<<"Nb"<<setw(4)<<"Mo"<<setw(4)<<"Tc"<<setw(4)<<"Ru";
	cout<<setw(4)<<"Rb"<<setw(4)<<"Pd"<<setw(5)<<"Ag"<<setw(5)<<"Cd";
	cout<<setw(5)<<"In"<<setw(4)<<"Sn"<<setw(4)<<"Sb"<<setw(4)<<"Te";
	cout<<setw(3)<<"I"<<setw(5)<<"Xe"<<endl<<endl;
	cout<<setw(4)<<"55"<<setw(4)<<"56"<<setw(8)<<"57*"<<setw(3)<<"72";
	cout<<setw(4)<<"73";
	cout<<setw(4)<<"74"<<setw(4)<<"75"<<setw(4)<<"76"<<setw(4)<<"77";
	cout<<setw(4)<<"78";
	cout<<setw(5)<<"79"<<setw(5)<<"80"<<setw(5)<<"81"<<setw(4)<<"82";
	cout<<setw(4)<<"83"<<setw(4)<<"84"<<setw(4)<<"85"<<setw(4);
	cout<<"86"<<endl;
	cout<<setw(4)<<"Cs"<<setw(4)<<"Ba"<<setw(7)<<"La"<<setw(4)<<"Hf";
	cout<<setw(4)<<"Ta"<<setw(4)<<"W"<<setw(4)<<"Re"<<setw(4)<<"Os";
	cout<<setw(4)<<"Ir"<<setw(4)<<"Pt"<<setw(5)<<"Au"<<setw(5)<<"Hg";
	cout<<setw(5)<<"Ti"<<setw(4)<<"Pb"<<setw(4)<<"Bi"<<setw(4)<<"Po";
	cout<<setw(3)<<"Ar"<<setw(5)<<"Rn"<<endl<<endl;
	cout<<setw(4)<<"87"<<setw(4)<<"88"<<setw(8)<<"89*"<<setw(4)<<"104";
	cout<<setw(4)<<"105"<<setw(4)<<"106"<<setw(4)<<"107"<<endl;
	cout<<setw(4)<<"Fr"<<setw(4)<<"Ra"<<setw(7)<<"Ac"<<setw(5)<<"Unq";
	cout<<setw(4)<<"Unp"<<setw(4)<<"Unh"<<setw(4)<<"Uns";
	cout<<endl<<endl;
	cout<<"Press any key and Enter to continue"<<endl;
	getch();
	clrscr();
	{
	clrscr();
	cout<<"   *Lanthanides\n"<<endl;
	cout<<setw(5)<<"58"<<setw(5)<<"59"<<setw(5)<<"60"<<setw(5)<<"61";
	cout<<setw(5)<<"62";
	cout<<setw(5)<<"63"<<setw(5)<<"64"<<setw(5)<<"65"<<setw(5)<<"66";
	cout<<setw(5)<<"67";
	cout<<setw(5)<<"68"<<setw(5)<<"69"<<setw(5)<<"70"<<setw(5)<<"71\n";
	cout<<setw(5)<<"Ce"<<setw(5)<<"Pi"<<setw(5)<<"Nd"<<setw(5)<<"Pm";
	cout<<setw(5)<<"Sm";
	cout<<setw(5)<<"Eu"<<setw(5)<<"Gd"<<setw(5)<<"Tb"<<setw(5)<<"Dy";
	cout<<setw(5)<<"Ho";
	cout<<setw(5)<<"Er"<<setw(5)<<"Tm"<<setw(5)<<"Yb"<<setw(4)<<"Lu";
	cout<<endl<<endl;
	cout<<"   *Actinides"<<endl<<endl;
	cout<<setw(5)<<"90"<<setw(5)<<"91"<<setw(5)<<"92"<<setw(5)<<"93";
	cout<<setw(5)<<"94";
	cout<<setw(5)<<"95"<<setw(5)<<"96"<<setw(5)<<"97"<<setw(5)<<"98";
	cout<<setw(5)<<"99";
	cout<<setw(6)<<"100"<<setw(5)<<"101"<<setw(5)<<"102"<<setw(5);
	cout<<"103\n";
	cout<<setw(5)<<"Th"<<setw(5)<<"Pa"<<setw(5)<<"U"<<setw(5)<<"Np"<<setw(5)<<"Pu";
	cout<<setw(5)<<"Am";
	cout<<setw(5)<<"Cm"<<setw(5)<<"Bk"<<setw(5)<<"Cf"<<setw(5)<<"Es";
	cout<<setw(5)<<"Fm";
	cout<<setw(5)<<"Md"<<setw(5)<<"No"<<setw(4)<<"Lr";
	cout<<endl;

	}




}
void element()
{
	getch();
	clrscr();
	int a;
		int cl4=0;
	textcolor(cl4+3);
	textbackground(0);
	cout<<"a";

	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<"                 ";
	cout<<"Enter the atomic number for elemental information\n";
	cout<<setw(37)<<" ";
	cin>>a;
	clrscr();
	int cl6=0;
	textcolor(cl6+10);
	textbackground(0);
	cout<<"a";
	clrscr();
	switch(a)
	{case 1:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : H\n";
		cout<<"Name    : Hydrogen\n";
		cout<<"Atomic Weight  : 1.00797\n";
		cout<<"Crystal Structure  : hcp/cubic\n";
		cout<<"Atomic Radius  : 46\n";
		cout<<"Principle Oxidation Number  : 1+\n";
		cout<<"Ionic Radii  : 154\n";
		cout<<"Ionization Energy  : 13.598 , -\n";
		cout<<"Electron Affinity  : 0.76\n";
		cout<<"Electronegativity  : 2.1\n";
		cout<<"Density  : 0.08987\n";
		cout<<"Melting Point  : 14.01\n";
		cout<<"Boiling Point  : 20.4\n";
		break;
	case 2:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : He\n";
		cout<<"Name    : Helium\n";
		cout<<"Atomic Weight  : 4.003\n";
		cout<<"Crystal Structure  : hcp/cubic\n";
		cout<<"Atomic Radius  : 176\n";
		cout<<"Principle Oxidation Number  : 0\n";
		cout<<"Ionic Radii  : -\n";
		cout<<"Ionization Energy  : 24.587 , 54.416\n";
		cout<<"Electron Affinity  : -0.53\n";
		cout<<"Electronegativity  : -\n";
		cout<<"Density  : 0.166\n";
		cout<<"Melting Point  : 0.95\n";
		cout<<"Boiling Point  : 4.21\n";
		break;
	case 3:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Li\n";
		cout<<"Name    : Lithium\n";
		cout<<"Atomic Weight  : 6.94\n";
		cout<<"Crystal Structure  : hcp 74/fcc/bcc 140\n";
		cout<<"Atomic Radius  : 152\n";
		cout<<"Principle Oxidation Number  : 1+\n";
		cout<<"Ionic Radii  : 68\n";
		cout<<"Ionization Energy  : 5.392 , 75.638\n";
		cout<<"Electron Affinity  : 0.82\n";
		cout<<"Electronegativity  : 1.0\n";
		cout<<"Density  : 534\n";
		cout<<"Melting Point  : 452\n";
		cout<<"Boiling Point  : 1590\n";
		break;
	case 4:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Be\n";
		cout<<"Name  : Beryllium\n";
		cout<<"Atomic Weight  : 9.01\n";
		cout<<"Crystal Structure  : hcp/cubic 1527\n";
		cout<<"Atomic Radii  : 112\n";
		cout<<"Principle Oxidation Number  : 2+\n";
		cout<<"Ionic Radii  : 35\n";
		cout<<"Ionization Energy  : 9.322 , 18.211\n";
		cout<<"Electron Affinity  : 0.30\n";
		cout<<"Electronegativity  : 1.5\n";
		cout<<"Density  : 1800\n";
		cout<<"Melting Point  : 1550\n";
		cout<<"Boiling Point  : 3243\n";
		break;
	case 5:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : B\n";
		cout<<"Name    : Boron\n";
		cout<<"Atomic Weight  : 10.81\n";
		cout<<"Crystal Structure  : ortho\n";
		cout<<"Atomic Radius  : 88\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 23\n";
		cout<<"Ionization Energy  : 8.298 , 25.154\n";
		cout<<"Electron Affinity  : 0.33\n";
		cout<<"Electronegativity  : 2.0\n";
		cout<<"Density  : 2500\n";
		cout<<"Melting Point  : 2600\n";
		cout<<"Boiling Point  : 2820\n";
		break;
	case 6:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : C\n";
		cout<<"Name    : Carbon\n";
		cout<<"Atomic Weight  : 12.01\n";
		cout<<"Crystal Structure  : hex/cubic\n";
		cout<<"Atomic Radius  : 71/77\n";
		cout<<"Principle Oxidation number  : 4+ , 4-\n";
		cout<<"Ionic Radii  : 260\n";
		cout<<"Ionization Energy  : 11.260 , 24.383\n";
		cout<<"Electron Affinity  : 1.25\n";
		cout<<"Electronegativity  : 2.5\n";
		cout<<"Density  : 2300\n";
		cout<<"Melting Point  : >3800\n";
		cout<<"Boiling Point  : 5100\n";
		break;
	case 7:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : N\n";
		cout<<"Name    : Nitrogen\n";
		cout<<"Atomic Weight  : 14.01\n";
		cout<<"Crystal Structure  : cubic 35.4/hcp\n";
		cout<<"Atomic Radius  : 71\n";
		cout<<"Principle Oxidation Number  : 3+ , 5+\n";
		cout<<"Ionic Radii  : 16 , 13\n";
		cout<<"Ionization Energy  : 14.534 , 29.601\n";
		cout<<"Electron Affinity  : 0.05\n";
		cout<<"Electronegativity  : 3.0\n";
		cout<<"Density  : 1.165\n";
		cout<<"Melting Point  : 63.3\n";
		cout<<"Boiling Point  : 77.3\n";
		break;
		case 8:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : O\n";
		cout<<"Name    : Oxygen\n";
		cout<<"Atomic Weight  : 16.00\n";
		cout<<"Crystal Structure  : rhombic\n";
		cout<<"Atomic Radius  : 60\n";
		cout<<"Principle Oxidation number  : 2-\n";
		cout<<"Ionic Radii  : 132\n";
		cout<<"Ionization Energy  : 13.618 , 35.116\n";
		cout<<"Electron Affinity  : 1.471\n";
		cout<<"Electronegativity  : 3.5\n";
		cout<<"Density  : 1.33\n";
		cout<<"Melting Point  : 54.7\n";
		cout<<"Boiling Point  : 90.2\n";
		break;
	case 9:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : F\n";
		cout<<"Name    : Fluorine\n";
		cout<<"Atomic Weight  : 19.00\n";
		cout<<"Crystal Structure  : -\n";
		cout<<"Atomic Radius  : 60\n";
		cout<<"Principle Oxidation Number  : 1- , 7+\n";
		cout<<"Ionic Radii  : 133 , 8\n";
		cout<<"Ionization Energy  : 17.422 , 34.97\n";
		cout<<"Electron Affinity  : 3.448\n";
		cout<<"Electronegativity  : 4.0\n";
		cout<<"Density  : 1.7\n";
		cout<<"Melting Point  : 53.5\n";
		cout<<"Boiling Point  : 85.01\n";
		break;
	case 10:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ne\n";
		cout<<"Name    : Neon\n";
		cout<<"Atomic Weight  : 20.18\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 160\n";
		cout<<"Principle Oxidation Number  : 0\n";
		cout<<"Ionic Radii  : -\n";
		cout<<"Ionization Energy  : 21.564 , 40.962\n";
		cout<<"Electron Affinity  : -0.57\n";
		cout<<"Electronegativity  : -\n";
		cout<<"Density  : 0.839\n";
		cout<<"Melting Point  : 24.5\n";
		cout<<"Boiling P	oint  : 27.2\n";
		break;
	case 11:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Na\n";
		cout<<"Name    : Sodium\n";
		cout<<"Atomic Weight  : 22.99\n";
		cout<<"Crystal Structure  : bcc\n";
		cout<<"Atomic Radius  : 185\n";
		cout<<"Principle Oxidation Number  : 1+\n";
		cout<<"Ionic Radii  : 97\n";
		cout<<"Ionization Energy  : 5.139 , 47.286\n";
		cout<<"Electron Affinity  : 0.84\n";
		cout<<"Electronegativity  : 0.9\n";
		cout<<"Density  : 970\n";
		cout<<"Melting Point  : 371\n";
		cout<<"Boiling Point  : 1165\n";
		break;
	case 12:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Mg\n";
		cout<<"Name    : Magnesium\n";
		cout<<"Atomic Weight  : 24.31\n";
		cout<<"Crystal Structure  : hcp\n";
		cout<<"Atomic Radius  : 160\n";
		cout<<"Principle Oxidation Number  : 1+ , 2+\n";
		cout<<"Ionic Radii  : 82 , 66\n";
		cout<<"Ionization Energy  : 7.646 , 15.035\n";
		cout<<"Electron Affinity  : -0.32\n";
		cout<<"Electronegativity  : 1.2\n";
		cout<<"Density  : 1741\n";
		cout<<"Melting Point  : 924\n";
		cout<<"Boiling Point  : 1380\n";
		break;
	case 13:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Al\n";
		cout<<"Name    : Aluminium\n";
		cout<<"Atomic Weight  : 26.98\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 142\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 51\n";
		cout<<"Ionization Energy  : 5.986 , 18.828\n";
		cout<<"Electron Affinity  : 0.5\n";
		cout<<"Electronegativity  : 1.5\n";
		cout<<"Density  : 2700\n";
		cout<<"Melting Point  : 933.2\n";
		cout<<"Boiling Point  : 2740\n";
		break;
	case 14:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Si\n";
		cout<<"Name    : Silicon\n";
		cout<<"Atomic Weight  : 28.09\n";
		cout<<"Crystal Structure  : cubic\n";
		cout<<"Atomic Radius  : 118\n";
		cout<<"Principle Oxidation Number  : 4+ , 4-\n";
		cout<<"Ionic Radii  : 42 , 38\n";
		cout<<"Ionization Energy  : 8.151 , 16.345\n";
		cout<<"Electron Affinity  : 1.5\n";
		cout<<"Electronegativity  : 1.8\n";
		cout<<"Density  : 2300\n";
		cout<<"Melting Point  : 1680\n";
		cout<<"Boiling Point  : 2628\n";
		break;
	case 15:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : P\n";
		cout<<"Name    : Phosphorus\n";
		cout<<"Atomic Weight  : 30.97\n";
		cout<<"Crystal Structure  : cubic\n";
		cout<<"Atomic Radius  : -\n";
		cout<<"Principle Oxidation Number  : 3+ , 5+\n";
		cout<<"Ionic Radii  : 44 , 35\n";
		cout<<"Ionization Energy  : 10.486 , 19.725\n";
		cout<<"Electron Affinity  : 0.8\n";
		cout<<"Electronegativity  : 2.1\n";
		cout<<"Density  : 2200(r) , 1800(y)\n";
		cout<<"Melting Point  : 317.2\n";
		cout<<"Boiling Point  : 552\n";
		break;
	case 16:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : S\n";
		cout<<"Name    : Sulphur\n";
		cout<<"Atomic Weight  : 32.06\n";
		cout<<"Crystal Structure  : fc ortho\n";
		cout<<"Atomic Radius  : 106\n";
		cout<<"Principle Oxidation Number  : 2- , 4+\n";
		cout<<"Ionic Radii  : 184 , 37\n";
		cout<<"Ionization Energy  : 10.360 , 23.33\n";
		cout<<"Electron Affinity  : 2.07\n";
		cout<<"Electronegativity  : 2.5\n";
		cout<<"Density  : 2070\n";
		cout<<"Melting Point  : 386\n";
		cout<<"Boiling Point  : 717.7\n";
		break;
	case 17:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Cl\n";
		cout<<"Name    : Chlorine\n";
		cout<<"Atomic Weight  : 35.45\n";
		cout<<"Crystal Structure  : tetra\n";
		cout<<"Atomic Radius  : 91\n";
		cout<<"Principle Oxidation Number  : 1- , 5+\n";
		cout<<"Ionic Radii  : 181 , 34\n";
		cout<<"Ionization Energy  : 12.967 , 23.81\n";
		cout<<"Electron Affinity  : 3.615\n";
		cout<<"Electronegativity  : 3.0\n";
		cout<<"Density  : 3.21\n";
		cout<<"Melting Point  : 172.1\n";
		cout<<"Boiling Point  : 238.5\n";
		break;
	case 18:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ar\n";
		cout<<"Name    : Argon\n";
		cout<<"Atomic Weight  : 39.95\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 174\n";
		cout<<"Principle Oxidation Number  : 0(1+)\n";
		cout<<"Ionic Radii  : 154\n";
		cout<<"Ionization Energy  : 15.759 , 27.629\n";
		cout<<"Electron Affinity  : -1.0\n";
		cout<<"Electronegativity  : -\n";
		cout<<"Density  : 1.66\n";
		cout<<"Melting Point  : 83.7\n";
		cout<<"Boiling Point  : 87.4\n";
		break;
	case 19:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : K\n";
		cout<<"Name    : Potassium\n";
		cout<<"Atomic Weight  : 39.10\n";
		cout<<"Crystal Structure  : bcc\n";
		cout<<"Atomic Radius  : 231\n";
		cout<<"Principle Oxidation Number  : 1+\n";
		cout<<"Ionic Radii  : 133\n";
		cout<<"Ionization Energy  : 4.341 , 31.625\n";
		cout<<"Electron Affinity  : 0.82\n";
		cout<<"Electronegativity  : 0.8\n";
		cout<<"Density  : 860\n";
		cout<<"Melting Point  : 336.8\n";
		cout<<"Boiling Point  : 1047\n";
		break;
	case 20:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ca\n";
		cout<<"Name    : Calcium\n";
		cout<<"Atomic Weight  : 40.08\n";
		cout<<"Crystal Structure  : fcc/bcc 737\n";
		cout<<"Atomic Radius  : 196\n";
		cout<<"Principle Oxidation Number  : 2+\n";
		cout<<"Ionic Radii  : 99\n";
		cout<<"Ionization Energy  : 6.113 , 11.871\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.0\n";
		cout<<"Density  : 1540\n";
		cout<<"Melting Point  : 1120\n";
		cout<<"Boiling Point  : 1760\n";
		break;
	case 21:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Sc\n";
		cout<<"Name    : Scandium\n";
		cout<<"Atomic Weight  : 44.96\n";
		cout<<"Crystal Structure  : hcp/fcc 1223\n";
		cout<<"Atomic Radius  : 160\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 73\n";
		cout<<"Ionization Energy  : 6.54 , 12.80\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.3\n";
		cout<<"Density  : 3000\n";
		cout<<"Melting Point  : 1812\n";
		cout<<"Boiling Point  : 3000\n";
		break;
	case 22:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ti\n";
		cout<<"Name    : Titanium\n";
		cout<<"Atomic Weight  : 47.90\n";
		cout<<"Crystal Structure  : hcp/bcc 1158\n";
		cout<<"Atomic Radius  : 146\n";
		cout<<"Principle Oxidation Number  : 4+\n";
		cout<<"Ionic Radii  : 68\n";
		cout<<"Ionization Energy  : 6.82 , 13.58\n";
		cout<<"Electron Affinity  : 0.39\n";
		cout<<"Electronegativity  : 1.5\n";
		cout<<"Density  : 4540\n";
		cout<<"Melting Point  : 1948\n";
		cout<<"Boiling Point  : 3530\n";
		break;
	case 23:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : V\n";
		cout<<"Name    : Vanadium\n";
		cout<<"Atomic Weight  : 50.94\n";
		cout<<"Crystal Structure  : bcc\n";
		cout<<"Atomic Radius  : 131\n";
		cout<<"Principle Oxidation Number  : 3+ , 5+\n";
		cout<<"Ionic Radii  : 74 , 59\n";
		cout<<"Ionization Energy  : 6.74 , 14.65\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.6\n";
		cout<<"Density  : 6100\n";
		cout<<"Melting Point  : 2160\n";
		cout<<"Boiling Point  : 3300\n";
		break;
	case 24:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Cr\n";
		cout<<"Name    : Chromium\n";
		cout<<"Atomic Weight  : 52.00\n";
		cout<<"Crystal Structure  : bcc\n";
		cout<<"Atomic Radius  : 125\n";
		cout<<"Principle Oxidation Number  : 3+ , 6+\n";
		cout<<"Ionic Radii  : 63 , 52\n";
		cout<<"Ionization Energy  : 6.766 , 1650\n";
		cout<<"Electron Affinity  : 0.98\n";
		cout<<"Electronegativity  : 1.6\n";
		cout<<"Density  : 7200\n";
		cout<<"Melting Point  : 2160\n";
		cout<<"Boiling Point  : 2755\n";
		break;
	case 25:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Mn\n";
		cout<<"Name    : Manganese\n";
		cout<<"Atomic Weight  : 54.94\n";
		cout<<"Crystal Structure  : cubic\n";
		cout<<"Atomic Radius  : 112\n";
		cout<<"Principle Oxidation Number  : 2+ , 3+\n";
		cout<<"Ionic Radii  : 80 , 66\n";
		cout<<"Ionization Energy  : 7.435 , 15.640\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.5\n";
		cout<<"Density  : 7440\n";
		cout<<"Melting Point  : 1517\n";
		cout<<"Boiling Point  : 2370\n";
		break;
	case 26:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Fe\n";
		cout<<"Name    : Iron\n";
		cout<<"Atomic Weight  : 55.85\n";
		cout<<"Crystal Structure  : bcc 1180/fcc 1670/bcc\n";
		cout<<"Atomic Radius  : 123\n";
		cout<<"Principle Oxidation Number  : 2+ , 3+\n";
		cout<<"Ionic Radii  : 74 , 64\n";
		cout<<"Ionization Energy  : 7.87 , 16.18\n";
		cout<<"Electron Affinity  : 0.6\n";
		cout<<"Electronegativity  : 1.8\n";
		cout<<"Density  : 7870\n";
		cout<<"Melting Point  : 1808\n";
		cout<<"Boiling Point  : 3300\n";
		break;
	case 27:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Co\n";
		cout<<"Name    : Cobalt\n";
		cout<<"Atomic Weight  : 58.93\n";
		cout<<"Crystal Structure  : hcp/fcc 690\n";
		cout<<"Atomic Radius  : 125\n";
		cout<<"Principle Oxidation Number  : 2+ , 3+\n";
		cout<<"Ionic Radii  : 72 , 63\n";
		cout<<"Ionization Energy  : 7.86 , 17.06\n";
		cout<<"Electron Affinity  : 0.9\n";
		cout<<"Electronegativity  : 1.8\n";
		cout<<"Density  : 8900\n";
		cout<<"Melting Point  : 1765\n";
		cout<<"Boiling Point  : 3170\n";
		break;
	case 28:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ni\n";
		cout<<"Name    : Nickel\n";
		cout<<"Atomic Weight  : 58.71\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 124\n";
		cout<<"Principle Oxidation Number  : 2+ , 3+\n";
		cout<<"Ionic Radii  : 69\n";
		cout<<"Ionization Energy  : 7.635 , 18.168\n";
		cout<<"Electron Affinity  : 1.3\n";
		cout<<"Electronegativity  : 1.8\n";
		cout<<"Density  : 8900\n";
		cout<<"Melting Point  : 1726\n";
		cout<<"Boiling Point  : 3005\n";
		break;
	case 29:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Cu\n";
		cout<<"Name    : Copper\n";
		cout<<"Atomic Weight  : 63.55\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 128\n";
		cout<<"Principle Oxidation Number  : 1+ , 2+\n";
		cout<<"Ionic Radii  : 96 , 72\n";
		cout<<"Ionization Energy  : 7.726 , 20.292\n";
		cout<<"Electron Affinity  : 1.8\n";
		cout<<"Electronegativity  : 1.9\n";
		cout<<"Density  : 8930\n";
		cout<<"Melting Point  : 1356\n";
		cout<<"Boiling Point  : 2868\n";
		break;
	case 30:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Zn\n";
		cout<<"Name    : Zinc\n";
		cout<<"Atomic Weight  : 65.37\n";
		cout<<"Crystal Structure  : hcp\n";
		cout<<"Atomic Radius  : 133\n";
		cout<<"Principle Oxidation Number  : 2+\n";
		cout<<"Ionic Radii  : 74\n";
		cout<<"Ionization Energy  : 9.394 , 17.964\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.6\n";
		cout<<"Density  : 7140\n";
		cout<<"Melting Point  : 692.6\n";
		cout<<"Boiling Point  : 1180\n";
		break;
	case 31:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ga\n";
		cout<<"Name    : Gallium\n";
		cout<<"Atomic Weight  : 69.72\n";
		cout<<"Crystal Structure  : fcc or ortho\n";
		cout<<"Atomic Radius  : 121\n";
		cout<<"Principle Oxidation Number  : 1+ , 3+\n";
		cout<<"Ionic Radii  : 81 , 62\n";
		cout<<"Ionization Energy  : 5.999 , 20.51\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.6\n";
		cout<<"Density  : 5950\n";
		cout<<"Melting Point  : 302.9\n";
		cout<<"Boiling Point  : 2676\n";
		break;
	case 32:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ge\n";
		cout<<"Name    : Germanium\n";
		cout<<"Atomic Weight  : 72.59\n";
		cout<<"Crystal Structure  : cubic(diam)\n";
		cout<<"Atomic Radius  : 122\n";
		cout<<"Principle Oxidation Number  : 4+\n";
		cout<<"Ionic Radii  : 53\n";
		cout<<"Ionization Energy  : 7.899 , 15.934\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.8\n";
		cout<<"Density  : 5400\n";
		cout<<"Melting Point  : 1210.5\n";
		cout<<"Boiling Point  : 3100\n";
		break;
	case 33:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : As\n";
		cout<<"Name    : Arsenic\n";
		cout<<"Atomic Weight  : 74.92\n";
		cout<<"Crystal Structure  : rhombic\n";
		cout<<"Atomic Radius  : 125\n";
		cout<<"Principle Oxidation Number  : 3+ , 5+\n";
		cout<<"Ionic Radii  : 58 , 46\n";
		cout<<"Ionization Energy  : 9.81 , 18.633\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 2.0\n";
		cout<<"Density  : 5730\n";
		cout<<"Melting Point  : 1090(25 atm)\n";
		cout<<"Boiling Point  : 886(sub)\n";
		break;
	case 34:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Se\n";
		cout<<"Name    : Selenium\n";
		cout<<"Atomic Weight  : 78.96\n";
		cout<<"Crystal Structure  : hcp\n";
		cout<<"Atomic Radius  : 116\n";
		cout<<"Principle Oxidation Number  : 2-\n";
		cout<<"Ionic Radii  : 191\n";
		cout<<"Ionization Energy  : 9.752 , 21.19\n";
		cout<<"Electron Affinity  : 3.7\n";
		cout<<"Electronegativity  : 2.4\n";
		cout<<"Density  : 4810\n";
		cout<<"Melting Point  : 490\n";
		cout<<"Boiling Point  : 958\n";
		break;
	case 35:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Br\n";
		cout<<"Name    : Bromine\n";
		cout<<"Atomic Weight  : 79.90\n";
		cout<<"Crystal Structure  : ortho\n";
		cout<<"Atomic Radius  : 114\n";
		cout<<"Principle Oxidation Number  : 1- , 5+\n";
		cout<<"Ionic Radii  : 196 , 47\n";
		cout<<"Ionization Energy  : 11.814 , 21.8\n";
		cout<<"Electron Affinity  : 3.363\n";
		cout<<"Electronegativity  : 2.8\n";
		cout<<"Density  : 3100\n";
		cout<<"Melting Point  : 265.9\n";
		cout<<"Boiling Point  : 331.9\n";
		break;
	case 36:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Kr\n";
		cout<<"Name    : Krypton\n";
		cout<<"Atomic Weight  : 83.80\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 201\n";
		cout<<"Principle Oxidation Number  : 0\n";
		cout<<"Ionic Radii  : -\n";
		cout<<"Ionization Energy  : 13.999 , 24.359\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : -\n";
		cout<<"Density  : 3.49\n";
		cout<<"Melting Point  : 116.5\n";
		cout<<"Boiling Point  : 120.8\n";
		break;
	case 37:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Rb\n";
		cout<<"Name    : Rubidium\n";
		cout<<"Atomic Weight  : 85.47\n";
		cout<<"Crystal Structure  : bcc\n";
		cout<<"Atomic Radius  : 246\n";
		cout<<"Principle Oxidation Number  : 1+\n";
		cout<<"Ionic Radii  :147\n";
		cout<<"Ionization Energy  : 4.177 , 27.28\n";
		cout<<"Electron Affinity  : 0.4\n";
		cout<<"Electronegativity  : 0.8\n";
		cout<<"Density  : 1530\n";
		cout<<"Melting Point  : 312.0\n";
		cout<<"Boiling Point  : 961\n";
		break;
	case 38:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Sr\n";
		cout<<"Name  : Strontium\n";
		cout<<"Atomic Weight  : 87.62\n";
		cout<<"Crystal Structure  : fcc 506/hcp/bcc 813\n";
		cout<<"Atomic Radius  : 215\n";
		cout<<"Principle Oxidation Number  : 2+\n";
		cout<<"Ionic Radii  : 112\n";
		cout<<"Ionization Energy  : 5.695 , 11.030\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.0\n";
		cout<<"Density  : 2600\n";
		cout<<"Melting Point  : 1042\n";
		cout<<"Boiling Point  : 1657\n";
		break;
	case 39:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Y\n";
		cout<<"Name    : Yttrium\n";
		cout<<"Atomic Weight  : 88.91\n";
		cout<<"Crystal Structure  : hcp/bcc 1763\n";
		cout<<"Atomic Radius  : 181\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 89\n";
		cout<<"Ionization Energy  : 6.38 , 12.24\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.2\n";
		cout<<"Density  : 4600\n";
		cout<<"Melting Point  : 1768\n";
		cout<<"Boiling Point  : 3200\n";
		break;
	case 40:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Zr\n";
		cout<<"Name    : Zirconium\n";
		cout<<"Atomic Weight  : 91.22\n";
		cout<<"Crystal Structure  : hcp/bcc 1100\n";
		cout<<"Atomic Radius  : 160\n";
		cout<<"Principle Oxidation Number  : 4+\n";
		cout<<"Ionic Radii  : 79\n";
		cout<<"Ionization Energy  : 6.84 , 13.13\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.4\n";
		cout<<"Density  : 6500\n";
		cout<<"Melting Point  : 2125\n";
		cout<<"Boiling Point  : 3851\n";
		break;
	case 41:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Nb\n";
		cout<<"Name    : Niobium\n";
		cout<<"Atomic Weight  : 92.91\n";
		cout<<"Crystal Structure  : bcc\n";
		cout<<"Atomic Radius  : 143\n";
		cout<<"Principle Oxidation Number  : 5+\n";
		cout<<"Ionic Radii  : 69\n";
		cout<<"Ionization Energy  : 6.88 , 14.32\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.6\n";
		cout<<"Density  : 8.570\n";
		cout<<"Melting Point  : 2741\n";
		cout<<"Boiling Point  : 5200\n";
		break;
	case 42:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Mo\n";
		cout<<"Name    : Molybdenum\n";
		cout<<"Atomic Weight  : 95.94\n";
		cout<<"Crystal Structure  : bcc\n";
		cout<<"Atomic Radius  : 136\n";
		cout<<"Principle Oxidation Number  : 4+ , 6+\n";
		cout<<"Ionic Radii  : 70 , 62\n";
		cout<<"Ionization Energy  : 7.099 , 16.15\n";
		cout<<"Electron Affinity  :1.0\n";
		cout<<"Electronegativity  : 1.8\n";
		cout<<"Density  : 10200\n";
		cout<<"Melting Point  : 2880\n";
		cout<<"Boiling Point  : 5830\n";
		break;
	case 43:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Tc\n";
		cout<<"Name    : Technetium\n";
		cout<<"Atomic Weight  : 98.91\n";
		cout<<"Crystal Structure  : hcp\n";
		cout<<"Atomic Radius  : 135\n";
		cout<<"Principle Oxidation Number  : 7+\n";
		cout<<"Ionic Radii  : 98\n";
		cout<<"Ionization Energy  : 7.28 , 15.26\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.9\n";
		cout<<"Density  : 11400\n";
		cout<<"Melting Point  : 2500\n";
		cout<<"Boiling Point  : 4900\n";
		break;
	case 44:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ru\n";
		cout<<"Name    : Ruthenium\n";
		cout<<"Atomic Weight  : 101.07\n";
		cout<<"Crystal Structure  : hcp\n";
		cout<<"Atomic Radius  : 133\n";
		cout<<"Principle Oxidation Number  : 4+\n";
		cout<<"Ionic Radii  : 67\n";
		cout<<"Ionization Energy  : 7.374 , 16.76\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 2.2\n";
		cout<<"Density  : 12400\n";
		cout<<"Melting Point  : 2520\n";
		cout<<"Boiling Point  : 4200\n";
		break;
	case 45:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Rh\n";
		cout<<"Name    : Rhodium\n";
		cout<<"Atomic Weight  : 102.91\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 134\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 68\n";
		cout<<"Ionization Energy  : 7.46 , 18.08\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 2.2\n";
		cout<<"Density  : 1240\n";
		cout<<"Melting Point  : 2230\n";
		cout<<"Boiling Point  : 4000\n";
		break;
	case 46:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Pd\n";
		cout<<"Name    : Palladium\n";
		cout<<"Atomic Weight  : 106.4\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 137\n";
		cout<<"Principle Oxidation Number  : 2+ , 4+\n";
		cout<<"Ionic Radii  : 80 , 65\n";
		cout<<"Ionization Energy  : 8.34 , 19.43\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 2.2\n";
		cout<<"Density  : 12000\n";
		cout<<"Melting Point  : 1825\n";
		cout<<"Boiling Point  : 3200\n";
		break;
	case 47:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ag\n";
		cout<<"Name    : Silver\n";
		cout<<"Atomic Weight  : 107.87\n";
		cout<<"Crystal Structure  : fcc/hcp 5\n";
		cout<<"Atomic Radius  : 144\n";
		cout<<"Principle Oxidation Number  : 1+\n";
		cout<<"Ionic Radii  : 126\n";
		cout<<"Ionization Energy  : 7.576 , 21.49\n";
		cout<<"Electron Affinity  : 2.5\n";
		cout<<"Electronegativity  : 1.9\n";
		cout<<"Density  : 10500\n";
		cout<<"Melting Point  : 1234\n";
		cout<<"Boiling Point  : 2485\n";
		break;
		case 48:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Cd\n";
		cout<<"Name    : Cadmium\n";
		cout<<"Atomic Weight  : 112.40\n";
		cout<<"Crystal Structure  : hcp\n";
		cout<<"Atomic Radius  : 148\n";
		cout<<"Principle Oxidation Number  : 2+\n";
		cout<<"Ionic Radii  : 97\n";
		cout<<"Ionization Energy  : 8.993 , 16.908\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.7\n";
		cout<<"Density  : 8650\n";
		cout<<"Melting Point  : 594.2\n";
		cout<<"Boiling Point  : 1038\n";
		break;
	case 49:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : In\n";
		cout<<"Name    : Indium\n";
		cout<<"Atomic Weight  : 114.82\n";
		cout<<"Crystal Structure  : bc tetra\n";
		cout<<"Atomic Radius  : 162\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 81\n";
		cout<<"Ionization Energy  : 5.786 , 18.869\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.7\n";
		cout<<"Density  : 7310\n";
		cout<<"Melting Point  : 429.8\n";
		cout<<"Boiling Point  : 2300\n";
		break;
	case 50:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Sn\n";
		cout<<"Name    : Tin\n";
		cout<<"Atomic Weight  : 118.69\n";
		cout<<"Crystal Structure  : cub(diam)/bcc\n";
		cout<<"Atomic Radius  : 140\n";
		cout<<"Principle Oxidation Number  : 2+ , 4+\n";
		cout<<"Ionic Radii  : 93 , 71\n";
		cout<<"Ionization Energy  : 7.344 , 14.632\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.8\n";
		cout<<"Density  : 7300\n";
		cout<<"Melting Point  : 505.1\n";
		cout<<"Boiling Point  : 2540\n";
		break;
	case 51:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Sb\n";
		cout<<"Name    : Antimony\n";
		cout<<"Atomic Weight  : 121.75\n";
		cout<<"Crystal Structure  : rhombic\n";
		cout<<"Atomic Radius  : 145\n";
		cout<<"Principle Oxidation Number  : 3+ , 5+\n";
		cout<<"Ionic Radii  : 76 , 62\n";
		cout<<"Ionization Energy  : 8.641 , 16.53\n";
		cout<<"Electron Affinity  : >2.0\n";
		cout<<"Electronegativity  : 1.9\n";
		cout<<"Density  : 6700\n";
		cout<<"Melting Point  : 903.7\n";
		cout<<"Boiling Point  : 1650\n";
		break;
	case 52:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Te\n";
		cout<<"Name    : Tellurium\n";
		cout<<"Atomic Weight  : 127.60\n";
		cout<<"Crystal Structure  : hcp\n";
		cout<<"Atomic Radius  : 143\n";
		cout<<"Principle Oxidation Number  : 2-\n";
		cout<<"Ionic Radii  : 211\n";
		cout<<"Ionization Energy  : 9.009 , 18.6\n";
		cout<<"Electron Affinity  : 3.6\n";
		cout<<"Electronegativity  : 2.1\n";
		cout<<"Density  : 6240\n";
		cout<<"Melting Point  : 722.6\n";
		cout<<"Boiling Point  : 1260\n";
		break;
	case 53:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : I\n";
		cout<<"Name    : Iodine\n";
		cout<<"Atomic Weight  : 126.90\n";
		cout<<"Crystal Structure  : ortho\n";
		cout<<"Atomic Radius  : 135\n";
		cout<<"Principle Oxidation Number  : 1-\n";
		cout<<"Ionic Radii  : 216\n";
		cout<<"Ionization Energy  : 10.451 , 19.131\n";
		cout<<"Electron Affinity  : 3.070\n";
		cout<<"Electronegativity  : 2.5\n";
		cout<<"Density  : 4940\n";
		cout<<"Melting Point  : 386.6\n";
		cout<<"Boiling Point  : 457.4\n";
		break;
	case 54:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Xe\n";
		cout<<"Name    : Xenon\n";
		cout<<"Atomic Weight  : 131.30\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 221\n";
		cout<<"Principle Oxidation Number  : 0\n";
		cout<<"Ionic Radii  : -\n";
		cout<<"Ionization Energy  : 12.130 , 21.21\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : -\n";
		cout<<"Density  : 5.50\n";
		cout<<"Melting Point  : 161.2\n";
		cout<<"Boiling Point  : 166.0\n";
		break;
	case 55:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Cs\n";
		cout<<"Name    : Caesium\n";
		cout<<"Atomic Weight  : 132.90\n";
		cout<<"Crystal Structure  : bcc\n";
		cout<<"Atomic Radius  : 262\n";
		cout<<"Principle Oxidation Number  : 1+\n";
		cout<<"Ionic Radii  : 167\n";
		cout<<"Ionization Energy  : 3.894 , 25.1\n";
		cout<<"Electron Affinity  : >0.19\n";
		cout<<"Electronegativity  : 0.7\n";
		cout<<"Density  : 1870\n";
		cout<<"Melting Point  : 301.6\n";
		cout<<"Boiling Point  : 960\n";
		break;
	case 56:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ba\n";
		cout<<"Name    : Barium\n";
		cout<<"Atomic Weight  : 137.34\n";
		cout<<"Crystal Structure  : bcc\n";
		cout<<"Atomic Radius  : 217\n";
		cout<<"Principle Oxidation Number  : 2+\n";
		cout<<"Ionic Radii  : 134\n";
		cout<<"Ionization Energy  : 5.212 , 10.004\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 0.9\n";
		cout<<"Density  : 3600\n";
		cout<<"Melting Point  : 1000\n";
		cout<<"Boiling Point  : 1910\n";
		break;
	case 57:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : La\n";
		cout<<"Name    : Lanthanum\n";
		cout<<"Atomic Weight  : 138.91\n";
		cout<<"Crystal Structure  : hcp 583/fcc/bcc 1137\n";
		cout<<"Atomic Radius  : 187\n";
		cout<<"Principle Oxidation Number  : 1+ , 3+\n";
		cout<<"Ionic Radii  : 139 , 102\n";
		cout<<"Ionization Energy  : 5.577 , 11.06\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.1\n";
		cout<<"Density  : 6150\n";
		cout<<"Melting Point  : 1190\n";
		cout<<"Boiling Point  : 3742\n";
		break;
	case 58:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ce\n";
		cout<<"Name    : Cerium\n";
		cout<<"Atomic Weight  : 140.12\n";
		cout<<"Crystal Structure  : fcc 95/hex/fcc 263/bcc 998\n";
		cout<<"Atomic Radius  : 183\n";
		cout<<"Principle Oxidation Number  : 3+ , 4+\n";
		cout<<"Ionic Radii  : 103 , 92\n";
		cout<<"Ionization Energy  : 5.47 , 10.85\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.1\n";
		cout<<"Density  : 6800\n";
		cout<<"Melting Point  : 1070\n";
		cout<<"Boiling Point  : 3740\n";
		break;
	case 59:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Pr\n";
		cout<<"Name    : Praseodymium\n";
		cout<<"Atomic Weight  : 140.91\n";
		cout<<"Crystal Structure  : hcp/bcc 1065\n";
		cout<<"Atomic Radius  : 182\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 101\n";
		cout<<"Ionization Energy  : 5.42 , 10.55 \n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.1\n";
		cout<<"Density  : 6800\n";
		cout<<"Melting Point  : 1208\n";
		cout<<"Boiling Point  : 3400\n";
		break;
	case 60:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Nd\n";
		cout<<"Name    : Neodymium\n";
		cout<<"Atomic Weight  : 144.24\n";
		cout<<"Crystal Structure  : hcp/bcc 1135\n";
		cout<<"Atomic Radius  : 181\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 100\n";
		cout<<"Ionization Energy  : 5.49 , 10.72\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.1\n";
		cout<<"Density  : 6960\n";
		cout<<"Melting Point  : 1297\n";
		cout<<"Boiling Point  : 3300\n";
		break;
	case 61:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Pm\n";
		cout<<"Name    : Promethium\n";
		cout<<"Atomic Weight  : 145\n";
		cout<<"Crystal Structure  : -\n";
		cout<<"Atomic Radius  : -\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 98\n";
		cout<<"Ionization Energy  : 5.55 , 10.90\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.1\n";
		cout<<"Density  : -\n";
		cout<<"Melting Point  : 1308\n";
		cout<<"Boiling Point  : 3000\n";
		break;
	case 62:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Sm\n";
		cout<<"Name    : Samarium\n";
		cout<<"Atomic Weight  : 150.35\n";
		cout<<"Crystal Structure  : rhombic 1190/bcc\n";
		cout<<"Atomic Radius  : 179\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 96\n";
		cout<<"Ionization Energy  : 5.63 , 11.07\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.1\n";
		cout<<"Density  : 7500\n";
		cout<<"Melting Point  : 1345\n";
		cout<<"Boiling Point  : 2200\n";
		break;
	case 63:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Eu\n";
		cout<<"Name    : Europium\n";
		cout<<"Atomic Weight  : 151.96\n";
		cout<<"Crystal Structure  : bcc\n";
		cout<<"Atomic Radius  : 198\n";
		cout<<"Principle Oxidation Number  : 3+ , 2+\n";
		cout<<"Ionic Radii  : 95 , 109\n";
		cout<<"Ionization Energy  : 5.67 , 11.25\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.1\n";
		cout<<"Density  : 5200\n";
		cout<<"Melting Point  : 1100\n";
		cout<<"Boiling Point  : 1712\n";
		break;
	case 64:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Gd\n";
		cout<<"Name    : Gadolinium\n";
		cout<<"Atomic Weight  : 157.25\n";
		cout<<"Crystal Structure  : hcp/bcc 1537\n";
		cout<<"Atomic Radius  : 178\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 94\n";
		cout<<"Ionization Energy  : 6.14 , 12.1\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.2\n";
		cout<<"Density  : 7900\n";
		cout<<"Melting Point  : 1585\n";
		cout<<"Boiling Point  : 3000\n";
		break;
	case 65:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Tb\n";
		cout<<"Name    : Terbium\n";
		cout<<"Atomic Weight  : 158.92\n";
		cout<<"Crystal Structure  : hcp/rhombic 1590\n";
		cout<<"Atomic Radius  : 177\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 92\n";
		cout<<"Ionization Energy  : 5.85 , 11.52\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.2\n";
		cout<<"Density  : 8300\n";
		cout<<"Melting Point  : 1629\n";
		cout<<"Boiling Point  : 3100\n";
		break;
	case 66:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Dy\n";
		cout<<"Name    : Dysprosium\n";
		cout<<"Atomic Weight  : 162.50\n";
		cout<<"Crystal Structure  : rhombic/hcp 86\n";
		cout<<"Atomic Radius  : 175\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 91\n";
		cout<<"Ionization Energy  : 5.93 , 11.67\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.2\n";
		cout<<"Density  : 8500\n";
		cout<<"Melting Point  : 1680\n";
		cout<<"Boiling Point  : 2900\n";
		break;
	case 67:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ho\n";
		cout<<"Name    : Holmium\n";
		cout<<"Atomic Weight  : 164.93\n";
		cout<<"Crystal Structure  : hcp\n";
		cout<<"Atomic Radius  : 176\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 89\n";
		cout<<"Ionization Energy  : 6.02 , 11.80\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.2\n";
		cout<<"Density  : 8800\n";
		cout<<"Melting Point  : 1734\n";
		cout<<"Boiling Point  : 2900\n";
		break;
	case 68:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Er\n";
		cout<<"Name    : Erbium\n";
		cout<<"Atomic Weight  : 167.26\n";
		cout<<"Crystal Structure  : hcp\n";
		cout<<"Atomic Radius  : 173\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 88\n";
		cout<<"Ionization Energy  : 6.10 , 11.93\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.2\n";
		cout<<"Density  : 9000\n";
		cout<<"Melting Point  : 1770\n";
		cout<<"Boiling Point  : 3200\n";
		break;
	case 69:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Tm\n";
		cout<<"Name    : Thulium\n";
		cout<<"Atomic Weight  : 168.93\n";
		cout<<"Crystal Structure  : hcp/bcc 1158\n";
		cout<<"Atomic Radius  : 174\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 87\n";
		cout<<"Ionization Energy  : 6.18 , 12.05\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.2\n";
		cout<<"Density  : 9300\n";
		cout<<"Melting Point  : 1818\n";
		cout<<"Boiling Point  : 2000\n";
		break;
	case 70:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Yb\n";
		cout<<"Name    : Ytterbium\n";
		cout<<"Atomic Weight  : 173.04\n";
		cout<<"Crystal Structure  : fcc/bcc 1071\n";
		cout<<"Atomic Radius  : 193\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 86\n";
		cout<<"Ionization Energy  : 6.254 , 12.17\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.2\n";
		cout<<"Density  : 7000\n";
		cout<<"Melting Point  : 1097\n";
		cout<<"Boiling Point  : 1700\n";
		break;
	case 71:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Lu\n";
		cout<<"Name    : Lutetium\n";
		cout<<"Atomic Weight  : 174.97\n";
		cout<<"Crystal Structure  : hcp\n";
		cout<<"Atomic Radius  : 173\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 85\n";
		cout<<"Ionization Energy  : 5.426 , 13.9\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.2\n";
		cout<<"Density  : 9800\n";
		cout<<"Melting Point  : 1925\n";
		cout<<"Boiling Point  : 3600\n";
		break;
	case 72:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Hf\n";
		cout<<"Name    : Hafnium\n";
		cout<<"Atomic Weight  : 178.49\n";
		cout<<"Crystal Structure  : hcp/bcc 2050\n";
		cout<<"Atomic Radius  : 158\n";
		cout<<"Principle Oxidation Number  : 4+\n";
		cout<<"Ionic Radii  : 78\n";
		cout<<"Ionization Energy  : 7.0 , 14.9\n";
		cout<<"Electron Affinity  : -0\n";
		cout<<"Electronegativity  : 1.3\n";
		cout<<"Density  : 13300\n";
		cout<<"Melting Point  : 2423\n";
		cout<<"Boiling Point  : 5700\n";
		break;
	case 73:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ta\n";
		cout<<"Name    : Tantalum\n";
		cout<<"Atomic Weight  : 180.95\n";
		cout<<"Crystal Structure  : bcc\n";
		cout<<"Atomic Radius  : 143\n";
		cout<<"Principle Oxidation Number  : 5+\n";
		cout<<"Ionic Radii  : 68\n";
		cout<<"Ionization Energy  : 7.89 , 16.2\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.5\n";
		cout<<"Density  : 16600\n";
		cout<<"Melting Point  : 3269\n";
		cout<<"Boiling Point  : 5698\n";
		break;
	case 74:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : W\n";
		cout<<"Name    : Tungsten\n";
		cout<<"Atomic Weight  : 183.85\n";
		cout<<"Crystal Structure  : bcc\n";
		cout<<"Atomic Radius  : 137\n";
		cout<<"Principle Oxidation Number  : 6+\n";
		cout<<"Ionic Radii  : 62\n";
		cout<<"Ionization Energy  : 7.98 , 17.7\n";
		cout<<"Electron Affinity  : 0.5\n";
		cout<<"Electronegativity  : 1.7\n";
		cout<<"Density  : 19320\n";
		cout<<"Melting Point  : 3650\n";
		cout<<"Boiling Point  : 6200\n";
		break;
	case 75:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Re\n";
		cout<<"Name    : Rhenium\n";
		cout<<"Atomic Weight  : 186.2\n";
		cout<<"Crystal Structure  : hcp\n";
		cout<<"Atomic Radius  : 137\n";
		cout<<"Principle Oxidation Number  : 4+\n";
		cout<<"Ionic Radii  : 72\n";
		cout<<"Ionization Energy  : 7.88 , 16.6\n";
		cout<<"Electron Affinity  : 0.15\n";
		cout<<"Electronegativity  : 1.9\n";
		cout<<"Density  : 20500\n";
		cout<<"Melting Point  : 3450\n";
		cout<<"Boiling Point  : 5900\n";
		break;
	case 76:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Os\n";
		cout<<"Name    : Osmium\n";
		cout<<"Atomic Weight  : 190.2\n";
		cout<<"Crystal Structure  : hcp\n";
		cout<<"Atomic Radius  : 135\n";
		cout<<"Principle Oxidation Number  : 4+\n";
		cout<<"Ionic Radii  : 69\n";
		cout<<"Ionization Energy  : 8.7 , 17.0\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 2.2\n";
		cout<<"Density  : 22480\n";
		cout<<"Melting Point  : 3300\n";
		cout<<"Boiling Point  : 4900\n";
		break;
	case 77:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ir\n";
		cout<<"Name    : Iridium\n";
		cout<<"Atomic Weight  : 192.2\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 135\n";
		cout<<"Principle Oxidation Number  : 4+\n";
		cout<<"Ionic Radii  : 68\n";
		cout<<"Ionization Energy  : 9.1 \n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 2.2\n";
		cout<<"Density  : 22420\n";
		cout<<"Melting Point  : 2716\n";
		cout<<"Boiling Point  : 4800\n";
		break;
	case 78:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Pt\n";
		cout<<"Name    : Platinum\n";
		cout<<"Atomic Weight  : 195.09\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 138\n";
		cout<<"Principle Oxidation Number  : 2+ , 4+\n";
		cout<<"Ionic Radii  : 80 , 65\n";
		cout<<"Ionization Energy  : 9.0 , 18.563\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 2.2\n";
		cout<<"Density  : 21450\n";
		cout<<"Melting Point  : 2042\n";
		cout<<"Boiling Point  : 4100\n";
		break;
	case 79:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Au\n";
		cout<<"Name    : Gold\n";
		cout<<"Atomic Weight  : 196.97\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 144\n";
		cout<<"Principle Oxidation Number  : 1+ , 3+\n";
		cout<<"Ionic Radii  : 137 , 85\n";
		cout<<"Ionization Energy  : 9.225 , 20.5\n";
		cout<<"Electron Affinity  : 2.1\n";
		cout<<"Electronegativity  : 2.4\n";
		cout<<"Density  : 19300\n";
		cout<<"Melting Point  : 1336.1\n";
		cout<<"Boiling Point  : 3239\n";
		break;
	case 80:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Hg\n";
		cout<<"Name    : Mercury\n";
		cout<<"Atomic Weight  : 200.59\n";
		cout<<"Crystal Structure  : rhombic\n";
		cout<<"Atomic Radius  : 156\n";
		cout<<"Principle Oxidation Number  : 1+ , 2+\n";
		cout<<"Ionic Radii  : 127 , 110\n";
		cout<<"Ionization Energy  : 10.437 , 18.756\n";
		cout<<"Electron Affinity  : 1.54\n";
		cout<<"Electronegativity  : 1.9\n";
		cout<<"Density  : 13590\n";
		cout<<"Melting Point  : 234.3\n";
		cout<<"Boiling Point  : 629.7\n";
		break;
	case 81:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Tl\n";
		cout<<"Name    : Thallium\n";
		cout<<"Atomic Weight  : 204.37\n";
		cout<<"Crystal Structure  : hcp/fcc 503\n";
		cout<<"Atomic Radius  : 171\n";
		cout<<"Principle Oxidation Number  : 1+\n";
		cout<<"Ionic Radii  : 147\n";
		cout<<"Ionization Energy  : 6.108 , 20.428\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.8\n";
		cout<<"Density  : 11860\n";
		cout<<"Melting Point  : 576.6\n";
		cout<<"Boiling Point  : 1730\n";
		break;
	case 82:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Pb\n";
		cout<<"Name    : Lead\n";
		cout<<"Atomic Weight  : 207.19\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 174\n";
		cout<<"Principle Oxidation Number  : 2+ , 4+\n";
		cout<<"Ionic Radii  : 120 , 84\n";
		cout<<"Ionization Energy  : 7.416 , 15.032\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.8\n";
		cout<<"Density  : 11340\n";
		cout<<"Melting Point  : 600.4\n";
		cout<<"Boiling Point  : 2017\n";
		break;
	case 83:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Bi\n";
		cout<<"Name    : Bismuth\n";
		cout<<"Atomic Weight  : 208.98\n";
		cout<<"Crystal Structure  : rhombic\n";
		cout<<"Atomic Radius  : 155\n";
		cout<<"Principle Oxidation Number  : 3+ , 5+\n";
		cout<<"Ionic Radii  : 96 , 74\n";
		cout<<"Ionization Energy  : 7.289 , 16.69\n";
		cout<<"Electron Affinity  : >0.7\n";
		cout<<"Electronegativity  : 1.9\n";
		cout<<"Density  : 9800\n";
		cout<<"Melting Point  : 544.4\n";
		cout<<"Boiling Point  : 1830\n";
		break;
	case 84:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Po\n";
		cout<<"Name    : Polonium\n";
		cout<<"Atomic Weight  : 209\n";
		cout<<"Crystal Structure  : monoclinic\n";
		cout<<"Atomic Radius  : 168\n";
		cout<<"Principle Oxidation Number  : 2+ , 6+\n";
		cout<<"Ionic Radii  : - , 67\n";
		cout<<"Ionization Energy  : 8.42 , 19.4\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 2.0\n";
		cout<<"Density  : 9400\n";
		cout<<"Melting Point  : 527\n";
		cout<<"Boiling Point  : 1235\n";
		break;
	case 85:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : At\n";
		cout<<"Name    : Astatine \n";
		cout<<"Atomic Weight  : 210\n";
		cout<<"Crystal Structure  : -\n";
		cout<<"Atomic Radius  : -\n";
		cout<<"Principle Oxidation Number  : 7+\n";
		cout<<"Ionic Radii  : 62\n";
		cout<<"Ionization Energy  : 9.5 \n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 2.2\n";
		cout<<"Density  : -\n";
		cout<<"Melting Point  : 520\n";
		cout<<"Boiling Point  : 623\n";
		break;
	case 86:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Rn\n";
		cout<<"Name    : Radon\n";
		cout<<"Atomic Weight  : 222\n";
		cout<<"Crystal Structure  : -\n";
		cout<<"Atomic Radius  : -\n";
		cout<<"Principle Oxidation Number  : 0\n";
		cout<<"Ionic Radii  : -\n";
		cout<<"Ionization Energy  : 10.748\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : -\n";
		cout<<"Density  : 9.73\n";
		cout<<"Melting Point  : 202\n";
		cout<<"Boiling Point  : 211.3\n";
		break;
	case 87:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Fr\n";
		cout<<"Name    : Francium\n";
		cout<<"Atomic Weight  : 223\n";
		cout<<"Crystal Structure  : -\n";
		cout<<"Atomic Radius  : -\n";
		cout<<"Principle Oxidation Number  : 1+\n";
		cout<<"Ionic Radii  : 187\n";
		cout<<"Ionization Energy  : 4.0\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 0.7\n";
		cout<<"Density  : -\n";
		cout<<"Melting Point  : 303\n";
		cout<<"Boiling Point  : 920\n";
		break;
	case 88:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ra\n";
		cout<<"Name    : Radium\n";
		cout<<"Atomic Weight  : 226\n";
		cout<<"Crystal Structure  : -\n";
		cout<<"Atomic Radius  : -\n";
		cout<<"Principle Oxidation Number  : 2+\n";
		cout<<"Ionic Radii  : 143\n";
		cout<<"Ionization Energy  : 5.279 , 10.147\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 0.9\n";
		cout<<"Density  : 5000\n";
		cout<<"Melting Point  : 970\n";
		cout<<"Boiling Point  : 1410\n";
		break;
	case 89:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Ac\n";
		cout<<"Name    : Actinium\n";
		cout<<"Atomic Weight  : 227\n";
		cout<<"Crystal Structure  : fcc\n";
		cout<<"Atomic Radius  : 188\n";
		cout<<"Principle Oxidation Number  : 3+\n";
		cout<<"Ionic Radii  : 118\n";
		cout<<"Ionization Energy  : 6.9 , 12.1\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.1\n";
		cout<<"Density  : 10100\n";
		cout<<"Melting Point  : 1320\n";
		cout<<"Boiling Point  : 3470\n";
		break;
	case 90:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Th\n";
		cout<<"Name    : Thorium\n";
		cout<<"Atomic Weight  : 232.04\n";
		cout<<"Crystal Structure  : fcc/bcc 1673\n";
		cout<<"Atomic Radius  : 180\n";
		cout<<"Principle Oxidation Number  : 4+\n";
		cout<<"Ionic Radii  : 102\n";
		cout<<"Ionization Energy  : 6.95 , 11.5\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.3\n";
		cout<<"Density  : 11500\n";
		cout<<"Melting Point  : 2000\n";
		cout<<"Boiling Point  : 4500\n";
		break;
	case 91:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Pa\n";
		cout<<"Name    : Protoactinium\n";
		cout<<"Atomic Weight  : 231\n";
		cout<<"Crystal Structure  : tetra\n";
		cout<<"Atomic Radius  : 160\n";
		cout<<"Principle Oxidation Number  : 3+ , 4+\n";
		cout<<"Ionic Radii  : 113 , 98\n";
		cout<<"Ionization Energy  : -\n";
		cout<<"Electron Affinity  : -\n";
		cout<<"Electronegativity  : 1.5\n";
		cout<<"Density  : 15400\n";
		cout<<"Melting Point  : 1500\n";
		cout<<"Boiling Point  : 4300\n";
		break;
	case 92:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : U\n";
		cout<<"Name    : Uranium\n";
		cout<<"Atomic Weight  : 238.03\n";
		cout<<"Crystal Structure  : rhombic/tetra 941\n";
		cout<<"Atomic Radius  : 138\n";
		cout<<"Principle Oxidation Number  : 4+ , 6+\n";
		cout<<"Ionic Radii  : 97 , 80\n";
		cout<<"Ionization Energy  : 6.08\n";
		cout<<"Electron Affinity  : 0.94\n";
		cout<<"Electronegativity  : 1.7\n";
		cout<<"Density  : 19050\n";
		cout<<"Melting Point  : 1405.4\n";
		cout<<"Boiling Point  : 4091\n";
		break;
	case 93:
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Symbol  : Np\n";
		cout<<"Name\n";
		cout<<"Atomic Weight\n";
		cout<<"Crystal Structure\n";
		cout<<"Atomic Radius\n";
		cout<<"Principle Oxidation Number\n";
		cout<<"Ionic Radii\n";
		cout<<"Ionization Energy\n";
		cout<<"Electron Affinity\n";
		cout<<"Electron Negativity\n";
		cout<<"Density\n";
		cout<<"Melting Point:\n";
		cout<<"Boiling Point:\n";
		break;

	default:
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<setw(52)<<"Element Not Available\n";
	}
}

void modified()
{
		clrscr();
		textbackground(BLACK);
		textcolor(GREEN);
		cout<<"a";
		clrscr();
		gotoxy(26,12);
		cputs("You will be out in 10 seconds ");
		gotoxy(44,12);
		cputs(" 10 ");
		sound(600);
		delay(500);
		nosound();
		sound(7);
		delay(500);
		nosound();
		gotoxy(44,12);
		cputs("  9 ");
		sound(600);
		delay(500);
		nosound();
		sound(7);
		delay(500);
		nosound();
		gotoxy(44,12);
		cputs("  8 ");
		sound(600);
		delay(500);
		nosound();
		sound(7);
		delay(500);
		nosound();
		gotoxy(44,12);
		cputs("  7 ");
		sound(600);
		delay(500);
		nosound();
		sound(7);
		delay(500);
		nosound();
		gotoxy(44,12);
		cputs("  6 ");
		sound(600);
		delay(500);
		nosound();
		sound(7);
		delay(500);
		nosound();
		gotoxy(44,12);
		cputs("  5 ");
		sound(600);
		delay(500);
		nosound();
		sound(7);
		delay(500);
		nosound();
		gotoxy(44,12);
		cputs("  4 ");
		sound(600);
		delay(500);
		nosound();
		sound(7);
		delay(500);
		nosound();
		gotoxy(44,12);
		cputs("  3 ");
		sound(600);
		delay(500);
		nosound();
		sound(7);
		delay(500);
		nosound();
		gotoxy(44,12);
		cputs("  2 ");
		sound(600);
		delay(500);
		nosound();
		sound(7);
		delay(500);
		nosound();
		gotoxy(44,12);
		cputs("  1 ");
		sound(600);
		delay(500);
		nosound();
		sound(7);
		delay(500);
		nosound();
		gotoxy(44,12);
		cputs("  0 ");
		sound(600);
		delay(500);
		nosound();
		sound(7);
		delay(500);
		nosound();
		exit(0);
}
void ending()
{

	clrscr();
	textcolor(YELLOW);
	int i,j;
	for(j=13,i=20;j>-1,i<50;j--,i++)
	{
		delay(70);
		gotoxy(i,6);
		cputs("?");
		gotoxy(i,13);
		cputs("?");
	}
	for(j=13;j>6;j--)
	{
		delay(70);
		gotoxy(19,j);
		cputs("?");
		gotoxy(49,j);
		cputs("?");
	}
		gotoxy(19,6);
		cputs("?");
		gotoxy(49,6);
		cputs("?");
		gotoxy(19,13);
		cputs("?");
		gotoxy(49,13);
		cputs("?");
		gotoxy (20,7);
		cputs("Thank");
		gotoxy (26,7);
		delay(250);
		cputs("you");
		gotoxy (30,7);
		cputs("for");
		delay(250);
		gotoxy(34,7);
		cputs("playing.");
		delay(250);
		gotoxy(20,9);
		cputs("Hope you enjoyed. ");

		delay(5000);
		exit(0);

}

void main()  //starting of main
{
	clrscr();
	textbackground(BLACK);
	cout<<"a";
	clrscr();
	{
		clrscr();
		textcolor(GREEN);
		gotoxy(21,12);
		cputs("Unauthorised authority acess will be denied");
		gotoxy(27,14);
		cputs("Enter password (5): ");
		char c[5];
		c[0]=getch();
		c[1]=getch();
		c[2]=getch();
		c[3]=getch();
		c[4]=getch();

		if((c[0]=='p')&&(c[1]=='u')&&(c[2]=='r')&&(c[3]=='v')&&(c[4]=='a'))
		{
			clrscr();
			gotoxy(37,12);
			cputs("WELCOME");
			delay(5000);
		}else
		{
			clrscr();
			textcolor(YELLOW+BLINK);
			gotoxy(31,13);
			cputs("UNAUTHORISED ACCESS !!!");
			sound(1000);
			delay(500);
			nosound();
			sound(7);
			delay(300);
			nosound();
			sound(1000);
			delay(500);
			nosound();
			sound(7);
			delay(300);
			nosound();
			sound(1000);
			delay(500);
			nosound();
			sound(7);
			delay(300);
			nosound();
			sound(1000);
			delay(500);
			nosound();
			sound(7);
			delay(300);
			nosound();
			sound(1000);
			delay(500);
			nosound();
			sound(7);
			delay(300);
			nosound();
			clrscr();
			scan();
			error();
			torture();
			con();
			modified();

		}
	}
	starting();
	int selection;
	char choice;
	do{
		clrscr();
		textcolor(WHITE);
		textbackground(BLACK);
		cout<<"a";
		clrscr();
		gotoxy(39,3);
		cputs("INDEX");

		textcolor(WHITE);
		gotoxy(3,5);
		cputs("1. PERIODIC TABLE ");
		gotoxy(3,6);
		cputs("2. ENTERTAINMENT ");
		gotoxy(3,7);
		cputs("3. ACKNOWLEDGEMENT");
		gotoxy(3,8);
		cputs("4. EXIT");
		gotoxy(3,14);
		cputs("ENTER YOUR SELECTION : ");
		cin>>selection;
		switch(selection)
		{
			case 1:
				table();
				char v;
				do{

					element();
					getch();
					clrscr();
					cout<<"\n\n\Do you need to see any other elemental details (Y/N)";
					cin>>v;
				}while((v=='y')||(v=='Y'));
				break;
			case 2:
			{
			{
				clrscr();
				int i,j,c,r;
				int g=2;
				textcolor(WHITE);
				clrscr();
				delay(1000);
				clrscr();
				gotoxy(25,5);
				cputs("OOO      OO        O O O       OOOOOOOOO     OOOO");
				gotoxy(25,6);
				cputs("OO  O    OO    OO         OO      OOO      O     ");
				gotoxy(25,7);
				cputs("OO   O   OO   OO           OO     OOO        OOOO ");
				gotoxy(25,8);
				cputs("OO    O  OO    OO         OO      OOO             O");
				gotoxy(25,9);
				cputs("OO      OOO        O O O          OOO        OOOO ");
				gotoxy(33,11);
				cputs("      OO");
				gotoxy(33,12);
				cputs("  OO      OO");
				gotoxy(33,13);
				cputs("      OO  ");
				gotoxy(33,14);
				cputs("   O      O    O");
				gotoxy(33,15);
				cputs(" O          OO  ");
				gotoxy(33,16);
				cputs("     OOOOO     O");
				gotoxy(9,18);
				cputs("    XXX  XXXXXX      XXX        XXX     XXX     XXXXX   XXX     XXX");
				gotoxy(9,19);
				cputs(" X       X   X    X      X    X       X          X     X       X    ");
				gotoxy(9,20);
				cputs("X        XX      X         X    XXX     XXX     XXXX    XXX     XXX ");
				gotoxy(9,21);
				cputs("  X      X   X    X      X          X       X    X          X       X ");
				gotoxy(9,22);
				cputs("    XXX  X     X     XXX        XXX     XXX     XXXXX   XXX     XXX ");
				delay(4000);

				start:
				das();
				cout<<"\n\n 1.Play Nots & Crossess\n 2.Options\n 3.About\n 4.Help \n 5.Exit\n\n Enter your choice:";
				cin>>c;
				if (c==2)
				{
					clrscr();
					doc();
					gotoxy(35,4);
					cout<<"Options\n\n 1. Colour of the game\n 2. Type of board\n 3. Back";
					cout<<"\nEnter Your Choice:";
					cin>>i;
					if (i==3)
					goto start;
					else if (i==1)
					{
						clrscr();
						doc();
						gotoxy(1,4);
						textcolor(BLUE);
						cputs("1:  BLUE");
						gotoxy(1,5);
						textcolor(GREEN);
						cputs("2:  GREEN");
						textcolor(RED);
						gotoxy(1,6);
						cputs("3:  RED");
						textcolor(BROWN);
						gotoxy(1,7);
						cputs("4:  BROWN");
						textcolor(BLACK);
						gotoxy(1,8);
						cputs("5:  BLACK");textcolor(WHITE);cputs("  (You can't see black in a black background)");
						textcolor(CYAN);
						gotoxy(1,9);
						cputs("6:  CYAN");
						textcolor(MAGENTA);
						gotoxy(1,10);
						cputs("7:  MAGENTA");
						textcolor(LIGHTGRAY);
						gotoxy(1,11);
						cputs("8:  LIGHTGRAY");
						textcolor(DARKGRAY);
						gotoxy(1,12);
						cputs("9:  DARKGRAY");
						textcolor(LIGHTBLUE);
						gotoxy(1,13);
						cputs("10: LIGHTBLUE");
						textcolor(LIGHTGREEN);
						gotoxy(1,14);
						cputs("11: LIGHTGREEN");
						textcolor(LIGHTCYAN);
						gotoxy(1,15);
						cputs("12: LIGHTCYAN");
						textcolor(LIGHTRED);
						gotoxy(1,16);
						cputs("13: LIGHTRED");
						textcolor(LIGHTMAGENTA);
						gotoxy(1,17);
						cputs("14: LIGHTMAGENTA");
						textcolor(YELLOW);
						gotoxy(1,18);
						cputs("15: YELLOW");
						textcolor(WHITE);
						gotoxy(1,19);
						cputs("16: WHITE");
						cout<<">> ";
						cin>>r;
						if(r == 1)
						textcolor(BLUE);
						else if(r == 2)								textcolor(GREEN);
						else if(r == 3)
						textcolor(RED);
						else if(r == 4)
						textcolor(BROWN);
						else if(r == 5)
						textcolor(BLACK);
						else if(r == 6)
						textcolor(CYAN);
						else if(r == 7)
						textcolor(MAGENTA);
						else if(r == 8)
						textcolor(LIGHTGRAY);
						else if(r == 9)
						textcolor(DARKGRAY);
						else if(r == 10)
						textcolor(LIGHTBLUE);
						else if(r == 11)
						textcolor(LIGHTGREEN);
						else if(r == 12)
						textcolor(LIGHTCYAN);
						else if(r == 13)
						textcolor(LIGHTRED);
						else if(r == 14)
						textcolor(LIGHTMAGENTA);
						else if(r == 15)
						textcolor(YELLOW);
						else if(r == 16)
						textcolor(WHITE);
						goto start;
					}
					else if (i==2);
					{
						clrscr();
						doc();
						{
							gotoxy(9,3);
							cputs("Board No-1");
							for(int i=3;i<24;i++)
							{
								gotoxy(i,7);
								cputs("?");
							}
							for (i=3;i<24;i++)
							{
								gotoxy(i,10);
								cputs("?");
							}
							for (i=5;i<14;i++)
							{
								gotoxy(8,i);
								cputs("?");
							}
							for (i=5;i<14;i++)
							{
								gotoxy(18,i);
								cputs("?");
							}
								gotoxy(8,7);
								cputs("?");
								gotoxy(18,7);
								cputs("?");
								gotoxy(8,10);
								cputs("?");
								gotoxy(18,10);
								cputs("?");
								gotoxy(7,5);
								cputs("1");
								gotoxy(17,5);
								cputs("2");
								gotoxy(24,5);
								cputs("3");
								gotoxy(7,8);
								cputs("4");
								gotoxy(17,8);
								cputs("5");
								gotoxy(24,8);
								cputs("6");
								gotoxy(7,11);
								cputs("7");
								gotoxy(17,11);
								cputs("8");
								gotoxy(24,11);
								cputs("9");
								for(i=44;i<67;i++)
								{
									gotoxy(i,7);
									cputs("?");
									gotoxy(i,10);
									cputs("?");
								}

								for(i=44;i<67;i++)
								{
									gotoxy(i,4);
									cputs("?");
									gotoxy(i,13);
									cputs("?");
								}
								for (i=4;i<14;i++)
								{
									gotoxy(51,i);
									cputs("?");
									gotoxy(60,i);
									cputs("?");
								}
								for(i=4;i<13;i++)
								{
									gotoxy(67,i);
									cputs("?");
									gotoxy(44,i);
									cputs("?");
								}
								gotoxy(51,7);
								cputs("?");
								gotoxy(60,7);
								cputs("?");
								gotoxy(51,10);
								cputs("?");
								gotoxy(60,10);
								cputs("?");
								gotoxy(67,4);
								cputs("?");
								gotoxy(44,4);
								cputs("?");
								gotoxy(67,13);
								cputs("?");
								gotoxy(44,13);
								cputs("?");
								gotoxy(51,13);
								cputs("?");
								gotoxy(60,13);
								cputs("?");
								gotoxy(51,4);
								cputs("?");
								gotoxy(60,4);
								cputs("?");
								gotoxy(44,7);
								cputs("?");
								gotoxy(44,10);
								cputs("?");
								gotoxy(67,7);
								cputs("?");
								gotoxy(67,10);
								cputs("?");
								gotoxy(50,5);
								cputs("1");
								gotoxy(59,5);
								cputs("2");
								gotoxy(66,5);
								cputs("3");
								gotoxy(50,8);
								cputs("4");
								gotoxy(59,8);
								cputs("5");
								gotoxy(66,8);
								cputs("6");
								gotoxy(50,11);
								cputs("7");
								gotoxy(59,11);
								cputs("8");
								gotoxy(66,11);
								cputs("9");
								gotoxy(51,3);
								cputs("Board No-2");
							}
							gotoxy(1,17);
							cout<<"Enter the type of Board you like\n";
							cin>>g;
							goto start;
						}
					}
					if(c==1)
					{
						clrscr();
						cout<<"\n\n"<<setw(45)<<"NOTS & CROSSESS\n"<<setw(46)<<"The gaming software";
						cout<<"\n\n 1. Computer Vs Human\n 2. Human Vs Human\n 3. Back";
						cout<<"\nEnter your choice:";
						cin>>c;
						if (c==1)
						{
							clrscr();
							//COMP VS MAN (START)
							int a;
							char ch;
							clrscr();
							doc();
							cout<<"\n\n Enter your Name:";
							char name[10];
							cin>>name;
							do{
								clrscr();
								cout<<"\t\t\t\t TIC TAC TOE\n\t\t\tThe gaming software\n";
								if (g==1)
								col1();
								else if (g==2)
								col();
								else col();
								gotoxy(1,2);
								cout<<name;
								a=in(3);
								if (a==5) // START 5
								{
									 au(7);
									 a=in(4);
									 if (a==1)
									  {
										  au(9);
										  a=in(5);
										if(a==4)
										{
											vic(8,3);
											goto end;
										}
										else if (a==8)
										{
											au(2);
											a=in(6);
										   if (a==3)
										   {
											au(4);
											bl(6);
										    }
											    else if (a==4)
										    {
											     au(6);
											     bl(3);
										    }
										    else if (a==6)
										 {
										     au(4);
										     bl(3);
										 }
									  }
									  else {vic(8,3);goto end;}
								}

								 else if (a==2)
								 {
									  au(8);
									  a=in(5);
									  if (a==9)
									   {
										   au(1);
										   a=in(6);
										   if (a==4)
										    {
											    au(6);
											    bl(3);
										    }
										   else if (a==3||a==6)  {vic(4,4);goto end;}
									   }
									  else {vic(9,3);goto end;}
								}
								 else if (a==3)
								  {
									  au(9);
									  a=in(5);
									  if (a==8)
									   {
										   au(2);
										   a=in(6);
										   if (a==1)
										    {
											    au(4);
											    bl(6);
									    }
									   else if (a==4)
									    {
										    au(6);
										    bl(1);
									    }
									   else if (a==6)
									    {
										    au(4);
											    bl(1);
									    }
									   else bl(a);
								  }
								  else {vic(8,3);goto end;}
							}
							 else if (a==4)
							  {
								  au(6);
								  a=in(5);
								  if (a==1)
								   {
									   au(9);
									   a=in(6);
									   if (a==8)
									    {
										    au(2);
										    bl(3);
									    }
									   else {vic(8,3);goto end;}
								   }
								  else if (a==2)
								   {
									   au(8);
									   a=in(6);
									   if(a==9)
									    {
													    au(1);
										    bl(3);
									    }
									   else {vic(9,3);goto end;}
								   }
								  else if(a==3)
								   {
									   au(9);
									   a=in(6);
									   if (a==8)
									    {
										    au(2);
										    bl(1);
									    }
									   else {vic(8,3);goto end;}
								   }
								  else if (a==8)
								   {
									   au(2);
									   a=in(6);
									   if(a==1)
									    {
													    au(9);
										    bl(3);
									    }
									   else if(a==9)
									    {
										    au(1);
										    bl(3);
									    }
									  else if(a==3)
									   {
										   au(1);
										   bl(9);
									   }
								   }
								 else if(a==9)
								  {
									  au(1);
									  a=in(6);
									  if (a==2)
									   {
										   au(8);
										   bl(3);
									   }
									  else if(a==3)
									   {
										   au(2);
										   bl(8);
									   }
									  else if(a==8)
									   {
										   au(2);
										   bl(3);
									   }
								  }
							}

							 else if (a==6)
							 {
								 au(4);
								 a=in(5);
								 if(a==1)
								  {
									  au(9);
									  a=in(6);
									  if(a==8)
									   {
										   au(2);
										   bl(3);
									   }
									  else {vic(8,3);goto end;}
								  }
								 else {vic(1,4);goto end;}
							 }
							 else if(a==8)
							  {
								  au(2);
								  a=in(5);
								  if(a==1)
								   {
									   au(9);
									   a=in(6);
									   if(a==4)
									    {
										    au(6);
										    bl(3);
									    }
									   else if (a==6)
									     {
										    au(4);
										    bl(3);
									    }
									   else if(a==3)
									    {
										    au(4);
										    bl(6);
									    }
								   }
								  else if (a==3)
								   {
									   au(1);
									   a=in(6);
									   if (a==4)
									    {
										    au(6);
										    bl(9);
									    }
									   else {vic (4,4);goto end;}
								   }
								  else if(a==4)
								   {
									   au(6);
									   a=in(6);
									   if(a==1)
									    {
										    au(9);
										    bl(3);
									    }
									   else if(a==3)
									   {
										    au(1);
										    bl(9);
									   }
									   else if(a==9)
									    {
										    au(1);
										    bl(3);
									    }
								   }
								  else if (a==9)
								   {
									   au(1);
									   a=in(6);
									   if(a==4)
									    {
										    au(6);
										    bl(3);
									    }
									   else {vic(4,4);goto end;}
								   }
								  else if (a==6)
								   {
									   au(4);
									   a=in(6);
									   if (a==1)
									   {
										    au(9);
										    bl(3);
									    }
									   else {vic(1,4);goto end;}
								   }
							  }

							  else if (a==8)
							 {
								 au(2);
								 a=in(5);
								 if (a==1)
								  {
									  au(9);
									  a=in(6);
									  if(a==4)
									   {
										   au(6);
										   bl(3);
									   }
									else if (a==6)
									{
										au(4);
										bl(3);
									}
									else if (a==3)
									{
										au(6);
										bl(4);
									}
								  }
								  else if (a==3)
								   {
									   au(1);
									   a=in(5);
									   if (a==4)
									   {
										    au(6);
										    bl(9);
									    }
									    else {vic(4,4);goto end;}
								   }
								  else if (a==6)
								 {
									   au(4);
									   bl(3);
								   }
								  else if (a==9);
								   {
									   au(1);
								   }
							  }

							 else if (a==9)
							  {
								  au(1);
								  a=in(5);
								  if(a==4)
								   {
									   au(6);
									   a=in(6);
									   if(a==2)
									    {
										    au(8);
										    bl(3);
								    }
								   else if(a==3)
								    {
									    au(2);
									    bl(8);
								    }
								   else if(a==8)
								    {
									    au(2);
									    bl(3);
								    }
							   }
							  else {vic(4,4);goto end;}
						  }                        //END 5
					 }
					else if(a==1)              //START 1
					 {
							 au(5);
						 a=in(4);
						 if(a==2)
						  {
							  au(3);
							  a=in(5);
							  if(a==7)
							   {
								   au(4);
								   a=in(6);
								   if(a==6)
								    {
									    au(8);
									    bl(9);
								    }
								else {vic(6,2);goto end;}
							   }
							  else {vic(7,8);goto end;}
						  }

						 else if(a==3)
						  {
							  au(2);
							  a=in(5);
							  if(a==8)
							   {
								   au(4);
								   a=in(6);
								   if(a==6)
								    {
									    au(9);
									    bl(7);
								    }
								   else if(a==7||a==9) {vic(6,2);goto end;}
								   else cout<<"GET OUT@#&$%%*^";
							   }
							  else {vic(8,5);goto end;}
						  }

						 if(a==4)
						  {
							  au(7);
							  a=in(5);
							  if(a==3)
							   {
								   au(2);
								   a=in(6);
								   if(a==8)
								    {
									    au(9);
									    bl(6);
								    }
								   else {vic(8,5);goto end;}
							   }
							  else {vic(3,8);goto end;}
						  }

						 if (a==6)
						  {
							  au(2);
							  a=in(5);
							  if(a==8)
							  {
								   au(7);
								   a=in(6);
								   if (a==3)
								    {
									    au(9);
									    bl(4);
								    }
								   else {vic(3,8);goto end;}
							   }
							  else {vic(8,5);goto end;}
						  }

						 if(a==7)
						  {
							  au(4);
							  a=in(5);
							  if(a==6)
							   {
								   au(2);
								   a=in(6);
								   if (a==8)
								    {
									    au(9);
									    bl(3);
								    }
								   else {vic(8,5);goto end;}
							   }
							  else {vic(6,2);goto end;}
						  }

						 else if (a==8)
						  {
							  au(4);
							  a=in(5);
							  if(a==6)
							   {
								   au(3);
								   a=in(6);
								   if(a==7)
								    {
									    au(9);
									    bl(2);
								    }
								   else {vic(7,8);goto end;}
							   }
							  else {vic(6,2);goto end;}
						  }

						 else if(a==9)
						  {
							  au(2);
							  a=in(5);
							  if(a==8)
							  {
								   au(7);
								   a=in(6);
								   if(a==3)
								    {
									    au(6);
									    bl(4);
								    }
								   else {vic(3,8);goto end;}
							   }
							  else {vic(8,5);goto end;}
						  }
					 }                                  //END 1


					else if(a==2)   			//START 2
					 {
						 au(5);
						 a=in(4);
						 if(a==1)
						  {
							  au(3);
							  a=in(5);
							  if(a==7)
							   {
								   au(4);
								   a=in(6);
								   if (a==6)
								    {
									    au(8);
									    bl(9);
								    }
								   else {vic(6,2);goto end;}
							   }
							  else {vic(7,8);goto end;}
						  }

						 else if(a==3)
						  {
							  au(1);
							  a=in(5);
							  if(a==9)
							   {
								   au(6);
								   a=in(6);
								   if(a==4)
								    {
									    au(7);
									    bl(8);
								    }
								   else {vic(4,2);goto end;}
							   }
							  else {vic(9,7);goto end;}
						  }

						 else if(a==4)
						  {
							  au(3);
							  a=in(5);
							  if(a==7)
							   {
								   au(1);
								   a=in(6);
								   if (a==9)
								    {
									    au(8);
									    bl(6);
								    }
								   else {vic(9,7);goto end;}
							   }
							  else {vic(7,8);goto end;}
						  }

						 else if(a==6)
						  {
							  au(9);
							  a=in(5);
							  if(a==1)
							   {
								   au(3);
								   a=in(6);
								   if(a==7)
								    {
									    au(4);
									    bl(8);
								    }
								   else {vic(7,8);goto end;}
							   }
							  else {vic(1,7);goto end;}
						  }

						 else if(a==7)
						  {
							  au(1);
							  a=in(5);
							  if(a==9)
							   {
								   au(8);
								   a=in(6);
								   if(a==3)
								    {
									    au(6);
									    bl(4);
								    }
								   else if(a==4)
								    {
									    au(6);
									    bl(3);
								    }
								   else if(a==6)
								    {
									    au(3);
									    bl(4);
								    }
								   else {vic(7,8);goto end;}
							   }
							  else {vic(9,7);goto end;}
						  }

						 else if(a==8)
						  {
							  au(4);
							  a=in(5);
							  if(a==6)
							   {
								   au(9);
								   a=in(6);
								   if(a==1)
								    {
									    au(3);
									    bl(7);
								    }
								   else {vic(1,7);goto end;}
							    }
							  else {vic(6,2);goto end;}
						  }

						 else if(a==9)
						  {
							  au(6);
							  a=in(5);
							  if(a==4)
							   {
								   au(7);
								   a=in(6);
								   if(a==3)
								    {
									au(1);
									bl(8);
								    }
								   else {vic(3,8);goto end;}
							   }
							  else {vic(4,2);goto end;}
						  }
					 }                                //END 2

					else if (a==3)                    //START 3
					 {
						 au(5);
						 a=in(4);
						 if(a==1)
						  {
							  au(2);
							  a=in(5);
							  if(a==8)
							   {
								   au(4);
								   a=in(6);
								   if (a==6)
								    {
									    au(9);
									    bl(7);
								    }
								   else {vic(6,2);goto end;}
							   }
							  else {vic(5,5);goto end;}
						  }

						 else if(a==2)
						  {
							  au(1);
							  a=in(5);
							  if(a==9)
							   {
								   au(6);
								   a=in(6);
								   if(a==4)
								    {
									    au(7);
									    bl(8);
								    }
								   else {vic(4,2);goto end;}
							   }
							  else {vic(9,7);goto end;}
						  }

						 else if(a==4)
						  {
							  au(2);
							  a=in(5);
							  if(a==8)
							   {
								   au(9);
								   a=in(6);
								   if (a==1)
								    {
									    au(7);
									    bl(6);
								    }
								   else {vic(5,7);goto end;}
							   }
							  else {vic(5,5);goto end;}
						  }

						 else if(a==6)
						  {
							  au(9);
							  a=in(5);
							  if(a==1)
							   {
								   au(2);
								   a=in(6);
								   if(a==8)
								    {
									    au(4);
									    bl(7);
								    }
								   else {vic(5,5);goto end;}
							   }
							  else {vic(1,7);goto end;}
						  }

						 else if(a==7)
						  {
							  au(2);
							  a=in(5);
							  if(a==8)
							   {
								   au(9);
								   a=in(6);
								   if(a==1)
								    {
									    au(4);
									    bl(6);
								    }

								   else {vic(5,7);goto end;}
							   }
							   else {vic(5,5);goto end;}
						  }

						 else if(a==8)
						  {
							  au(4);
							  a=in(5);
							  if(a==6)
							   {
								   au(9);
								   a=in(6);
								   if(a==1)
								    {
									    au(2);
									    bl(7);
								    }
								   else {vic(1,7);goto end;}
							   }
							  else {vic(6,2);goto end;}
						  }

						 else if(a==9)
						  {
							  au(6);
							  a=in(5);
							  if(a==4)
							   {
								   au(8);
								   a=in(6);
								   if(a==2)
								    {
									    au(1);
									    bl(7);
								    }
								   else {vic(2,5);goto end;}
							   }
							  else {vic(4,2);goto end;}
						  }
					 }                                //END 3

					 if (a==4)                       //START 4
					 {
						 au(5);
						 a=in(4);
						 if(a==1)
						  {
							  au(7);
							  a=in(5);
							  if(a==3)
							   {
								   au(2);
								   a=in(6);
								   if (a==8)
								    {
									    au(9);
									    bl(6);
								    }
								   else {vic(8,5);goto end;}
							   }
							  else {vic(3,8);goto end;}
						  }

						 else if(a==2)
						  {
							  au(1);
							  a=in(5);
							  if(a==9)
							   {
								   au(3);
								   a=in(6);
								   if(a==7)
								    {
									    au(8);
									    bl(6);
								    }
								   else {vic(7,8);goto end;}
							   }
							  else {vic(9,7);goto end;}
						  }

						 else if(a==3)
						  {
							  au(2);
							  a=in(5);
							  if(a==8)
							   {
								   au(9);
								   a=in(6);
								   if (a==1)
								    {
									    au(7);
									    bl(6);
								    }
								   else {vic(1,7);goto end;}
							   }
							  else {vic(8,5);goto end;}
						  }

						 else if(a==6)
						  {
							  au(9);
							  a=in(5);
							  if(a==1)
							   {
								   au(7);
								   a=in(6);
								   if(a==8)
								    {
									    au(3);
									    vic(3,8);goto end;
								    }
								   else {vic(7,3);goto end;}
							   }
							  else {vic(1,7);goto end;}
						  }

						 else if(a==7)
						  {
								  au(1);
								  a=in(5);
								  if(a==9)
								   {
									   au(8);
									   a=in(6);
									   if(a==2)
									    {
										    au(3);
										    bl(6);
								    }
								   else {vic(2,5);goto end;}
						   }
						  else {vic(9,7);goto end;}
					  }

					 else if(a==8)
					  {
						  au(7);
						  a=in(5);
						  if(a==3)
						   {
							   au(9);
							   a=in(6);
							   if(a==1)
							    {
								    au(2);
								    bl(6);
							    }
							   else {vic(1,7);goto end;}
						   }
						  else {vic(3,8);goto end;}
					  }

					 else if(a==9)
					  {
						  au(8);
						  a=in(5);
						  if(a==2)
						   {
							   au(3);
							   a=in(6);
							   if(a==7)
							    {
								    au(1);
								    bl(6);
							    }
							   else {vic(7,8);goto end;}
						   }
						  else {vic(2,5);goto end;}
					  }
				 }                                //END 5

				if (a==6)                    //START 6
				 {
					 au(5);
					 a=in(4);
					 if(a==1)
					  {
						  au(2);
						  a=in(5);
						  if(a==8)
						   {
							   au(7);
							   a=in(6);
							   if (a==3)
							    {
								    au(9);
								    bl(4);
							    }
							   else {vic(3,8);goto end;}
						   }
						  else {vic(8,5);goto end;}
					  }

					 else if(a==2)
					  {
						  au(1);
						  a=in(5);
						  if(a==9)
						   {
							   au(3);
							   a=in(6);
							   if(a==7)
							    {
								    au(8);
								    bl(6);
							    }
							   else {vic(7,8);goto end;}
						   }
						  else {vic(9,7);goto end;}
					  }

					 else if(a==3)
					  {
						  au(2);
						  a=in(5);
						  if(a==8)
						   {
							   au(9);
							   a=in(6);
							   if (a==1)
							    {
								    au(7);
								    bl(4);
							    }
							   else {vic(1,7);goto end;}
						   }
						  else {vic(8,5);goto end;}
					  }

					 else if(a==4)
					  {
						  au(9);
						  a=in(5);
						  if(a==1)
						   {
							   au(7);
							   a=in(6);
							   if(a==8)
							    {
								    au(3);
								    vic(3,8);
							    }
							   else {vic(7,3);goto end;}
						   }
						  else {vic(1,7);goto end;}
					  }

					 else if(a==7)
					  {
						  au(2);
						  a=in(5);
						  if(a==8)
						   {
							   au(9);
							   a=in(6);
							   if(a==1)
							    {
								    au(4);
								    bl(3);
							    }
							   else {vic(1,7);goto end;}
						   }
						  else {vic(8,5);goto end;}
					  }

					 else if(a==8)
					  {
						  au(7);
						  a=in(5);
						  if(a==3)
						   {
							   au(9);
							   a=in(6);
							   if(a==1)
							    {
								    au(2);
								    bl(4);
							    }
							   else vic(1,7);
						   }
						  else vic(3,8);
					  }

					 else if(a==9)
					  {
						  au(3);
						  a=in(5);
						  if(a==7)
						   {
							   au(8);
							   a=in(6);
							   if(a==2)
							    {
								    au(1);
								    bl(4);
							    }
							   else vic(2,5);
						   }
						  else vic(7,8);
					  }
				 }                                //END 6

				 if (a==7)                    //START 7
				 {
					 au(5);
					 a=in(4);
					 if(a==1)
					  {
						  au(4);
						  a=in(5);
						  if(a==6)
						   {
							   au(2);
							   a=in(6);
							   if (a==8)
							    {
								    au(9);
								    bl(3);
							    }
							   else {vic(8,5);goto end;}
						   }
						  else {vic(6,2);goto end;}
					  }

					 else if(a==2)
					  {
						  au(4);
						  a=in(5);
						  if(a==6)
						   {
							   au(9);
							   a=in(6);
							   if(a==1)
							    {
								    au(3);
								    bl(8);
							    }
							   else {vic(1,7);goto end;}
						   }
						  else {vic(6,2);goto end;}
					  }

					 else if(a==3)
					  {
						  au(2);
						  a=in(5);
						  if(a==8)
						   {
							   au(9);
							   a=in(6);
							   if (a==1)
							    {
								    au(4);
								    bl(6);
							    }
							   else {vic(1,7);goto end;}
						   }
						  else {vic(8,5);goto end;}
					  }

					 else if(a==4)
					  {
						  au(1);
						  a=in(5);
						  if(a==9)
						   {
							   au(8);
							   a=in(6);
							   if(a==2)
							    {
								    au(6);
								    bl(3);
							    }
							   else {vic(2,5);goto end;}
						   }
						  else {vic(9,7);goto end;}
					  }

					 else if(a==6)
					  {
						  au(8);
						  a=in(5);
						  if(a==2)
						   {
							   au(1);
							   a=in(6);
							   if(a==9)
							    {
								    au(3);
								    bl(4);
							    }
							   else {vic(9,7);goto end;}
						   }
						  else {vic(2,5);goto end;}
					  }

					  else if(a==8)
					  {
						  au(9);
						  a=in(5);
						  if(a==1)
						   {
							   au(4);
							   a=in(6);
							   if(a==6)
							    {
								    au(3);
								    bl(2);
							    }
							   else {vic(6,2);goto end;}
						   }
						  else {vic(1,7);goto end;}
					  }

					 else if(a==9)
					  {
						  au(8);
						  a=in(5);
						  if(a==2)
						   {
							   au(4);
							   a=in(6);
							   if(a==6)
							    {
								    au(3);
								    bl(1);
							    }
							   else {vic(6,2);goto end;}
						   }
						  else {vic(2,5);goto end;}
					  }   					 //END 7
				 }

				 if (a==8)		                 //START 8
				 {
					 au(5);
					 a=in(4);
					 if(a==1)
					  {
						  au(4);
						  a=in(5);
						  if(a==6)
						   {
							   au(3);
							   a=in(6);
							   if (a==7)
							    {
								    au(9);
								    bl(2);
							    }
							   else {vic(7,8);goto end;}
						   }
						  else {vic(6,2);goto end;}
					  }

					 else if(a==2)
					  {
						  au(4);
						  a=in(5);
						  if(a==6)
						   {
							   au(9);
							   a=in(6);
							   if(a==1)
							    {
								    au(3);
								    bl(7);
							    }
							   else {vic(1,7);goto end;}
						   }
						  else {vic(6,2);goto end;}
					  }

					 else if(a==3)
					  {
						  au(6);
						  a=in(5);
						  if(a==4)
						   {
							   au(1);
							   a=in(6);
							   if (a==9)
							    {
								    au(7);
								    bl(2);
							    }
							   else {vic(9,7);goto end;}
						   }
						  else {vic(4,2);goto end;}
					  }

					 else if(a==4)
					  {
						  au(1);
						  a=in(5);
						  if(a==9)
						   {
							   au(7);
							   a=in(6);
							   if(a==3)
							    {
								    au(6);
								    bl(2);
							    }
							   else {vic(3,8);goto end;}
						   }
						  else {vic(9,7);goto end;}
					  }

					 else if(a==6)
					  {
						  au(3);
						  a=in(5);
						  if(a==7)
						   {
							   au(9);
							   a=in(6);
							   if(a==1)
							    {
								    au(4);
								    bl(2);
							    }
							   else {vic(1,7);goto end;}
						   }
						  else {vic(7,8);goto end;}
					  }

					 else if(a==7)
					  {
						  au(9);
						  a=in(5);
						  if(a==1)
						   {
							   au(4);
							   a=in(6);
							   if(a==6)
							    {
								    au(3);
								    bl(2);
							    }
							   else {vic(6,2);goto end;}
						   }
						  else {vic(1,7);goto end;}
					  }

					 else if(a==9)
					  {
						  au(7);
						  a=in(5);
						  if(a==3)
						   {
							   au(6);
							   a=in(6);
							   if(a==4)
							    {
								    au(2);
								    bl(1);
							    }
							   else {vic(4,2);goto end;}
						   }
						  else {vic(3,8);goto end;}
					  }
				 }
						     //END 8
				 if (a==9)                    //START 9
				 {
					 au(5);
					 a=in(4);
					 if(a==1)
					  {
						  au(2);
						  a=in(5);
						  if(a==8)
						   {
							   au(7);
							   a=in(6);
							   if (a==3)
							    {
								    au(6);
								    bl(4);
							    }
							   else {vic(3,8);goto end;}
						   }
						  else {vic(8,5);goto end;}
					  }

					 else if(a==2)
					  {
						  au(4);
						  a=in(5);
						  if(a==6)
						   {
							   au(7);
							   a=in(6);
							   if(a==3)
							    {
								    vic(1,4);goto end;
							    }
							   else {vic(3,8);goto end;}
						   }
						  else {vic(6,2);goto end;}
					  }

					 else if(a==3)
					  {
						  au(6);
						  a=in(5);
						  if(a==4)
						   {
							   au(8);
							   a=in(6);
							   if (a==2)
							    {
								    au(1);
								    bl(7);
							    }
							   else {vic(2,5);goto end;}
						   }
						  else {vic(4,2);goto end;}
					  }

					 else if(a==4)
					  {
						  au(8);
						  a=in(5);
						  if(a==2)
						   {
							   au(3);
							   a=in(6);
							   if(a==7)
							    {
								    au(1);
								    bl(6);
							    }
							   else {vic(7,8);goto end;}
						   }
						  else {vic(2,5);goto end;}
					  }

					 else if(a==6)
					  {
						  au(3);
						  a=in(5);
						  if(a==7)
						   {
							   au(8);
							   a=in(6);
							   if(a==2)
							    {
								    au(4);
								    bl(1);
							    }
							   else {vic(2,5);goto end;}
						   }
						  else {vic(7,8);goto end;}
					  }

					 else if(a==7)
					  {
						  au(8);
						  a=in(5);
						  if(a==2)
						   {
							   au(4);
							   a=in(6);
							   if(a==6)
							    {
								    au(3);
								    bl(1);
							    }
							   else {vic(6,2);goto end;}
						   }
						  else {vic(2,5);goto end;}
					  }

					 else if(a==8)
					  {
						  au(7);
						  a=in(5);
						  if(a==3)
						   {
							   au(6);
							   a=in(6);
							   if(a==4)
							    {
								    au(2);
								    bl(1);
							    }
							   else {vic(4,2);goto end;}
						   }
						  else {vic(3,8);goto end;}
					  }   				     //END 9
				 }

				else
				goto end;                            //END ALL


				end:
				gotoxy(28,24);
				cputs("Do you want to play again?(Y/N)");
				cin>>ch;
			}
			while(ch=='y'||ch=='Y');
			goto start;                         //COMP VS MAN (END)
		}


		else if (c==2)                 //MAN VS MAN (START)
		{
			char n1[10],n2[10],ch;
			men:
			das();
			gotoxy(1,5);
			cout<<"Enter the name of player 1:";
			cin>>n1;
			gotoxy(1,6);
			cout<<"Enter the name of player 2:";
			cin>>n2;

			char a;
			do{
				doc();
				if (g==1)
				col1();
				else if (g==2)
				col();
				else col();
				char p1[5],p2[5],q;
				for(i=0;i<5;i++)
				{
					p1[i]='0';
					p2[i]='0';
				}
				gotoxy(2,2);
				cout<<n1;
				gotoxy(67,2);
				cout<<n2;
				p1[0]=ino(3);
				p2[0]=inn(3);
				p1[1]=ino(4);
				p2[1]=inn(4);
				p1[2]=ino(5);
				q=dic(p1[0],p1[1],p1[2],p1[3],p1[4]);
				if (q==1)
				{
					gotoxy(1,16);
					cout<<n1<<" wins! Good playing. Congragulations "<<n1;
					goto mend;
				}
				p2[2]=inn(5);
				q=dic(p2[0],p2[1],p2[2],p2[3],p2[4]);
				if (q==1)
				{
					gotoxy(1,16);
					cout<<n2<<" wins! Good playing. Congragulations "<<n2;
					goto mend;
				}
				p1[3]=ino(6);
				q=dic(p1[0],p1[1],p1[2],p1[3],p1[4]);
				if (q==1)
				{
					gotoxy(1,16);
					cout<<n1<<" wins! Good playing. Congragulations "<<n1;
					goto mend;
				}
				p2[3]=inn(6);
				q=dic(p2[0],p2[1],p2[2],p2[3],p2[4]);
				if (q==1)
				{
					gotoxy(1,16);
					cout<<n2<<" wins! Good playing. Congragulations "<<n2;
					goto mend;
				}
				p1[4]=ino(7);
				q=dic(p1[0],p1[1],p1[2],p1[3],p1[4]);
				if (q==1)
				{
					gotoxy(1,16);
					cout<<n1<<" wins! Good playing. Congragulations "<<n1;
					goto mend;
				}
				q=dic(p2[0],p2[1],p2[2],p2[3],p2[4]);
				if (q==1)
				{
				gotoxy(1,16);
				cout<<n2<<" wins! Good playing. Congragulations "<<n2;
				goto mend;
				}
				mend:
				gotoxy(35,22);
				cout<<"Game Over\nWant to play again(Y/N)";
				cin>>ch;
			}
			while (ch=='y'||ch=='Y');
			goto start;
		} 			      //MAN VS MAN (END)





		else goto start;
	}

	else if(c==3)
	{
	clrscr();
	cout<<"\n\n"<<setw(45)<<"NOTS & CROSSESS\n"<<setw(46)<<"The gaming software";
	cout<<"\n\n\t\tDeveloped By Monika Nathawat\n in C++\n\n";
	gotoxy(8,20);
	cout<<"1. Acknoledgements\n";
	gotoxy(8,21);
	cout<<"2. Back\nEnter your choice:";
	int r;
	cin>>r;
	if (r==1)
	{
		gotoxy(1,12);
		cout<<" First of all we would like to thank God for this marvallous achivement.\nWith out his help we would never have made such a software.\n Next we would like to thank our parents for their encouragement and support.\n Then we would like to thank our brothers and sisters for his test plays and his encouragement.\nLast but not the least we would like to thank you for playing\nthis game which is noteven worth counting in this compatitive world. Thank You!";
		getch();
		goto start;
	}
	else goto start;
	}
	else if(c==4)
	{
		clrscr();
		doc();
		gotoxy(1,17);
		cout<<" This is the computer version of the popular game Nots and Crosses which is also\ncalled as Tic Tac Toe.\nRules: A player choces any coloum chosing the corresponding digit. His symbol\n(X/O) appears in the coloum.\nThe next player does the same. This will be\nrepeated till all the coloums are occupied.\nTo win: A Player must capture three corresponding coloums such as 1,2,3.\nPress  any key to see the different winning boards\n ";
		getch();
		col();
		au(1);
		au(2);
		au(3);
		gotoxy(2,25);
		cout<<"Press a key to goto next board";
		getch();
		clrscr();
		col();
		aut(1);
		aut(4);
		aut(7);
		gotoxy(2,24);
		cout<<"Press a key to go to next board";
		getch();
		clrscr();
		col();
		aut(1);
		aut(5);
		aut(9);
		gotoxy(2,24);
		cout<<"Press a key to go to next board";
		getch();
		clrscr();
		col();
		aut(2);
		aut(5);
		aut(8);
		gotoxy(2,24);
		cout<<"Press a key to go to next board";
		getch();

		clrscr();
		col();
		aut(4);
		aut(5);
		aut(6);
		gotoxy(2,24);
		cout<<"Press a key to go to next board";
		getch();

		clrscr();
		col();
		aut(3);
		aut(6);
		aut(9);
		gotoxy(2,24);
		cout<<"Press a key to go to next board";
		getch();

		clrscr();
		col();
		aut(8);
		aut(7);
		aut(9);
		gotoxy(2,24);
		cout<<"Press a key to go to next board";
		getch();

		clrscr();
		col();
		aut(7);
		aut(5);
		aut(3);
		gotoxy(2,24);
		cout<<"Press a key to go to Main menu";
		getch();
		goto start;
		}

		else if (c==5)
		{
			clrscr();
			textcolor(WHITE);
			cout<<"a";
			clrscr();
			cout<<"\n\n"<<setw(45)<<"NOTS & CROSSESS\n"<<setw(46)<<"The gaming software";
			close();
		}

		break;

		default :
			cout<<"a";
			clrscr();
			cout<<"\n\nwrong choice";
			}
		}

		case 3:
			clrscr();
			cout<<"  \n\n\nFirst of all we would like to thank God for this marvallous achivement.\nWith out his help we would never have made such a software.\nNext we would like to thank our parents for their encouragement and support.\nThen we would like to thank our brothers and sisters for his test plays and his encouragement. Last but not the least we would like to thank you for playing\nthis game which is not even worth counting in this compatitive world.\nThank You!";
			break;
		case 4:
			ending();
			break;
		}//end of switch
		cout<<"\n\n";
		cputs("Do you wish to return to Index (Y/N)");
		cin>>choice;

	}while((choice=='y')||(choice=='Y'));

			//end of do while
	clrscr();
	close();
	delay(800);




}
