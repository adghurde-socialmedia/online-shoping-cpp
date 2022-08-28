#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
float totamt;
class item
{
private:
char name[25];
int qty;
float rate,amount;
public:
void hed()
{
cout<<"\t\t*********************************************"<<endl;
cout<<"\t\t\t   * NAVNEET BOOK DEPO *"<<endl;
cout<<"\t\t*********************************************"<<endl;
}
void getdata()
{
cout<<"\n Enter The Item Name:";
cin>>name;
cout<<" Enter The Rate:";
cin>>rate;
cout<<" Enter The Quantity:";
cin>>qty;
}
void printdata()
{
cout<<setw(20)<<name;
cout<<setw(8)<<qty;
cout<<setw(8)<<rate;
amount=rate*qty;
totamt=amount+totamt;
cout<<setw(8)<<amount<<endl;
}
};
void main()
{
item shop[10];
char ch='y';
int n=0,i;
clrscr();
shop[n].hed();
while(ch=='y'||ch=='y')
{
shop[n].getdata();
n++;
cout<<"\n Do You Want To Continue y/n:";
cin>>ch;
}
cout<<"\n \t\t*********************************************"<<endl;
cout<<"\t\t\t   *  SHOPING LIST  *"<<endl;
cout<<"\t\t*********************************************"<<endl;
cout<<"\t\t name - quantity - Rate - Amount \n";
for(i=0;i<n;i++)
shop[i].printdata();
cout<<"\t\t----------------------------------------------"<<endl;
cout<<"\t\t Total Bill :"<<totamt;
getch();
}