class mcdonalds
{
char user_name[30];
int dish_quantity;

public:
char ansU;
float user_bill;

void getdish()
{
dish d,p;
char ans='Y',check='b';
ifstream fin;
ofstream fout;

do
{
fin.open("dish.dat",ios::in|ios::binary);
  fout.open("temp.dat",ios::binary|ios::app);
cout<<"\nENTER DISH CODE : ";
cin>>p.code;
cout<<"\nENTER DISH NAME : ";
gets(p.name);
cout<<"\nENTER DISH PRICE : ";
cin>>p.price;
cout<<"\nENTER DISH TYPE ( VEG / NON VEG ) : ";
gets(p.type);
check='b';
while(fin.read((char*)&d,sizeof(d)))
{  if(p.code < d.code)
  {fout.write((char*)&p,sizeof(p));
  check='a';
  break;
  }
  else if(p.code==d.code)
  {cout<<"\nDISH WITH THIS DISH CODE ALREADY EXIST \n";
  getch();
  break;
  }
  else fout.write((char*)&d,sizeof(d));

}
if (check =='b')
fout.write((char*)&p,sizeof(p));
else
{
int i=fin.tellg();
fin.seekg(i-46);
while(fin.read((char*)&d,sizeof(d)))
	 {fout.write((char*)&d,sizeof(d));
	 }check='b';
}
cout<<"\nPLEASE WAIT WHILE "<<p.name<<" IS BEING ADDED"<<endl<<endl<<" ";
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
fin.close();
fout.close();
remove("dish.dat");
rename("temp.dat","dish.dat") ;
cout<<"\n\nDO YOU WANT TO CONTINUE (Y/N) : ";
cin>>ans;
}while(ans=='Y');
}



void menu()
{
dish d;ifstream fin;
cout<<"1. SPICY DELIGHTS\n"<<endl;
cout<<"2. EXTRA VALUE MEALS\n"<<endl;
cout<<"3. HAPPY PRICE MENU\n"<<endl;
cout<<"4. BREAKFAST MENU\n"<<endl;
cout<<"5. FAVORITES\n"<<endl;
cout<<"6. HAPPY MEALS\n"<<endl;
cout<<"7. BEVERAGES AND DESSERTS\n"<<endl;
cout<<"ออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
cout<<"\nPLEASE ENTER YOUR CHOICE : ";
ansU=getch();
if(ansU=='1')
{fin.open("dish.dat",ios::in|ios::binary);
fin.seekg(0);
clrscr();
cout<<"\nอออออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออ"<<endl<<endl;
cout<<"ออออออออออออออออออออออออออออออออ SPICY DELIGHTS ออออออออออออออออออออออออออออออออ"<<endl;
cout<<setw(9)<<"\nDISH CODE"<<setw(25)<<"\tDISH NAME"<<setw(10)<<"\tDISH PRICE"<<setw(10)<<"\tDISH TYPE"<<endl;
if(!fin)
cout<<"not fin";
while(fin.read((char*)&d,sizeof(d)))
{if(d.code>=101&&d.code<200)
cout<<setw(9)<<d.code<<"\t"<<setw(25)<<d.name<<"\t"<<setw(10)<<d.price<<"\t"<<setw(9)<<d.type<<endl;
} getch(); fin.close();
}

else if(ansU=='2')
{fin.open("dish.dat",ios::in|ios::binary);
fin.seekg(0);
clrscr();
cout<<"\nอออออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออ"<<endl<<endl;
cout<<"ออออออออออออออออออออออออออออออ EXTRA VALUE MEALS อออออออออออออออออออออออออออออออ"<<endl;
cout<<setw(9)<<"\nDISH CODE"<<setw(25)<<"\tDISH NAME"<<setw(10)<<"\tDISH PRICE"<<setw(10)<<"\tDISH TYPE"<<endl;
if(!fin)
cout<<"not fin";
while(fin.read((char*)&d,sizeof(d)))
{if(d.code>=201&&d.code<300)
cout<<setw(9)<<d.code<<"\t"<<setw(25)<<d.name<<"\t"<<setw(10)<<d.price<<"\t"<<setw(9)<<d.type<<endl;
} getch(); fin.close();
}

else if(ansU=='3')
{fin.open("dish.dat",ios::in|ios::binary);
fin.seekg(0);
clrscr();
cout<<"\nอออออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออ"<<endl<<endl;
cout<<"อออออออออออออออออออออออออออออออ HAPPY PRICE MENU อออออออออออออออออออออออออออออออ"<<endl;
cout<<setw(9)<<"\nDISH CODE"<<setw(25)<<"\tDISH NAME"<<setw(10)<<"\tDISH PRICE"<<setw(10)<<"\tDISH TYPE"<<endl;
if(!fin)
cout<<"not fin";
while(fin.read((char*)&d,sizeof(d)))
{if(d.code>=301&&d.code<400)
cout<<setw(9)<<d.code<<"\t"<<setw(25)<<d.name<<"\t"<<setw(10)<<d.price<<"\t"<<setw(9)<<d.type<<endl;
} getch(); fin.close();
}

else if(ansU=='4')
{fin.open("dish.dat",ios::in|ios::binary);
fin.seekg(0);
clrscr();
cout<<"\nอออออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออ"<<endl<<endl;
cout<<"ออออออออออออออออออออออออออออออออ BREAKFAST MENU ออออออออออออออออออออออออออออออออ"<<endl;
cout<<setw(9)<<"\nDISH CODE"<<setw(25)<<"\tDISH NAME"<<setw(10)<<"\tDISH PRICE"<<setw(10)<<"\tDISH TYPE"<<endl;
if(!fin)
cout<<"not fin";
while(fin.read((char*)&d,sizeof(d)))
{if(d.code>=401&&d.code<500)
cout<<setw(9)<<d.code<<"\t"<<setw(25)<<d.name<<"\t"<<setw(10)<<d.price<<"\t"<<setw(9)<<d.type<<endl;
} getch(); fin.close();
}

else if(ansU=='5')
{fin.open("dish.dat",ios::in|ios::binary);
fin.seekg(0);
clrscr();
cout<<"\nอออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออออ"<<endl<<endl;
cout<<"ออออออออออออออออออออออออออออออออ FAVOURITES ออออออออออออออออออออออออออออออออออออ"<<endl;
cout<<setw(9)<<"\nDISH CODE"<<setw(25)<<"\tDISH NAME"<<setw(10)<<"\tDISH PRICE"<<setw(10)<<"\tDISH TYPE"<<endl;
if(!fin)
cout<<"not fin";
while(fin.read((char*)&d,sizeof(d)))
{if(d.code>=501&&d.code<600)
cout<<setw(9)<<d.code<<"\t"<<setw(25)<<d.name<<"\t"<<setw(10)<<d.price<<"\t"<<setw(9)<<d.type<<endl;
} getch(); fin.close();
}

else if(ansU=='6')
{fin.open("dish.dat",ios::in|ios::binary);
fin.seekg(0);
clrscr();
cout<<"\nอออออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออ"<<endl<<endl;
cout<<"อออออออออออออออออออออออออออออออออ HAPPY MEALS ออออออออออออออออออออออออออออออออออ"<<endl;
cout<<setw(9)<<"\nDISH CODE"<<setw(25)<<"\tDISH NAME"<<setw(10)<<"\tDISH PRICE"<<setw(10)<<"\tDISH TYPE"<<endl;
if(!fin)
cout<<"not fin";
while(fin.read((char*)&d,sizeof(d)))
{if(d.code>=601&&d.code<700)
cout<<setw(9)<<d.code<<"\t"<<setw(25)<<d.name<<"\t"<<setw(10)<<d.price<<"\t"<<setw(9)<<d.type<<endl;
} getch(); fin.close();
}

else if(ansU=='7')
{fin.open("dish.dat",ios::in|ios::binary);
fin.seekg(0);
clrscr();
cout<<"\nอออออออออออออออออออออออออออออ WELCOME TO McDONALDS อออออออออออออออออออออออออออออ"<<endl<<endl;
cout<<"อออออออออออออออออออออออออออออ BEVERAGES & DESSERTS อออออออออออออออออออออออออออออ"<<endl;
cout<<setw(9)<<"\nDISH CODE"<<setw(25)<<"\tDISH NAME"<<setw(10)<<"\tDISH PRICE"<<setw(10)<<"\tDISH TYPE"<<endl;
if(!fin)
cout<<"not fin";
while(fin.read((char*)&d,sizeof(d)))
{if(d.code>=701&&d.code<800)
cout<<setw(9)<<d.code<<"\t"<<setw(25)<<d.name<<"\t"<<setw(10)<<d.price<<"\t"<<setw(9)<<d.type<<endl;
}fin.close();
}
}


void order()
{
const float tax_rate=12.36;
char ans1,ans2,ans3;
float amount,total,a;
dish d,p,n;
ifstream fin;
cout<<"PLEASE ENTER NAME  : ";
gets(user_name);


do
{
do
{ fin.open("dish.dat",ios::in|ios::binary);
 ans2='Y';
  ans1='N';

 cout<<"\nENTER DISH CODE : " ;
  cin>>p.code;
while (fin.read((char*)&d,46))
  {
  if(p.code==d.code)
	  {
	  cout<<"\nYOU HAVE CHOSEN : "<<d.name;
	  amount=d.price;
	  cout<<"\n\nDID YOU GET YOUR DESIRED DISH (Y/N) : ";
	  cin>>ans2;

	  }
	  if(ans2=='N')
	  {fin.close();}
  }

}while(ans2=='N');

cout<<"\nENTER QUANTITY : ";
cin>>dish_quantity;
user_bill=user_bill+(amount*dish_quantity);
cout<<"\n\nออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n"<<endl;
cout<<"\nDO YOU WANT TO ORDER ANOTHER DISH (Y/N) : ";
cin>>ans1;
if(ans1=='Y')
{cout<<"\nDO YOU WANT TO ORDER FROM OTHER CATEGORY (Y/N) : ";
cin>>ans3;
cout<<"\n\nออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n"<<endl;
if(ans3=='Y')
{
menu();
}
}

fin.close();
}while(ans1=='Y');
cout<<"\nPLEASE WAIT WHILE WE PLACE YOUR ORDER"<<endl<<endl<<" ";
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
cout<<"\n\nYOUR TOTAL BILL IS : "<<user_bill;
cout<<"\n\nTAXES              : "<<(user_bill*tax_rate/100);
total=(user_bill+((user_bill*tax_rate)/100));
cout<<"\n\nNET PAYBLE AMOUNT  : "<<total;
do{
cout<<"\n\nRUPPEES GIVEN      : ";
cin>>a;
if (a<total)
cout<<"\n\nTHIS AMOUNT IS INVALID";
}while(a<total);
cout<<"\nBALANCE            : "<<setprecision(4)<<(a-total);
cout<<"\n\n\nTHANKS FOR COMING, PLEASE VISIT AGAIN";
getch();

}


void modify()
{ifstream fin("dish.dat",ios::in|ios::binary);
ofstream fout("temp.dat",ios::out|ios::binary);
dish d,p;
char ans='Y';
cout<<"\nENTER DISH CODE OF THE DISH WHICH IS BEING MODIFIED : ";
cin>>p.code;
fin.seekg(0);
while(!fin.eof())
{
fin.read((char*)&d,sizeof(d));
if (p.code==d.code)
{cout<<"\nYOU ARE ABOUT TO MODIFY : "<<d.name<<endl;
 cout<<"\nCONTINUE (Y/N): ";
 cin>>ans;
 break;

}
}
if(ans!='N')
{
cout<<"\nENTER NEW NAME : ";
gets(p.name);

cout<<"\nENTER PRICE : ";
cin>>p.price;

cout<<"\nENTER TYPE : ";
gets(p.type);
fin.seekg(0);
while (fin.read((char*)&d,sizeof(d)))
{
if(p.code<d.code||p.code>d.code)
  fout.write((char*)&d,46);
else if(p.code=d.code)
 fout.write((char*)&p,46);
}
cout<<"\n \nPLEASE WAIT WHILE THE DISH IS BEING MODIFIED";
for(int n=0;n<=2;n++)
{cout<<".";
delay(200);
}
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
cout<<endl<<endl<<p.name<<" HAS BEEN SUCCESSFULLY ADDED"<<endl;
getch();
fin.close();
fout.close();
remove("dish.dat");
rename("temp.dat","dish.dat");
}
else {fin.close();
fout.close();
}
}


void deldish()
{ifstream fin("dish.dat",ios::in|ios::binary);
 ofstream fout("temp.dat",ios::app|ios::binary);
dish d,p ;
char ans='N';
cout<<"\nENTER DISH CODE OF THE DISH WHICH YOU WISH TO DELETE : ";
cin>>p.code;
fin.seekg(0);
while(!fin.eof())
{
fin.read((char*)&d,sizeof(d));
if (p.code==d.code)
{cout<<"\nYOU ARE ABOUT TO DELETE : "<<d.name<<endl;
 cout<<"\nCONTINUE (Y/N): ";
 cin>>ans;
 break;

}
}
fin.seekg(0);
if(ans!='N')
{while (fin.read((char*)&d,sizeof(d)))
{
if(p.code!=d.code)
  fout.write((char*)&d,46);
}
cout<<"\n \n               PLEASE WAIT WHILE THE DISH IS BEING DELETED";
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
cout<<endl<<"\nDESIRED DISH HAS BEEN SUCCESSFULLY DELETED"<<endl;
getch();
fin.close();
fout.close();
remove("dish.dat");
rename("temp.dat","dish.dat");
}
else
{fin.close();
 fout.close();
}
}
void load()
{int i;
cout<<"\n\n\n\n\n\n\n\n\n                      PLEASE WAIT WHILE THE DATABASE LOADS";
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
delay(900);
cout<<"\n\n                           DATABASE LOADING COMPLETE";
delay(900);
cout<<"\n\n                           PRESS ANY KEY TO CONTINUE";
for(i=0;i<=2;i++)
{cout<<".";
delay(500);}
getch();
textcolor(YELLOW);
textbackground(RED);
clrscr();


}

void anim()
{int i;

{
for(i=0;i<=10;i++)
{delay(20);
}
cout<<endl<<endl<<"                                ÜÜÜ        ÜÜÜ"<<endl;
for(i=0;i<=10;i++)
{delay(20);
}
cout<<"                               ÜÜÜÜÜ      ÜÜÜÜÜ"<<endl;
for(i=0;i<=10;i++)
{delay(20);
}
cout<<"                              ÜÜ   ÜÜ    ÜÜ   ÜÜ"<<endl;
for(i=0;i<=10;i++)
{delay(20);
}
cout<<"                             ÜÜ     ÜÜ  ÜÜ     ÜÜ"<<endl;
for(i=0;i<=10;i++)
{delay(20);
}
cout<<"                            ÜÜ       ÜÜÜÜ       ÜÜ"<<endl;
for(i=0;i<=10;i++)
{delay(20);
}
cout<<"                            ÜÜ        ÜÜ        ÜÜ"<<endl;
for(i=0;i<=10;i++)
{delay(20);
}
cout<<"                            ÜÜ        ÜÜ        ÜÜ"<<endl;
for(i=0;i<=10;i++)
{delay(20);
}
cout<<"                            ÜÜ        ÜÜ        ÜÜ"<<endl;
for(i=0;i<=10;i++)
{delay(20);
}
cout<<"                            ÜÜ                  ÜÜ"<<endl;
for(i=0;i<=10;i++)
{delay(20);
}
cout<<"                             ÜÜ                ÜÜ"<<endl<<endl;
for(i=0;i<=10;i++)
{delay(20);
}
}
for (i=20;i>=1;i--)
{clrscr();

cout<<endl<<endl;
cout<<"                                ÜÜÜ        ÜÜÜ"<<endl;
cout<<"                               ÜÜÜÜÜ      ÜÜÜÜÜ    "<<endl;
cout<<"                              ÜÜ   ÜÜ    ÜÜ   ÜÜ   "<<endl;
cout<<"                             ÜÜ     ÜÜ  ÜÜ     ÜÜ  "<<endl;
cout<<"                            ÜÜ       ÜÜÜÜ       ÜÜ "<<endl;
cout<<"                            ÜÜ        ÜÜ        ÜÜ "<<endl;
cout<<"                            ÜÜ        ÜÜ        ÜÜ "<<endl;
cout<<"                            ÜÜ        ÜÜ        ÜÜ "<<endl;
cout<<"                            ÜÜ                  ÜÜ "<<endl;
cout<<"                             ÜÜ                ÜÜ  "<<endl;


gotoxy(i,17);
cout<<"      @@     @@          @@@@@@@                                   @    ";
gotoxy(i,18);
cout<<"      @@@   @@@  @@@@    @@    @@   @@@@  @   @  @@@  @     @@@@   @  @@@@ ";
gotoxy(i,19);
cout<<"      @@ @ @ @@ @        @@     @@ @    @ @@  @ @   @ @     @   @    @     ";
gotoxy(i,20);
cout<<"      @@  @  @@ @        @@     @@ @    @ @ @ @ @@@@@ @     @    @   @@@@ ";
gotoxy(i,21);
cout<<"      @@     @@ @        @@    @@  @    @ @  @@ @   @ @     @   @        @";
gotoxy(i,22);
cout<<"      @@     @@  @@@@    @@@@@@@    @@@@  @   @ @   @ @@@@@ @@@@     @@@@ ";
delay(100);
clrscr();
}
cout<<endl<<endl;
cout<<"                                ÜÜÜ        ÜÜÜ"<<endl;
cout<<"                               ÜÜÜÜÜ      ÜÜÜÜÜ"<<endl;
cout<<"                              ÜÜ   ÜÜ    ÜÜ   ÜÜ"<<endl;
cout<<"                             ÜÜ     ÜÜ  ÜÜ     ÜÜ"<<endl;
cout<<"                            ÜÜ       ÜÜÜÜ       ÜÜ"<<endl;
cout<<"                            ÜÜ        ÜÜ        ÜÜ"<<endl;
cout<<"                            ÜÜ        ÜÜ        ÜÜ"<<endl;
cout<<"                            ÜÜ        ÜÜ        ÜÜ"<<endl;
cout<<"                            ÜÜ                  ÜÜ"<<endl;
cout<<"                             ÜÜ                ÜÜ"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"      @@     @@          @@@@@@@                                   @       "<<endl;
cout<<"      @@@   @@@  @@@@    @@    @@   @@@@  @   @  @@@  @     @@@@   @  @@@@ "<<endl;
cout<<"      @@ @ @ @@ @        @@     @@ @    @ @@  @ @   @ @     @   @    @     "<<endl;
cout<<"      @@  @  @@ @        @@     @@ @    @ @ @ @ @@@@@ @     @    @   @@@@  "<<endl;
cout<<"      @@     @@ @        @@    @@  @    @ @  @@ @   @ @     @   @        @ "<<endl;
cout<<"      @@     @@  @@@@    @@@@@@@    @@@@  @   @ @   @ @@@@@ @@@@     @@@@  "<<endl<<endl;
for(i=0;i<=48;i++)
{clrscr();
cout<<endl<<endl;
cout<<"                                ÜÜÜ        ÜÜÜ"<<endl;
cout<<"                               ÜÜÜÜÜ      ÜÜÜÜÜ"<<endl;
cout<<"                              ÜÜ   ÜÜ    ÜÜ   ÜÜ"<<endl;
cout<<"                             ÜÜ     ÜÜ  ÜÜ     ÜÜ"<<endl;
cout<<"                            ÜÜ       ÜÜÜÜ       ÜÜ"<<endl;
cout<<"                            ÜÜ        ÜÜ        ÜÜ"<<endl;
cout<<"                            ÜÜ        ÜÜ        ÜÜ"<<endl;
cout<<"                            ÜÜ        ÜÜ        ÜÜ"<<endl;
cout<<"                            ÜÜ                  ÜÜ"<<endl;
cout<<"                             ÜÜ                ÜÜ"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"      @@     @@          @@@@@@@                                   @       "<<endl;
cout<<"      @@@   @@@  @@@@    @@    @@   @@@@  @   @  @@@  @     @@@@   @  @@@@ "<<endl;
cout<<"      @@ @ @ @@ @        @@     @@ @    @ @@  @ @   @ @     @   @    @     "<<endl;
cout<<"      @@  @  @@ @        @@     @@ @    @ @ @ @ @@@@@ @     @    @   @@@@  "<<endl;
cout<<"      @@     @@ @        @@    @@  @    @ @  @@ @   @ @     @   @        @ "<<endl;
cout<<"      @@     @@  @@@@    @@@@@@@    @@@@  @   @ @   @ @@@@@ @@@@     @@@@  "<<endl<<endl;
gotoxy(i,24);
cout<<"DEVELOPED BY : GAURAV SAINI";
delay(100);
}
getch();
clrscr();

}

void wrong()
{
cout<<endl<<endl<<"                          ############################"<<endl;
cout<<"                          ###   ################   ###"<<endl;
cout<<"                          ####   ##############   ####"<<endl;
cout<<"                          #####   ############   #####"<<endl;
cout<<"                          ######   ##########   ######"<<endl;
cout<<"                          #######   ########   #######"<<endl;
cout<<"                          ########   ######   ########"<<endl;
cout<<"                          #########   ####   #########"<<endl;
cout<<"                          ##########   ##   ##########"<<endl;
cout<<"                          ###########      ###########"<<endl;
cout<<"                          ###########      ###########"<<endl;
cout<<"                          ##########   ##   ##########"<<endl;
cout<<"                          #########   ####   #########"<<endl;
cout<<"                          ########   ######   ########"<<endl;
cout<<"                          #######   ########   #######"<<endl;
cout<<"                          ######   ##########   ######"<<endl;
cout<<"                          #####   ############   #####"<<endl;
cout<<"                          ####   ##############   ####"<<endl;
cout<<"                          ###   ################   ###"<<endl;
cout<<"                          ############################"<<endl;
}



void pexit()

{clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n             THANKS FOR VISITING McDONALDS, HAVE A NICE DAY AHEAD";
cout<<"\n\n                            PRESS ANY KEY TO EXIT";
getch();
}

};