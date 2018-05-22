#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
class Publiser
{ 
    protected: 
    	char *Pname,*Paddr,*Pnum;

public:
	Publiser()
	{
       Pname = new char [20];
       Paddr = new char [50];
       Pnum =  new char [12];
	}
	Publiser(char a[] ,char b[] , char c[])
	{
	   Pname = new char [20];
       Paddr = new char [50];
       Pnum =  new char [12];
       strcpy(Pname,a);
       strcpy(Paddr,b);
       strcpy(Pnum,c) ;
	}
	void input()
	{
		cout << "\nPlease enter PUBLISHER name ::: ";
		cin.getline(Pname,19,'\n');
		cout << "\nPlease enter PUBLISHER ADDRESS ::: ";
		cin.getline(Paddr,19,'\n');
		cout << "\nPlease enter PUBLISHER MOBILE NUMBER ::: ";
		cin.getline(Pnum,11,'\n');
		system("clear");
	}
	void output()
	{   
		cout << "\nName of book Publisher is ::: ";
		cout <<  Pname << endl;
		cout << "\nAddres of book  Publisher is ::: ";
		cout <<  Paddr << endl ;
		cout << "\nMOBILE NUMBER of book Publisher is ::: +91 ";
		cout <<  Pnum << endl;
	}
};

class BOOK :virtual public Publiser
{ 
    protected: 
    	char *Bname,*BAname,*Bprise;

public:
	BOOK()
	{
       Bname = new char [20];
       BAname = new char [50];
       Bprise =  new char [12];
	}
	BOOK(char a[] ,char b[] , char c[] , char d[] ,char e[] , char f[] ) : Publiser(a,b,c)
	{  
	   Bname = new char [20];
       BAname = new char [50];
       Bprise =  new char [12];
       strcpy(Bname,d);
       strcpy(BAname,e);
       strcpy(Bprise,f) ;
	}
	void input()
	{
		Publiser::input();
		cout << "\nPlease enter book Name ::: ";
		cin.getline(Bname,19,'\n');
		cout << "\nPlease enter book Auther name ::: ";
		cin.getline(BAname,19,'\n');
		cout << "\nPlease enter book Prise ::: ";
		cin.getline(Bprise,11,'\n');
		system("clear");
	}
	void output()
	{
		Publiser::output();
		cout << "\nName of book Publisher is ::: ";   
		cout <<  Bname << endl;
		cout << "\nAddres of book  Auther name ::: ";
		cout <<  BAname << endl ;
		cout << "\nMOBILE NUMBER of book Prise ::: ";
		cout <<  Bprise << endl;
		
	}
};

class Tape :virtual public Publiser ,virtual public BOOK
{ 
    protected: 
    	char *Tname,*TSname,*Tprise;

public:
	Tape()
	{
       Tname = new char [20];
       TSname = new char [50];
       Tprise =  new char [12];
	}
	Tape(char a[] ,char b[] , char c[] , char d[] ,char e[] , char f[] ,char g[] , char h[] , char i[]) :BOOK(a,b,c,d,e,f),Publiser(a,b,c)
	{  
	   Tname = new char [20];
       TSname = new char [50];
       Tprise =  new char [12];
       strcpy(Tname,g);
       strcpy(TSname,h);
       strcpy(Tprise,i) ;
	}
	void input()
	{
		BOOK::input();
		cout << "\nPlease enter Name of tape::: ";
		cin.getline(Tname,19,'\n');
		cout << "\nPlease enter Tape singer  name ::: ";
		cin.getline(TSname,19,'\n');
		cout << "\nPlease enter TAPE Prise ::: ";
		cin.getline(Tprise,11,'\n');
		system("clear");
	}
	void output()
	{  
	    BOOK::output();
		cout << "\nName of Tape is ::: ";
		cout <<  Tname << endl;
		cout << "\nTape singer name is  ::: ";
		cout <<  TSname << endl ;
		cout << "\nPrise of tape is  ::: ";
		cout <<  Tprise << endl;
	}
};

main()
{
	Tape x;
	x.input();
	x.output();
}