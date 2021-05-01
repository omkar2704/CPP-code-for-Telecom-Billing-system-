#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;

struct subscriber
{
char phonenumber[20];
char name[50];
float amount;
}s;
void gotoxy(int,int);
void addrecords();
void listrecords();
void modifyrecords();
void deleterecords();
void searchrecords();
void payment();
void login();
char get;
int main()
{
	int phonenumber;
	char choice;

    system("cls");
    system("color 0");
    gotoxy(10,2);
	system("cls");
	system("color 0F");
gotoxy(0,2);

	cout<<"\n\t\t  ------WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM \nBY Omkar T(20302F0022) ,Smit(20302F0024), Chetna(20302F0034), Omkar N(20302F0038)------";

	cout<<"\n\n\n\t\t Press Any Key To Continue. . ";

	getch();
	system("cls");

	system ("color 0F");

	system("cls");
	system ("color 0F");
 	gotoxy(30,0);
		system("color 0F");
		cout<<"\n\n\xDB\xDB\xDB\xDB\xDB  TELECOM BILLING SYSTEM  \xDB\xDB\xDB\xDB\xDB";


	while (1){
	      cout<<" \n\n \xDB\xDB 1 : Add New Records.\n\n \xDB\xDB 2 : List Of Records";
	     cout<<"\n\n \xDB\xDB 3 : Modify Records.\n\n \xDB\xDB 4 : For Payment";
		cout<<"\n\n \xDB\xDB 5 : Search Records.";
		cout<<"\n\n \xDB\xDB 6 : Delete Records.\n\n \xDB\xDB 7 : Exit\n";
	     cout<<"\n Enter Your Choice:-";
		 choice=getche();
		choice=toupper(choice);
		switch(choice)
		{
			case '1':
			        addrecords();break;
			case '2':
			listrecords();break;
			case '3':
			modifyrecords();break;
			case '4':
		    payment()	;break;
			case '5':
		     searchrecords()	;break;
			case '6':
				deleterecords();break;
			case '7':
				system("cls");
				system("color 0F");
				gotoxy(1,25);
				cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
				gotoxy(1,26);
				cout<<"   \xDB";
				gotoxy(1,27);
				cout<<"   \xDB";
				gotoxy(1,28);
				cout<<"   \xDB";
				gotoxy(1,29);
				cout<<"   \xDB";
				gotoxy(1,30);
				cout<<"   \xDB";
				gotoxy(1,31);
				cout<<"   \xDB";
				gotoxy(10,25);
				cout<<"\xDB     \xDB";
				gotoxy(10,26);
				cout<<"\xDB     \xDB";
				gotoxy(10,27);
				cout<<"\xDB     \xDB";
				gotoxy(10,28);
				cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
				gotoxy(10,29);
				cout<<"\xDB     \xDB";
				gotoxy(10,30);
				cout<<"\xDB     \xDB";
				gotoxy(10,31);
				cout<<"\xDB     \xDB";
				gotoxy(19,25);
				cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
				gotoxy(19,26);
				cout<<"\xDB     \xDB";
				gotoxy(19,27);
				cout<<"\xDB     \xDB";
				gotoxy(19,28);
				cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
				gotoxy(19,29);
				cout<<"\xDB     \xDB";
				gotoxy(19,30);
				cout<<"\xDB     \xDB";
				gotoxy(19,31);
				cout<<"\xDB     \xDB";
				gotoxy(28,25);
				cout<<"      \xDB";
				gotoxy(28,26);
				cout<<"\xDB\xDB    \xDB";
				gotoxy(28,27);
				cout<<"\xDB \xDB   \xDB";
				gotoxy(28,28);
				cout<<"\xDB  \xDB  \xDB";
				gotoxy(28,29);
				cout<<"\xDB   \xDB \xDB";
				gotoxy(28,30);
				cout<<"\xDB    \xDB\xDB";
				gotoxy(28,31);
				cout<<"\xDB";
			    gotoxy(37,25);
				cout<<"\xDB     \xDB";
				gotoxy(37,26);
				cout<<"\xDB    \xDB";
				gotoxy(37,27);
				cout<<"\xDB   \xDB";
				gotoxy(37,28);
				cout<<"\xDB\xDB\xDB\xDB";
				gotoxy(37,29);
				cout<<"\xDB   \xDB";
				gotoxy(37,30);
				cout<<"\xDB    \xDB";
				gotoxy(37,31);
				cout<<"\xDB     \xDB";
				gotoxy(46,25);
				cout<<"\xDB     \xDB";
				gotoxy(46,26);
				cout<<" \xDB   \xDB";
				gotoxy(46,27);
				cout<<"  \xDB \xDB";
				gotoxy(46,28);
				cout<<"   \xDB";
				gotoxy(46,29);
				cout<<"   \xDB";
				gotoxy(46,30);
				cout<<"   \xDB";
				gotoxy(46,31);
				cout<<"   \xDB";
				gotoxy(55,25);
				cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
				gotoxy(55,26);
				cout<<"\xDB     \xDB";
				gotoxy(55,27);
				cout<<"\xDB     \xDB";
				gotoxy(55,28);
				cout<<"\xDB     \xDB";
				gotoxy(55,29);
				cout<<"\xDB     \xDB";
				gotoxy(55,30);
				cout<<"\xDB     \xDB";
				gotoxy(55,31);
				cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
				gotoxy(64,25);
				cout<<"\xDB     \xDB";
				gotoxy(64,26);
				cout<<"\xDB     \xDB";
				gotoxy(64,27);
				cout<<"\xDB     \xDB";
				gotoxy(64,28);
				cout<<"\xDB     \xDB";
				gotoxy(64,29);
				cout<<"\xDB     \xDB";
				gotoxy(64,30);
				cout<<"\xDB     \xDB";
				gotoxy(64,31);
				cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
	            Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				system("color 0F");
				gotoxy(30,20);
				cout<<"Incorrect Input";
				cout<<"\a......";
				gotoxy(30,24);
				cout<<"Any key to continue";
				getch();
		}
	}
}
 COORD coord = {0, 0};
// sets coordinates to 0,0
//COORD max_buffer_size = GetLargestConsoleWindowSize(hOut);
COORD max_res,cursor_size;
void gotoxy (int x,int y)
{

coord.X = x; coord.Y = y;
// X and Y coordinates

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void addrecords()
{
	FILE *f;
	char test;
	f=fopen("pro.txt","ab+");
	if(f==0)
	{   f=fopen("pro.txt","wb+");
		system("cls");
		cout<<"Please wait while we configure your computer";
		cout<<"\npress any key to continue";
		getch();
	}
	while(1)
	{
		system("cls");
		cout<<"\n Enter phone number: ";
		cin>>s.phonenumber;
		cout<<"\n Enter name: ";
		fflush(stdin);
		cin>>s.name;
		cout<<"\n Enter amount: ";
		cin>>s.amount;
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		cout<<"\n\n Record Is Successfully Added";
		cout<<"\n Press esc Key to exit or Press any other key to add other record:";
		test=getche();
		if(test==27)
			break;
	}
	fclose(f);1
	system("cls");
}
void listrecords()
{
	FILE *f;
	int i;
	if((f=fopen("pro.txt","rb"))==NULL)
		exit(0);
	system("cls");
	cout<<"Phone Number\t\tUser Name\tAmount\n";
	for(i=0;i<79;i++)
		cout<<"-";
	while(fread(&s,sizeof(s),1,f)==1)
	{
		cout<<"\n"<<s.phonenumber<<"\t\t"<<s.name<<"\t\tRs. "<<s.amount;
	}
	cout<<"\n";
	for(i=0;i<79;i++)
		cout<<"-";

fclose(f);
cout<<"\n\nPress Any Key To Go Back";
getch();
system("cls");
}
void deleterecords()
{
	FILE *f,*t;
	char phonenumber[20];
	system("cls");
	f=fopen("pro.txt","rb+");
	t=fopen("pro1.txt","wb+");
	do{
	rewind(f);
	cout<<"Enter the phone number to be deleted from the Database: ";
	cin>>phonenumber;
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)!=0)
		{       	fwrite(&s,sizeof(s),1,t);

		}
		else
		cout<<"Record deleted successfully.";
	}

	fclose(f);
	fclose(t);
	remove("pro.txt");
	rename("pro1.txt","pro.txt");

	f=fopen("pro.txt","rb+");
	t=fopen("pro1.txt","wb+");
    cout<<"\nDo you want to delete another record (y/n):";
	fflush(stdin);
	  }
    	while(getche()=='y'||getche()=='Y');
		fclose(f);
	getch();
	system("cls");
}
void searchrecords()
{
	FILE *f;
	char phonenumber[20];
	int flag=1;
	f=fopen("pro.txt","rb+");

	fflush(stdin);
	system("cls");
	cout<<"Enter Phone Number to search in our database: ";
	cin>>phonenumber;
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{	system("cls");
			cout<<" Record Found ";
			cout<<"\n\nPhonenumber: "<<s.phonenumber<<"\nName: "<<s.name<<"\nAmount: Rs."<<s.amount;
			flag=0;
			break;
		}
		else if(flag==1)
		{	system("cls");
			cout<<"Requested Phone Number Not found in our database";
		}
	}
	getch();
	fclose(f);
	system("cls");
}
void modifyrecords()
{
		FILE *f;
	char phonenumber[20];
	long int size=sizeof(s);
	if((f=fopen("pro.txt","rb+"))==NULL)
		exit(0);
	system("cls");
	cout<<"Enter phone number of the subscriber to modify: ";
	cin>>phonenumber;
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			system("cls");
			cout<<"\n Enter phone number: ";
			cin>>s.phonenumber;
			cout<<"\n Enter name: ";
			fflush(stdin);
			cin>>s.name;
			cout<<"\n Enter amount: ";
			cin>>s.amount;
			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	fclose(f);
	system("cls");
}
void payment()
{
	FILE *f;
	char phonenumber[20];
	long int size=sizeof(s);
	float amt;
	int i;
	if((f=fopen("pro.txt","rb+"))==NULL)
		exit(0);
	system("cls");
	cout<<"Enter phone number of the subscriber for payment: ";
	cin>>phonenumber;
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			cout<<"\n ***DETAILS***";
			cout<<s.phonenumber;
			cout<<s.name;
			cout<<s.amount;
			cout<<("\n");
			for(i=0;i<79;i++)
				cout<<"-";
			cout<<"\n\nEnter amount of payment: ";
			fflush(stdin);
			cin>>amt;
			s.amount=s.amount-amt;
			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	cout<<"\n\n";
	cout<<"System Message: THANK YOU"<<s.name<<"FOR YOUR TIMELY PAYMENTS!!";
	getch();
	fclose(f);
	system("cls");
}
void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{

    cout<<"\n  **************************  LOGIN FORM  **************************  ";
    cout<<" \n                       ENTER USERNAME:-";
	cin>>uname;
	cout<<" \n                       ENTER PASSWORD:-";
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else cout<<"*";
	    i++;
	}
	pword[i]='\0';

	i=0;
		if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
	{
	cout<<"  \n\n\n       WELCOME TO OUR SYSTEM !!!! LOGIN IS SUCCESSFUL";
	cout<<"\n\n\n\t\t\t\tPress any key to continue...";
	getch();//holds the screen
	break;
	}
	else
	{
		cout<<"\n        SORRY !!!!  LOGIN IS UNSUCESSFUL";
		a++;

		getch();//holds the screen
		system("cls");

	}
}
	while(a<=2);
	if (a>2)
	{
		cout<<"\nSorry you have entered the wrong username and password for four times!!!";

		getch();

		}
		system("cls");
}

