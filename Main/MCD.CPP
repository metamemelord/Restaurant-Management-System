#include<iostream.h>
#include"conio.h"
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include<process.h>
#include<iomanip.h>
#include"dos.h"
#include"class.h"
#include"struct.h"
void main()
{clrscr();
emp e;
int i;
mcdonalds m;
char ans1,ans2,ans3,ans4;
m.load();
m.anim();
textbackground(BLUE);
textcolor(GREEN);
do
{m.user_bill=0;
clrscr();
hell:
cout<<"\nอออออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออ"<<endl;
cout<<"1. CUSTOMER\n"<<endl;
cout<<"2. STAFF\n"<<endl;
cout<<"3. EXIT\n"<<endl;
cout<<"\n\nออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n"<<endl;
cout<<"PLEASE ENTER YOUR CHOICE : ";
ans1=getch();
if(ans1=='1')
{ clrscr();
cout<<"\nอออออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออ"<<endl;
cout<<"1. VIEW MENU AND PLACE ORDER\n"<<endl;
cout<<"2. GO BACK TO LAST PAGE\n"<<endl;;
cout<<"3. EXIT\n"<<endl;
cout<<"\n\nออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n"<<endl;
cout<<"PLEASE ENTER YOUR CHOICE : ";
ans4=getch();
if(ans4=='1')
{clrscr();
cout<<"\nอออออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออ"<<endl;
cout<<"อออออออออออออออออออออออออออออออออออออ MENU อออออออออออออออออออออออออออออออออออออ\n"<<endl;
m.menu();
i=m.ansU;
if(i>=49&&i<=55)
{cout<<"\n\nออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n"<<endl;
cout<<"\n\nWOULD YOU LIKE TO ORDER A DISH NOW (Y/N) : ";
cin>>ans3;
cout<<endl<<endl;
if(ans3=='Y'||ans3=='y')
{m.order();
}
else
{clrscr();
goto hell;
}
}
}
else if(ans4=='2')
{clrscr();
goto hell;
}
else if(ans4=='3')
{clrscr();
m.pexit();
exit(0);
}
}
else if(ans1=='3')
{m.pexit();
exit(0);
}
else if(ans1=='2')
{ clrscr();
cout<<"\n                        THIS AREA IS ONLY FOR STAFF"<<endl;
cout<<"\n\n                            USERNAME : ";
cin>>e.username;
cout<<"\n\n                            PASSWORD : ";
int n=-1;
char pass[30];
do
{n++;
pass[n]=getch();
if(pass[n]!=13)
{
e.password[n]=pass[n];
cout<<"*";
}
else break;
}while(1);
e.password[n]='\0';
cout<<"\n \n             PLEASE WAIT WHILE WE VERIFY THE LOGIN DETAILS";
for(n=0;n<=2;n++)
{cout<<".";
delay(200);
}
cout<<endl<<endl<<" ";
for(int h=0;h<39;h++)
 {
 cout<<"Û";
 delay(40);
 }
for(h=0;h<39;h++)
 {
 cout<<"Û";
 delay(30);
 }
if(strcmpi(e.username,"USER")==0&&strcmpi(e.password,"HEALTHEWORLD")==0)
{
clrscr();
cout<<"\nอออออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออ"<<endl;
cout<<"\n1. ADD A NEW DISH\n";
cout<<"\n2. MODIFY AN EXISTING DISH\n";
cout<<"\n3. DELETE A DISH\n";
cout<<"\n4. GO BACK TO MENU\n";
cout<<"\n5. EXIT";
cout<<"\n\nออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n"<<endl;
cout<<"\nENTER YOUR CHOICE : ";
ans2=getch();
if(ans2=='1')
{ clrscr();
cout<<"\nอออออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออ"<<endl;
m.getdish();
}
else if(ans2=='2')
{ clrscr();
cout<<"\nอออออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออ"<<endl;
m.modify();
}
else if(ans2=='3')
{ clrscr();
cout<<"\nอออออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออ"<<endl;
m.deldish();
}
else if(ans2=='4')
{clrscr();
goto hell;
}
else if(ans2=='5')
{m.pexit();
exit(0);
}
}
else
{clrscr();
m.wrong();
delay(500);
cout<<endl;
if(strcmpi(e.password,"HEALTHEWORLD")!=0 && strcmpi(e.username,"USER")==0)
cout<<"                                 WRONG PASSWORD"<<endl;
else if(strcmpi(e.password,"HEALTHEWORLD")==0 && strcmpi(e.username,"USER")!=0)
cout<<"                                 WRONG USERNAME"<<endl;
else if(strcmpi(e.password,"HEALTHEWORLD")!=0 && strcmpi(e.username,"USER")!=0)
cout<<"                           WRONG USERNAME AND PASSWORD"<<endl;
cout<<"\n                                ACCESS DENIED!!!"<<endl;
getch();
}
}
}while(1);
}
