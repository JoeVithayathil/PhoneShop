 /*
						  $ COMPUTER SCIENCE PROJECT $
						  ****************************

						 SOFTWARE FOR A SMART PHONE SHOP
						 ===============================
*/
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<dos.h>
#include<graphics.h>
#include<iomanip.h>
#include<stdlib.h>


//CLASS FOR STORING DETAILS OF BILLING
class billdet
 {double billno,cid,net;
  int day,month,n;
  float yr;
  public:
   billdet();                 //CONSTRUCTOR FOR CLASS BILLDET
   void up_no()               //FUNCTION TO INCREASE THE NO OF PRODUCTS(n)
	{n++;}
   void dec_no()              //FUNCTION TO DECREASE THE NO OF PRODUCTS(n)
	{n--;}
   void null_no()             //FUNCTION FOR CHANGING VALUE(n) TO ZERO;
	{n=0;}
   void in_billno(double b)   //FUNCTION FOR UPDATING VALUE OF BILLNO(billno)
	{billno=0;
	 billno=b;}
   void in_cid(double c)      //FUNCTION FOR UPDATING VALUE OF CUSTOMER ID(cid)
	{cid=0;
	 cid=c;}
   void in_net(long double n) //FUNCTION FOR UPDATING THE VALUE OF NET AMOUNT(net)
	{net=n;}
   void insert();             //FUNCTION FOR INPUTTING DETAILS OF BILLDET
   void display();            //FUNCTION FOR DISPLAYING DETAILS OF BILLDET
   int ret_date()             //FUNCTION FOR RETURNING DATE(day)
	{return day;}
   int ret_month()            //FUNCTION FOR RETURNING MONTH(month)
	{return month;}
   float ret_yr()             //FUNCTION FOR RETURNING YEAR(yr)
	{return yr;}
   double ret_billno()        //FUNCTION FOR RETURNING BILLNO(billno)
	{return billno;
	}
   int ret_no()
	{return n;}
   double ret_cid()
	{return cid;}
   long double ret_net()
	{return net;}
 };


//CONSTRUCTOR FOR CLASS BILLDET
void billdet::billdet()
 {day=0;
  month=0;
  n=0;
  yr=0;
  net=0;
  billno=101;
  cid=101;
 }


//FUNCTION FOR INPUTTING DETAILS OF BILLING
void billdet::insert()
 {cout<<"\n DATE: ";
  cin>>day;
  cout<<"\n MONTH: ";
  cin>>month;
  cout<<"\n YEAR: ";
  cin>>yr;
 }


//FUNCTION FOR DISPLAYING DETAILS OF BILLING
void billdet::display()
 {cout<<"\n\n\n DATE: "<<day<<"/"<<month<<"/"<<yr;
  cout<<"\n\n BILL No: "<<billno;
  cout<<"\n\n CUSTOMER ID: "<<cid;
  cout<<"\n\n NO OF PRODUCTS: "<<n;
 }


//CLASS FOR STORING DETAILS OF CUSTOMER
class customer
 {double cid;
  char name[25],add[80],ph[12];
  public:
   customer();                //CONSTRUCTOR FOR CLASS CUSTOMER
   void in_cid(double c)     //FUNCTION FOR UPDATING CUSTOMER ID(cid)
	{cid=0;
	 cid=c;}
   void input();              //FUNCTION FOR INPUTTING DETAILS OF BILLING
   void input_mod();          //FUNCTION FOR MODIFYING VALUES OF CUSTOMER
   void display();            //FUNCTION FOR DISPLAYING DETAILS OF BILLING
   double ret_cid()           //FUNCTION FOR RETURNING CUSTOMER ID(cid)
	{return cid;}
 };


//CONSTRUCTOR FOR CLASS CUSTOMER
void customer::customer()
 {cid=101;
  strcpy(name,"");
  strcpy(add,"");
  strcpy(ph,"");
 }


//FUNCTION FOR INPUTING DETAILS OF CUSTOMER
void customer::input()
 {cout<<"\n ENTER DETAILS OF CUSTOMER: ";
  cout<<"\n\n NAME: ";
  gets(name);
  cout<<" ADDRESS: ";
  gets(add);
  cout<<" PHONE No: ";
  gets(ph);
 }


//FUNCTION FOR MODIFYING VALUES OF CUSTOMER
void customer::input_mod()
 {char ans;
  cout<<"\n\n\n ENTER DETAILS OF CUSTOMER: ";
  cout<<"\n\n NAME: ";
  puts(name);
  do
   {cout<<"\n DO YOU WANT TO CHANGE(Y/N)? ";
	cin>>ans;
   }while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n');
  if(ans=='y'||ans=='Y')
   {cout<<"\n ENTER NEW NAME: ";
	gets(name);
   }
  cout<<"\n ADDRESS: ";
  puts(add);
  do
   {cout<<"\n DO YOU WANT TO CHANGE(Y/N)? ";
	cin>>ans;
   }while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n');
  if(ans=='y'||ans=='Y')
   {cout<<"\n ENTER NEW ADDRESS: ";
	gets(add);
   }
  cout<<"\n PHONE No: ";
  puts(ph);
  do
   {cout<<"\n DO YOU WANT TO CHANGE(Y/N)? ";
	cin>>ans;
   }while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n');
  if(ans=='y'||ans=='Y')
   {cout<<"\n ENTER NEW PHONE No: ";
	gets(ph);
   }
 }


//FUNCTION FOR DISPLAYING DETAILS OF CUSTOMER
void customer::display()
 {cout<<"\n\n DETAILS OF THE CUSTOMER: ";
  cout<<"\n\n CUSTOMER ID: "<<cid;
  cout<<"\n\n NAME: ";
  puts(name);
  cout<<"\n ADDRESS: ";
  puts(add);
  cout<<"\n PHONE No: ";
  puts(ph);
 }


//CLASS FOR STORING DETAILS OF ITEM
class item
 {char brand[15];
  char model[25];
  int qty;
  long double price;
  public:
   item();                    //CONSTRUCTOR FOR CLASS ITEM
   void input();              //FUNCTION FOR INPURING DETAILS OF ITEM
   void display();            //FUNCTION FOR DISPLAYING DETAILS OF ITEM
   void modify(int q)         //FUNCTION FOR UPDATING VALUE OF QUANTITY(qty)
	{qty+=q;}
   void modifybill(int q)     //FUNCTION FOR UPDATING VALUE OF QUANTITY(qty)...while billing
	{qty=q;}
   char*ret_brand()           //FUNCTION FOR RETURNING THE VALUE OF BRAND(brand)
	{return brand;}
   char*ret_model()           //FUNCTION FOR RETURNING THE VALUE OF MODEL(model)
	{return model;}
   int ret_qty()              //FUNCTION FOR RETURNING THE VALUE OF QUANTITY(qty)
	{return qty;}
   long double ret_price()          //FUNCTION FOR RETURNING THE VALUE OF PRICE(price)
	{return price;}
 };


//CONSTRUCTOR FOR CLASS ITEM
void item::item()
 {strcpy(brand,"");
  strcpy(model,"");
  qty=0;
  price=0;
 }


//FUNCTION FOR INSERTING DETAILS OF ITEM
void item::input()
 {cout<<"\n\n\n ENTER DETAILS OF ITEM: ";
  cout<<"\n\n BRAND: ";
  gets(brand);
  cout<<"\n MODEL: ";
  gets(model);
  cout<<"\n PRICE: ";
  cin>>price;
  cout<<"\n QUANTITY: ";
  cin>>qty;
 }


//FUNCTION FOR DISPLAYING DETAILS OF ITEM
void item::display()
 {cout<<"\n\n\n BRAND: "<<brand<<"\n\n MODEL: "<<model;
  cout<<"\n\n PRICE: "<<price<<"\n\n QUANTITY: "<<qty<<"\n";
 }


//CLASS TO STORE PASSWORD
class pass
 {char pw[8];
  public:
		 pass()               //CONSTRUCTOR FOR CLASS PASS
		  {strcpy(pw,"");
		  }
		 void set_pass()
		  {pw[8]='\0';}
		 char*ret_pass()      //FUNCTION FOR RETURNIG VALUE OF PASSWORD(pw)
		  {return pw;}
		 void pass_input(char*p)
		  {strcpy(pw,p);      //FUNCTION FOR UPDATING VALUE OF PASSWORD(pw)
		   pw[8]='\0';
		  }
		 void pass_display()
		  {puts(pw);}
 };

int imp=0;


//FUNCTION FOR BILLING
void billing()
 {clrscr();
  char ans,str[10],z1[25],z2[10];
  int n=0,opt,j=0,a=1,t=1,q,fl=0,k=0,temp,m=0,u=0,d=0,x=15,y=0,p=0,e=0;
  long double net=0;
  double no,cid=0;
  billdet b,b2;
  item it,it1[100],it2[10],it3[10];
  customer c;
  ofstream fout1,fout2;
  fstream fio1;
  fio1.open("BILL.dat",ios::in|ios::out);
  fstream fio2("ITEMS.dat",ios::in|ios::out);
  fstream fio3("CUSTOMER.dat",ios::in|ios::app);
  if(!fio1||!fio2||!fio3)
   {cout<<"\n\n ERROR WHILE OPENNING FILE. PROGRAM TERMINATED.";
	cout<<"\n\n\n PRESS ANY KEY......";
	getch();
	exit(0);
   }
  void main();
  while(fio1.read((char*)&b,sizeof(billdet)))
   {if(b.ret_cid()>=cid)
	 {cid=b.ret_cid();}
	for(int i=0;i<b.ret_no();i++)
	 fio1.seekp(fio1.tellp()+sizeof(item));
	e=1;
   }
  if(e==1)
   {no=b.ret_billno()+1;
	b.in_billno(no);
	cid++;
	b.in_cid(cid);
	c.in_cid(cid);
   }
  b.null_no();
  clrscr();
  while(fio2.read((char*)&it1[n],sizeof(item)))
   {n++;}
  if(n==0)
   {cout<<"\n\n NO TIEMS FOUND.";
	cout<<"\n\n\n PRESS ANY KEY.....";
	getch();
   }
  else
   {do
	 {cout<<"\n\n DO YOU WANT TO RETURN TO MAIN MENU(Y/N)? ";
	  cin>>ans;
	 }while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n');
	if(ans=='y'||ans=='Y')
	 {main();}
	b.insert();
	do
	 {clrscr();
	  k=0;
	  fl=0;
	  b.up_no();
	  for(int i=0;i<n;i++)
	   {fl=0;
		j=i-1;
		while(j>=0)
		 {if(strcmpi(it1[j].ret_brand(),it1[i].ret_brand())==0)
		   {fl=1;}
		  j--;
		 }
		if(fl==0)
		 {it2[k]=it1[i];
		  k++;
		  cout<<"\n\n "<<k<<". "<<it1[i].ret_brand();}
	   }
	  k=0;
	  cout<<"\n\n\n ENTER THE BRAND NO: ";
	  cin>>opt;
	  strcpy(str,it2[opt-1].ret_brand());
	  for(i=0;i<n;i++)
	   {if(strcmpi(str,it1[i].ret_brand())==0)
		 {it2[k]=it1[i];
		  k++;
		 }
	   }
	  clrscr();
	  for(i=0;i<k;i++)
	   {cout<<"\n\n "<<i+1<<". "<<it2[i].ret_model();}
	  cout<<"\n\n\n ENTER MODEL NO: ";
	  cin>>opt;
	  fl=0;
	  for(i=0;i<n;i++)
	   {for(int j=0;j<k;j++)
		 {if(strcmpi(it1[i].ret_brand(),it2[opt-1].ret_brand())==0)
		   if(strcmpi(it1[i].ret_model(),it2[opt-1].ret_model())==0)
			if(it1[i].ret_price()==it2[opt-1].ret_price())
			 if(it1[i].ret_price()==it2[opt-1].ret_price())
			  {opt=i;
			   fl=1;
			  }
		 }
		if(fl==1)
		 {break;}
	   }
	  temp=0;
	  d=3;
	  do
	   {temp=0;
		cout<<"\n\n QUANTITY: ";
		cin>>q;
		if(it1[opt].ret_qty()<q)
		 {cout<<"\n NOT ENOUGH STOCK. PLEASE REDUCE QUANTITY.";
		  temp=1;
		 }
		d--;
	   }while(temp==1||q==0||d==0);
	  it3[m]=it1[opt];
	  it3[m].modifybill(q);
	  it3[m].display();
	  m++;
	  it1[opt].modify(0-q);
	  do
	   {cout<<"\n\n\n ANYMORE(Y/N)? ";
		cin>>ans;
	   }while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n');
	 }while(ans!='N'&&ans!='n');
	do
	 {clrscr();
	  cout<<"\n\n\n NEW CUSTOMER(Y/N)? ";
	  cin>>ans;
	 }while(ans!='y'&&ans!='Y'&&ans!='n'&&ans!='N');
	if(ans=='Y'||ans=='y')
	 {c.input();}
	else
	 {if(ans=='n'||ans=='N')
	   {while(p==0)
		 {cout<<"\n\n ENTER CUSTOMER  ID: ";
		  cin>>cid;
		  while(fio3.read((char*)&c,sizeof(customer)))
		   {if(cid==c.ret_cid())
			 {b.in_cid(c.ret_cid());
			  c.in_cid(c.ret_cid());
			  c.display();
			  getch();
			  p=1;
			  break;
			 }
		   }
		  if(p==0)
		   {cout<<"\n\n RECORD NOT FOUND...";
			do
			 {cout<<"\n\n NEW CUSTOMER(Y/N)? ";
			  cin>>ans;
			 }while(ans!='y'&&ans!='Y'&&ans!='n'&&ans!='N');
			if(ans=='y'||ans=='Y')
			 {p=1;
			  c.input();
			 }
		   }
		 }
	   }
	 }
	clrscr();
	cout<<"\n\n --------------------------------------------------------------------------";
	cout<<"\n Sl No. | BRAND          | MODEL          | PRICE     | QUANTITY  | TOTAL";
	cout<<"\n ====== | =====          | =====          | =====     | ========  | =====";
	for(int i=0;i<m;i++)
	 {a=1;
	  t=1;
	  cout<<"\n        |                |                |           |           |      ";
	  cout<<"\n "<<i+1<<".";
	  if(i>=10)
	   {cout<<setw(6)<<"| ";}
	  else
	   {cout<<setw(7)<<"| ";}
	  u=17-strlen(it3[i].ret_brand());
	  cout<<it3[i].ret_brand();
	  cout<<setw(u)<<"| ";
	  u=15-strlen(it3[i].ret_model());
	  cout<<it3[i].ret_model();
	  x=15;
	  if(u<0)
	   {while(u!=0)
		 {u++;
		  cout<<"\b";
		 }
		cout<<"| ";
		strcpy(z1,it3[i].ret_model());
		while(x!=strlen(z1))
		 {z2[y]=z1[x];
		  y++;
		  x++;
		  z2[y]='\0';
		 }
	   }
	  else
	   {cout<<setw(u+2)<<"    | ";}
	  cout<<it3[i].ret_price();
	  while(it3[i].ret_price()/a>10)
	   {t++;
		a=a*10;
	   }
	  cout<<setw(12-t)<<"| ";
	  t=1;
	  a=1;
	  cout<<it3[i].ret_qty();
	  while(it3[i].ret_qty()/a>10)
	   {t++;
		a=a*10;
	   }
	  cout<<setw(12-t)<<"| ";
	  cout<<it3[i].ret_price()*it3[i].ret_qty();
	  net+=it3[i].ret_price()*it3[i].ret_qty();
	  u=15-strlen(it3[i].ret_model());
	  if(u<0)
	   {cout<<"\n        |                | ";
		cout<<z2;
		u=strlen(z2);
		while(u!=15)
		 {cout<<" ";
		  u++;
		 }
		cout<<"|           |           |      ";
	   }
	 }
	cout<<"\n        |                |                |           |           |      ";
	cout<<"\n --------------------------------------------------------------------------";
	cout<<"\n                                      TOTLAL:             Rs."<<net<<"/-";
	cout<<"\n --------------------------------------------------------------------------";
	do
	 {cout<<"\n\n REMOVE ANY PRODUCT(Y/N)? ";
	  cin>>ans;
	  do
	   {if(ans=='y'||ans=='Y')
		 {cout<<"\n\n ENTER THE NO: ";
		  cin>>opt;
		  for(int i=opt-1;i<m;i++)
		   {it3[i]=it3[i+1];}
		  m--;
		  b.dec_no();
		  cout<<"\n ANYMORE(Y/N)? ";
		  cin>>ans;
		 }
	   }while(ans=='y'||ans=='Y');
	 }while(ans!='y'&&ans!='n'&&ans!='Y'&&ans!='N');
	clrscr();
	net=0;
	b.display();
	cout<<"\n";
	c.display();
	cout<<"\n\n --------------------------------------------------------------------------";
	cout<<"\n Sl No. | BRAND          | MODEL          | PRICE     | QUANTITY  | TOTAL";
	cout<<"\n ====== | =====          | =====          | =====     | ========  | =====";
	for(i=0;i<m;i++)
	 {a=1;
	  t=1;
	  cout<<"\n        |                |                |           |           |      ";
	  cout<<"\n "<<i+1<<".";
	  if(i>=10)
	   {cout<<setw(6)<<"| ";}
	  else
	   {cout<<setw(7)<<"| ";}
	  u=17-strlen(it3[i].ret_brand());
	  cout<<it3[i].ret_brand();
	  cout<<setw(u)<<"| ";
	  u=15-strlen(it3[i].ret_model());
	  cout<<it3[i].ret_model();
	  x=15;
	  if(u<0)
	   {while(u!=0)
		 {u++;
		  cout<<"\b";
		 }
		cout<<"| ";
		strcpy(z1,it3[i].ret_model());
		while(x!=strlen(z1))
		 {z2[y]=z1[x];
		  y++;
		  x++;
		  z2[y]='\0';
		 }
	   }
	  else
	   {cout<<setw(u+2)<<"    | ";}
	  cout<<it3[i].ret_price();
	  while(it3[i].ret_price()/a>10)
	   {t++;
		a=a*10;
	   }
	  cout<<setw(12-t)<<"| ";
	  t=1;
	  a=1;
	  cout<<it3[i].ret_qty();
	  while(it3[i].ret_qty()/a>10)
	   {t++;
		a=a*10;
	   }
	  cout<<setw(12-t)<<"| ";
	  cout<<it3[i].ret_price()*it3[i].ret_qty();
	  net+=it3[i].ret_price()*it3[i].ret_qty();
	  u=15-strlen(it3[i].ret_model());
	  if(u<0)
	   {cout<<"\n        |                | ";
		cout<<z2;
		u=strlen(z2);
		while(u!=15)
		 {cout<<" ";
		  u++;
		 }
		cout<<"|           |           |      ";
	   }
	 }
	cout<<"\n        |                |                |           |           |      ";
	cout<<"\n --------------------------------------------------------------------------";
	cout<<"\n                                      TOTLAL:             Rs."<<net<<"/-";
	cout<<"\n --------------------------------------------------------------------------";
	b.in_net(net);
	fio2.seekp(0,ios::beg);
	fio1.close();
	fio1.open("BILL.dat",ios::in|ios::out);
	fout1.open("TEMP1.dat",ios::out);
	while(fio1.read((char*)&b2,sizeof(b2)))
	 {fout1.write((char*)&b2,sizeof(b2));
	  for(int i=0;i<b2.ret_no();i++)
	   {fio1.read((char*)&it,sizeof(item));
		fout1.write((char*)&it,sizeof(item));
	   }
	 }
	fout1.write((char*)&b,sizeof(b));
	 for(i=0;i<m;i++)
	  {fout1.write((char*)&it3[i],sizeof(item));}
	fout2.open("TEMP2.dat",ios::out);
	for(i=0;i<n;i++)
	 {fout2.write((char*)&it1[i],sizeof(item));
	 }
	fio3.write((char*)&c,sizeof(customer));
   }
  fio1.close();
  fio2.close();
  fio3.close();
  if(n!=0)
   {fout1.close();
	fout2.close();
	remove("BILL.dat");
	rename("TEMP1.dat","BILL.dat");
	remove("ITEMS.dat");
	rename("TEMP2.dat","ITEMS.dat");
   }
  getch();
 }


//FUNCTION FOR STOCK ENTRY
void stock()
 {int opt,ch1,ch2,n=0,j,q,fl=0,k,temp=0;
  char ans,str[15],ch;
  item it1[100],it2[10],it;
  clrscr();
  void main();
  do
  {
  fstream fio("ITEMS.dat",ios::in|ios::app);
  ofstream fout;
  if(!fio)
   {cout<<"\n\n ERROR WHILE OPENNING THE FILE. PROGRAM TERMINATED.";
	cout<<"PRESS ANY KEY......";
	getch();
	exit(0);
   }
  cout<<"\n\n\n 1. NEW STOCK.";
  cout<<"\n\n 2. REMOVE STOCK.";
  cout<<"\n\n 3. RETURN TO MAIN MENU.";
  cout<<"\n\n\n ENTER YOUR OPTION: ";
  cin>>ch1;
  switch(ch1)
   {case 1:cout<<"\n\n\n 1. NEW PRODUCT.";
		   cout<<"\n\n 2. ADD STOCK.";
		   cout<<"\n\n\n\n ENTER YOUR OPTION: ";
		   cin>>ch2;
		   clrscr();
		   switch(ch2)
			{case 1:while(fio.read((char*)&it1[n],sizeof(item)))
					 {n++;}
					fout.open("TEMP.dat",ios::out);
					for(int i=0;i<n;i++)
					 {fout.write((char*)&it1[i],sizeof(it1[i]));}
					do
					 {item it2;
					  clrscr();
					  it2.input();
					  do
					   {cout<<"\n\n ARE YOU SURE(Y/N)? ";
						cin>>ans;
					   }while(ans!='y'&&ans!='n'&&ans!='Y'&&ans!='N');
					  if(ans=='Y'||ans=='y')
					   {fout.write((char*)&it2,sizeof(it2));}
					  do
					   {cout<<"\n\n\n ANYMORE(Y/N)? ";
						cin>>ans;
					   }while(ans!='y'&&ans!='n'&&ans!='Y'&&ans!='N');
					 }while(ans=='y'||ans=='Y');
					fio.close();
					fout.close();
					remove("ITEMS.dat");
					rename("TEMP.dat","ITEMS.dat");
					break;
			 case 2:while(fio.read((char*)&it1[n],sizeof(item)))
					 {n++;}
					do
					 {k=0;
					  fl=0;
					  for(int i=0;i<n;i++)
					   {fl=0;
						j=i-1;
						while(j>=0)
						 {if(strcmpi(it1[j].ret_brand(),it1[i].ret_brand())==0)
						   {fl=1;}
						  j--;
						 }
						if(fl==0)
						 {it2[k]=it1[i];
						  k++;
						  cout<<"\n\n "<<k<<". "<<it1[i].ret_brand();}
					   }
					  k=0;
					  cout<<"\n\n ENTER THE BRAND NO: ";
					  cin>>opt;
					  strcpy(str,it2[opt-1].ret_brand());
					  for(i=0;i<n;i++)
					   {if(strcmpi(str,it1[i].ret_brand())==0)
						 {it2[k]=it1[i];
						  k++;}
					   }
					  clrscr();
					  for(i=0;i<k;i++)
					   {cout<<"\n\n "<<i+1<<". "<<it2[i].ret_model();}
					  cout<<"\n\n ENTER MODEL NO: ";
					  cin>>opt;
					  fl=0;
					  for(i=0;i<n;i++)
					   {for(int j=0;j<k;j++)
						 {if(strcmpi(it1[i].ret_brand(),it2[opt-1].ret_brand())==0)
						   if(strcmpi(it1[i].ret_model(),it2[opt-1].ret_model())==0)
							if(it1[i].ret_price()==it2[opt-1].ret_price())
							 if(it1[i].ret_price()==it2[opt-1].ret_price())
							  {opt=i;
							   fl=1;
							  }
						 }
						if(fl==1)
						 {break;}
					   }
					  it1[opt].display();
					  cout<<"\n QUANTITY: ";
					  cin>>q;
					  it1[opt].modify(q);
					  it1[opt].display();
					  getch();
					  do
					   {cout<<"\n\n ANYMORE(Y/N)? ";
						cin>>ans;
					   }while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n');
					 }while(ans!='N'&&ans!='n');
					fout.open("TEMP.dat",ios::out);
					for(i=0;i<=n;i++)
					 {fout.write((char*)&it1[i],sizeof(item));}
					fio.close();
					fout.close();
					remove("ITEMS.dat");
					rename("TEMP.dat","ITEMS.dat");
					break;
			 default:cout<<"\n\n INVALID ENTRY.";
					 cout<<"\n\n\n PRESS ANY KEY......";
					 fio.close();
					 getch();
			}
		   break;
	case 2:cout<<"\n\n 1. DELETE PRODUCT.";
		   cout<<"\n\n 2. DECREASE STOCK.";
		   cout<<"\n\n\n ENTER YOUR OPTION: ";
		   cin>>ch2;
		   switch(ch2)
			{case 1:fout.open("TEMP.dat",ios::out);
					while(fio.read((char*)&it1[n],sizeof(item)))
					 {n++;}
					do
					 {k=0;
					  fl=0;
					  for(int i=0;i<n;i++)
					   {fl=0;
						j=i-1;
						while(j>=0)
						 {if(strcmpi(it1[j].ret_brand(),it1[i].ret_brand())==0)
						   {fl=1;}
						  j--;
						 }
						if(fl==0)
						 {it2[k]=it1[i];
						  k++;
						  cout<<"\n\n "<<k<<". "<<it1[i].ret_brand();}
					   }
					  k=0;
					  cout<<"\n\n ENTER THE BRAND NO: ";
					  cin>>opt;
					  strcpy(str,it2[opt-1].ret_brand());
					  for(i=0;i<n;i++)
					   {if(strcmpi(str,it1[i].ret_brand())==0)
						 {it2[k]=it1[i];
						  k++;}
					   }
					  clrscr();
					  for(i=0;i<k;i++)
					   {cout<<"\n\n "<<i+1<<". "<<it2[i].ret_model();}
					  cout<<"\n\n ENTER MODEL NO: ";
					  cin>>opt;
					  fl=0;
					  for(i=0;i<n;i++)
					   {for(int j=0;j<k;j++)
						 {if(strcmpi(it1[i].ret_brand(),it2[opt-1].ret_brand())==0)
						   if(strcmpi(it1[i].ret_model(),it2[opt-1].ret_model())==0)
							if(it1[i].ret_price()==it2[opt-1].ret_price())
							 if(it1[i].ret_price()==it2[opt-1].ret_price())
							  {opt=i;
							   fl=1;
							  }
						 }
						if(fl==1)
						 {break;}
					   }
					  it1[opt].display();
					  do
					   {cout<<"\n\n ARE YOU SURE(Y/N)? ";
						cin>>ans;
					   }while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n');
					  if(ans=='y'||ans=='Y')
					   {for(int i=opt;i<n;i++)
						 {it1[i]=it1[i+1];}
						n--;
					   }
					  do
					   {cout<<"\n\n ANYMORE(Y/N)? ";
						cin>>ans;
					   }while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n');
					 }while(ans!='N'&&ans!='n');
					for(int i=0;i<n;i++)
					 {fout.write((char*)&it1[i],sizeof(item));}
					fio.close();
					fio.close();
					remove("ITEMS.dat");
					rename("TEMP.dat","ITEMS.dat");
					break;
			 case 2:fout.open("TEMP.dat",ios::app);
					while(fio.read((char*)&it1[n],sizeof(item)))
					 {n++;}
					do
					 {k=0;
					  fl=0;
					  for(int i=0;i<n;i++)
					   {fl=0;
						j=i-1;
						while(j>=0)
						 {if(strcmpi(it1[j].ret_brand(),it1[i].ret_brand())==0)
						   {fl=1;}
						  j--;
						 }
						if(fl==0)
						 {it2[k]=it1[i];
						  k++;
						  cout<<"\n\n "<<k<<". "<<it1[i].ret_brand();}
					   }
					  k=0;
					  cout<<"\n\n ENTER THE BRAND NO: ";
					  cin>>opt;
					  strcpy(str,it2[opt-1].ret_brand());
					  for(i=0;i<n;i++)
					   {if(strcmpi(str,it1[i].ret_brand())==0)
						 {it2[k]=it1[i];
						  k++;}
					   }
					  clrscr();
					  for(i=0;i<k;i++)
					   {cout<<"\n\n "<<i+1<<". "<<it2[i].ret_model();}
					  cout<<"\n\n ENTER MODEL NO: ";
					  cin>>opt;
					  fl=0;
					  for(i=0;i<n;i++)
					   {for(int j=0;j<k;j++)
						 {if(strcmpi(it1[i].ret_brand(),it2[opt-1].ret_brand())==0)
						   if(strcmpi(it1[i].ret_model(),it2[opt-1].ret_model())==0)
							if(it1[i].ret_price()==it2[opt-1].ret_price())
							 if(it1[i].ret_price()==it2[opt-1].ret_price())
							  {opt=i;
							   fl=1;
							  }
						 }
						if(fl==1)
						 {break;}
					   }
					  it1[opt].display();
					  getch();
					  clrscr();
					  temp=0;
					  do
					   {temp=0;
						cout<<"\n QUANTITY: ";
						cin>>q;
						if(it1[opt].ret_qty()<q)
						 {cout<<"\n NOT ENOUGH STOCK. PLEASE REDUCE QUANTITY.";
						  temp=1;
						 }
					   }while(temp==1);
					  getch();
					  it1[opt].modify(0-q);
					  it1[opt].display();
					  getch();
					  do
					   {cout<<"\n\n ANYMORE(Y/N)? ";
						cin>>ans;
					   }while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n');
					 }while(ans!='N'&&ans!='n');
					for(i=0;i<n;i++)
					 {fout.write((char*)&it1[i],sizeof(item));}
					fio.close();
					fout.close();
					remove("ITEMS.dat");
					rename("TEMP.dat","ITEMS.dat");
					break;
			 default:cout<<"\n\n INVALID ENTRY.";
					 cout<<"\n\n\n PRESS ANY KEY......";
					 getch();
					 fio.close();
			}
		   break;
	case 3:main();
		   break;
	default:cout<<"\n\n\n INVALID ENTRY.";
			cout<<"\n\n\n PRESS ANY KEY......";
			getch();
			fio.close();
   }
  do
   {cout<<"\n\n DO YOU WISH TO CONTINUE(Y/N)? ";
	cin>>ch;
   }while(ch!='y'&&ch!='Y'&&ch!='N'&&ch!='n');
  }while(ch!='N'&&ch!='n');
  getch();
 }


//FUNCTION TO SEARCH FOR BILLING HISTORY BY DATE
void billhistory()
 {clrscr();
  void main();
  int d1,d2,m1,m2,fl=0;
  float y1,y2;
  billdet b;
  char ans;
  do
   {cout<<"\n\n DO YOU WANT TO RETURN TO MAIN MENU(Y/N)? ";
	cin>>ans;
   }while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n');
  if(ans=='y'||ans=='Y')
   {main();}
  clrscr();
  ifstream fin("BILL.dat",ios::in);
  cout<<"\n ENTER THE DATE SINCE YOU WANT THE DETAILS TO BE DISPLAYED";
  cout<<"\n\n DATE: ";
  cin>>d1;
  cout<<"\n MONTH: ";
  cin>>m1;
  cout<<"\n YEAR: ";
  cin>>y1;
  cout<<"\n\n\n UPTO";
  cout<<"\n\n DATE: ";
  cin>>d2;
  cout<<"\n MONTH: ";
  cin>>m2;
  cout<<"\n YEAR: ";
  cin>>y2;
  clrscr();
  cout<<"\n BILLDETAILS:\n";
  while(fin.read((char*)&b,sizeof(b)))
   {fin.seekg(fin.tellg()+b.ret_no()*sizeof(item));
	if(b.ret_yr()>=y1&&b.ret_yr()<=y2)
	 {if(b.ret_month()>=m1&&b.ret_month()<=m2)
	   {if(b.ret_date()>=d1&&b.ret_date()<=d2)
		 {fl=1;
		  b.display();
		  cout<<"\n\n NET: Rs."<<b.ret_net()<<"/-";
		 }
	   }
	 }
   }
  if(fl==0)
   cout<<"\n\n NO PRODUCTS HAS BEEN BILLED.";
  getch();
 }



//FUNCTION TO SEARCH DETAILS OF BILL, CUSTOMER
void search_details()
 {clrscr();
  void main();
  char z1[25],z2[10];
  int opt,a,t,u,x=0,y=0,fl=0;
  double bill,cid;
  long double net=0;
  billdet b;
  customer c;
  item it;
  ifstream fin;
  cout<<"\n\n SEARCH DETAILS BY:";
  cout<<"\n\n\n 1. BILLNO.";
  cout<<"\n\n 2. CUSTOMER ID.";
  cout<<"\n\n 3. RETURN TO MAIN MENU.";
  cout<<"\n\n\n ENTER YOUR OPTION: ";
  cin>>opt;
  clrscr();
  switch(opt)
   {case 1:cout<<"\n\n ENTER BILLNO: ";
		   cin>>bill;
		   fin.open("BILL.dat",ios::in);
		   while(fin.read((char*)&b,sizeof(b)))
			{if(bill==b.ret_billno())
			  {b.display();
			   fl=1;
			   cout<<"\n\n --------------------------------------------------------------------------";
			   cout<<"\n Sl No. | BRAND          | MODEL          | PRICE     | QUANTITY  | TOTAL";
			   cout<<"\n ====== | =====          | =====          | =====     | ========  | =====";
			   for(int i=0;i<b.ret_no();i++)
				{fin.read((char*)&it,sizeof(it));
				 a=1;
				 t=1;
				 cout<<"\n        |                |                |           |           |      ";
				 cout<<"\n "<<i+1<<".";
				 if(i>=10)
				  {cout<<"      | ";}
				 else
				  {cout<<setw(7)<<"| ";}
				 u=17-strlen(it.ret_brand());
				 cout<<it.ret_brand();
				 cout<<setw(u)<<"| ";
				 u=15-strlen(it.ret_model());
				 cout<<it.ret_model();
				 if(u<0)
				  {while(u!=0)
					{u++;
					 cout<<"\b";
					}
				   cout<<"| ";
				   x=15;
				   strcpy(z1,it.ret_model());
				   while(x!=strlen(z1))
					{z2[y]=z1[x];
					 y++;
					 x++;
					 z2[y]='\0';
					}
				  }
				 else
				  {cout<<setw(u+2)<<"    | ";}
				 cout<<it.ret_price();
				 while(it.ret_price()/a>10)
				  {t++;
				   a=a*10;
				  }
				 cout<<setw(12-t)<<"| ";
				 t=1;
				 a=1;
				 cout<<it.ret_qty();
				 while(it.ret_qty()/a>10)
				  {t++;
				   a=a*10;
				  }
				 cout<<setw(12-t)<<" | ";
				 cout<<it.ret_price()*it.ret_qty();
				 net+=it.ret_price()*it.ret_qty();
				 u=15-strlen(it.ret_model());
				 if(u<0)
				  {cout<<"\n        |                | ";
				   cout<<z2;
				   u=strlen(z2);
				   while(u!=15)
					{u++;
					 cout<<" ";
					}
				   cout<<"|           |           |      ";
				  }
				}
			   cout<<"\n        |                |                |           |           |      ";
			   cout<<"\n -------------------------------------------------------------------------";
			   cout<<"\n                                      TOTLAL:             Rs."<<b.ret_net()<<"/-";
			   cout<<"\n --------------------------------------------------------------------------";
			   getch();
			   break;
			  }
			 if(fl==0)
			  {for(int i=0;i<b.ret_no();i++)
			   fin.seekg(fin.tellg()+sizeof(item));
			  }
			}
		   if(fl==0)
			cout<<"\n\n NO RECORDS FOUND!!!!!.";
		   fin.close();
		   break;
	case 2:cout<<"\n\n ENTER CUSTOMER ID: ";
		   cin>>cid;
		   fin.open("CUSTOMER.dat",ios::in);
		   while(fin.read((char*)&c,sizeof(c)))
			{if(cid==c.ret_cid())
			  {c.display();
			   fl=1;
			   break;
			  }
			}
		   if(fl==0)
			cout<<"\n\n NO RECORDS FOUND!!!!!.";
		   fin.close();
		   if(fl==1)
			{cout<<"\n\n\n PURCHASES: ";
			 fin.open("BILL.dat",ios::in);
			 while(fin.read((char*)&b,sizeof(b)))
			  {if(cid==b.ret_cid())
				{b.display();
				 cout<<"\n\n NET: "<<b.ret_net();
				}
			   for(int i=0;i<b.ret_no();i++)
				{fin.seekg(fin.tellg()+sizeof(item));}
			  }
			 fin.close();
			}
		   break;
	case 3:main();
		   break;
	default:cout<<"\n\n INVALID ENTRY.";
   }
  getch();
 }


//FUNCTION TO EDIT DETAILS OF CUSTOMER
void cust_edit()
 {double cid;
  customer c;
  int fl=0;
  char ans;
  void main();
  clrscr();
  do
   {cout<<"\n\n DO YOU WANT TO RETURN TO MAIN MENU(Y/N)? ";
	cin>>ans;
   }while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n');
  if(ans=='y'||ans=='Y')
   {main();}
  clrscr();
  ifstream fin("CUSTOMER.dat",ios::in);
  ofstream fout("TEMP.dat",ios::out);
  clrscr();
  cout<<"\n\n ENTER THE CUSTOMER ID: ";
  cin>>cid;
  while(fin.read((char*)&c,sizeof(c)))
   {if(c.ret_cid()==cid&&fl==0)
	 {cout<<"\n\n ENTER THE NEW DETAILS: ";
	  c.input_mod();
	  fl=1;
	 }
	fout.write((char*)&c,sizeof(c));
   }
  fin.close();
  fout.close();
  remove("CUSTOMER.dat");
  rename("TEMP.dat","CUSTOMER.dat");
 }


//FUNCTION TO SEARCH FOR STOCK DETAILS
void search_stdetails()
 {clrscr();
  void main();
  item it1[100],it2[10];
  int j,opt,k=0,fl=0,n=0;
  char str[10],ans;
  do
   {cout<<"\n\n DO YOU WANT TO RETURN TO MAIN MENU(Y/N)? ";
	cin>>ans;
   }while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n');
  if(ans=='y'||ans=='Y')
   {main();}
  clrscr();
  ifstream fin("ITEMS.dat",ios::in);
  if(!fin)
   {exit(0);}
  while(fin.read((char*)&it1[n],sizeof(item)))
   {n++;
   }
  for(int i=0;i<n;i++)
   {fl=0;
	j=i-1;
	while(j>=0)
	 {if(strcmpi(it1[j].ret_brand(),it1[i].ret_brand())==0)
	   {fl=1;}
	  j--;
	 }
	if(fl==0)
	 {it2[k]=it1[i];
	  k++;
	  cout<<"\n\n "<<k<<". "<<it1[i].ret_brand();}
   }
  k=0;
  cout<<"\n\n ENTER THE BRAND NO: ";
  cin>>opt;
  strcpy(str,it2[opt-1].ret_brand());
  cout<<str;
  for(i=0;i<n;i++)
   {if(strcmpi(str,it1[i].ret_brand())==0)
	 {it2[k]=it1[i];
	  k++;
	 }
   }
  clrscr();
  for(i=0;i<k;i++)
   {cout<<"\n\n "<<i+1<<". "<<it2[i].ret_model();}
  cout<<"\n\n ENTER MODEL NO: ";
  cin>>opt;
  it2[opt-1].display();
  cout<<"\n\n\n PRESS ANY KEY TO CONTINUE......";
  getch();
 }


//FUNCTION TO DELETE PASSWORD
void pass_del()
 {pass p;
  char a,ans,pas1[8],pas2[8];
  ifstream fin("PASSWORD.dat",ios::in);
  fin.read((char*)&p,sizeof(pass));
  fin.close();
  p.set_pass();
  cout<<"\n\n ENTER THE CURRENT PASSWORD: ";
  for(int i=0;i<8;)
   {pas1[i]=getch();
	if(i==0)
	 {a=pas1[i];}
	if((int)pas1[i]==8&&i>0)
	 {cout<<"\b \b";
	  i--;
	 }
	else
	 {cout<<"*";
	  i++;
	 }
   }
  ans='r';
  pas1[8]='\0';
  pas1[0]=a;
  fin.close();
  if(strcmp(pas1,p.ret_pass())==0)
   {do
	 {cout<<"\n\n\n ARE YOU SURE YOU WANT TO REMOVE PASSWORD(Y/N)? ";
	  cin>>ans;
	 }while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n');
	if(ans=='y'||ans=='Y')
	 {cout<<"\n\n PASSWORD REMOVED....";
	  remove("PASSWORD.dat");
	 }
   }
  else
   {cout<<"\n\n\n INCORRECT PASSWORD....";
   }
 }


//FUNCTION FOR PASSWORD SETTINGS
void password()
 {clrscr();
  void main();
  int opt,fl=1,t=0;
  pass p,p1;
  char pas1[8],pas2[8],ans,a,b;
  ifstream fin("PASSWORD.dat",ios::in);
  fin.read((char*)&p1,sizeof(pass));
  fin.close();
  fstream fio("PASSWORD.dat",ios::out|ios::in);
  if(strcmp(p1.ret_pass(),"")==0)
   {fl=0;}
  if(fl==0)
   {cout<<"\n\n 1. CREATE NEW PASSWORD.";
	cout<<"\n\n 2. RETURN TO MAIN MENU.";}
  else
   {cout<<"\n\n 1. CHANGE PASSWORD.";
	cout<<"\n\n 2. REMOVE PASSWORD.";
	cout<<"\n\n 3. RETURN TO MAIN MENU.";}
	cout<<"\n\n\n ENTER YOUR OPTION: ";
	cin>>opt;
   clrscr();
   switch(opt)
	{case 1:if(fl==0)
			 {fio.close();
			  remove("PASSWORD.dat");
			  ofstream fout("PASSWORD.dat",ios::out);
			  cout<<"\n\n\n ENTER THE NEW PASSWORD(8-digit): ";
			  for(int i=0;i<8;)
			   {pas1[i]=getch();
				if(i==0)
				 a=pas1[i];
				if((int)pas1[i]==8&&i>0)
				 {cout<<"\b \b";
				  i--;
				 }
				else
				 {cout<<"*";
				  i++;}
			   }
			  pas1[8]='\0';
			  cout<<"\n\n ENTER PASSWORD TO CONFIRM: ";
			  for(i=0;i<8;)
			   {pas2[i]=getch();
				if(i==0)
				 a=pas2[i];
				if((int)pas2[i]==8&&i>0)
				 {cout<<"\b \b";
				  i--;}
				else
				 {cout<<"*";
				  i++;}
			   }
			  pas2[8]='\0';
			  pas1[0]=a;
			  p.pass_input(pas1);
			  for(int j=0;j<8;j++)
			   {if(pas1[j]==pas2[j])
				 {t++;}
				else
				 {t--;}
			   }
			  if(t>=7)
			   {cout<<"\n\n\n PASSWORD CREATED....";
				fout.write((char*)&p,sizeof(pass));
			   }
			  else
			   {cout<<"\n\n\n PASSWORD NOT CREATED....";}
				fout.close();
				break;
			 }
			else
			 {fl=0;
			  cout<<"\n\n ENTER THE CURRENT PASSWORD: ";
			  for(int i=0;i<8;)
			   {pas1[i]=getch();
				if(i==0)
				 a=pas1[i];
				if((int)pas1[i]==8&&i>0)
				 {cout<<"\b \b";
				  i--;}
				else
				 {cout<<"*";
				  i++;}
			   }
			  pas1[8]='\0';
			  pas1[0]=a;
			  strcpy(pas2,p1.ret_pass());
			  for(int j=0;j<8;j++)
			   {if(pas1[j]==pas2[j])
				 {t++;}
				else
				 {t--;}
			   }
			   {fl=1;}
			  if(fl==1)
			   {cout<<"\n\n\n\n ENTER THE NEW PASSWORD: ";
			  for(int i=0;i<8;)
			   {pas1[i]=getch();
				if(i==0)
				 a=pas1[i];
				if((int)pas1[i]==8&&i>0)
				 {cout<<"\b \b";
				  i--;}
				else
				 {cout<<"*";
				  i++;}
			   }
			  pas1[8]='\0';
			  cout<<"\n\n ENTER THE NEW PASSWORD TO CONFIRM: ";
			  for(i=0;i<8;)
			   {pas2[i]=getch();
				if(i==0)
				 a=pas2[i];
				if((int)pas2[i]==8&&i>0)
				 {cout<<"\b \b";
				  i--;}
				else
				 {cout<<"*";
				  i++;}
			   }
			  pas2[8]='\0';
			  pas1[0]=a;
			  t=0;
			  for(int j=0;j<8;j++)
			   {if(pas1[j]==pas2[j])
				 {t++;}
				else
				 {t--;}
			   }
			  if(t>=7)
			   {p.pass_input(pas1);
				p.set_pass();
				cout<<"\n\n\n\n PASSWORD CHANGED..";
				ofstream fout("TEMP.dat",ios::out);
				fout.write((char*)&p,sizeof(p));
				fio.close();
				fout.close();
				remove("PASSWORD.dat");
				rename("TEMP.dat","PASSWORD.dat");
			   }
			  else
			   {cout<<"\n\n PASSWORD NOT CHANGED..";}
			 }
			fio.close();
			break;
	case 2:if(fl==0)
			{main();
			 break;}
		   else
			{pass_del();
			 main();
			}
		   break;
	case 3:if(fl==0)
			{cout<<"\n\n INVALID ENTRY..";}
		   else
			{main();
			 break;};
		   break;
	default:cout<<"\n\n INVALID ENTRY..\n\n PRESS ANY KEY.....";
   }
  }
 getch();
   clrscr();
  }




//FUNCTION TO CHECK IF PASSWORD IS RIGHT OR WRONG
int pass_check()
 {pass p;
  int i=3,t=0;
  char pas[8];
  ifstream fin("PASSWORD.dat",ios::in);
  fin.read((char*)&p,sizeof(pass));
  p.set_pass();
  if(strcmpi(p.ret_pass(),"")==0)
   {t=1;
   }
  else
   {do
	 {clrscr();
	  cout<<"\n YOU HAVE GOT "<<i<<" CHANCES LEFT.";
	  i--;
	  cout<<"\n\n ENTER PASSWORD(8-digit): ";
	  for(int j=0;j<8;)
	   {pas[j]=getch();
		if((int)pas[j]==8)
		 {cout<<"\b \b";
		  j--;}
		else
		 {cout<<"*";
		  j++;}
	   }
	  pas[8]='\0';
	  if(strcmp(pas,p.ret_pass())==0)
	   {t=1;
	   }
	 }while(i!=0&&t!=1);
   }
  fin.close();
  return t;
 }


//LOADING
void load_start()
 {randomize();
  char s[80],s1[7][15];
  int a,b,a2=4,b2=5;
  clrscr();
  textcolor(WHITE);
  textbackground(RED);
  strcpy(s,"WELCOME TO BILLING SOFTWARE");
  strcpy(s1[0],"MAGENTA");
  strcpy(s1[1],"LIGHTBLUE");
  strcpy(s1[2],"RED");
  strcpy(s1[3],"CYAN");
  strcpy(s1[4],"LIGHTRED");
  strcpy(s1[5],"");
  strcpy(s1[6],"GREY");
  for(int i=0;i<strlen(s);i++)
   {do
	 {do
	   {a=random(7);
	   }while(a==a2||a==b2);
	  textcolor(*s1[a]);
	  do
	   {b=random(7);
	   }while(b==b2||b==a2);
	  textbackground(*s1[b]);
	 }while(a==b);
	a2=a;
	b2=b;
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\t\t\t";
	for(int j=0;j<=i;j++)
	 {cout<<s[j];}
	delay(200);
   }
  delay(1000);
 }


//START OF VOID MAIN
void main()
 {clrscr();
  int ch,opt,fl=1,load=0;
  char ans;
  if(imp==0)
   {textcolor(LIGHTGREEN);
	textbackground(BLACK);
	ch=pass_check();
	if(ch==0)
	 {cout<<"\n\n YOUR CHANCES ARE OVER.";
	  cout<<"\n\n PROGRAM TERMINATED.\n\n PRESS ANY KEY.......";
	  getch();
	  exit(0);
	 }
	clrscr();
	cout<<"\n\t\t\t LOADING PROJECT:  ";
	load=10;
	for(int i=1;i<10;i++)
	 {cout<<load<<"%";
	  delay(250);
	  cout<<"\b\b\b";
	  load=10*i;
	 }
	load_start();
	textcolor(LIGHTCYAN);
	textbackground(BLACK);
	clrscr();
	cout<<"\n\n\t\t\t COMPUTER SCIENCE PROJECT";
	cout<<"\n\t\t\t ========================";
	cout<<"\n\n\n\t        SCHOOL: RAJAGIRI PUBLIC SCHOOL, KALAMASSERY";
	cout<<"\n\n\t        SUBJECT TEACHER: MS. ANJU JOSELINE";
	cout<<"\n\n\t        BY: JOE PAUL THALIATH(24) AND JOE VITHAYATHIL(25)";
	cout<<"\n\n\t        CLASS: XII-A";
	cout<<"\n\n\t        YEAR: 2015-2016";
	getch();
	clrscr();
	cout<<"\n\n\n WELCOME TO THE SMARTPHONE SHOP";
	cout<<"\n ------------------------------";
	cout<<"\n\n\n THIS PROJECT CAN BE USED FOR FOLLOWING PURPOSE:";
	cout<<"\n\n\n\n 1. TO BILL ITEMS.";
	cout<<"\n\n 2. TO MODIFY STOCK AT YOUR SHOP.";
	cout<<"\n\n 3. TO EDIT DETAILS OF CUSTOMER.";
	cout<<"\n\n 4. TO SEARCH FOR BILL DETAILS BY DATE.";
	cout<<"\n\n 5. TO SEARCH FOR DETAILS USING BILLNO AND USING CUSTOMER ID.";
	cout<<"\n\n 6. TO SEARCH FOR STOCK DETAILS.";
	cout<<"\n\n 7. TO CHANGE PASSWORD SETTINGS.";
	cout<<"\n\n\n\n\n PRESS ANY KEY TO CONTINUE....................";
	getch();
	imp++;
   }
  do
   {textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	fl=1;
	cout<<"\n\n\n\t\t\t\t MAIN MENU";
	cout<<"\n\t\t\t\t =========";
	cout<<"\n\n\n\n\n 1. BILL ITEMS.";
	cout<<"\n\n 2. MODIFY STOCK AT YOUR SHOP.";
	cout<<"\n\n 3. EDIT DETAILS OF CUSTOMER.";
	cout<<"\n\n 4. SEARCH FOR BILL DETAILS BY DATE.";
	cout<<"\n\n 5. SEARCH FOR DETAILS USING BILLNO AND USING CUSTOMER ID.";
	cout<<"\n\n 6. SEARCH FOR STOCK DETAILS.";
	cout<<"\n\n 7. CHANGE PASSWORD SETTINGS.";
	cout<<"\n\n 8. EXIT.";
	cout<<"\n\n\n ENTER YOUR OPTION: ";
	cin>>opt;
	switch(opt)
	 {case 1:billing();
			 break;
	  case 2:stock();
			 break;
	  case 3:cust_edit();
			 break;
	  case 4:billhistory();
			 break;
	  case 5:search_details();
			 break;
	  case 6:search_stdetails();
			 break;
	  case 7:password();
			 break;
	  case 8:do
			  {cout<<"\n\n\n ARE YOU SURE YOU WANT TO EXIT(Y/N)? ";
			   cin>>ans;
			  }while(ans!='y'&&ans!='Y'&&ans!='n'&&ans!='N');
			 if(ans=='y'||ans=='Y')
			  {	textcolor(LIGHTGREEN);
				textbackground(BLACK);
			   clrscr();
			   cout<<"\n\n\n\t\tWAIT WHILE PROGRAM IS SAVING FILES";
			   for(int i=0;i<8;i++)
				{delay(400);
				 cout<<".";
				}
			   textcolor(WHITE);
			   textbackground(BLACK);
			   clrscr();
			   exit(0);}
			 else
			  {fl=1;}
			 break;
	  default:cout<<"\n\n\n INVALID ENTRY.";
	 }
   }while(fl==1);
 }

//END OF THE PROGRAM