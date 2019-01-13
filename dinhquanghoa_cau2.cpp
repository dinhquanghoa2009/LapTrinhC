#include<iostream>
#include<math.h>
using namespace std;

void nhapso(float &a)
{
	cout<<"Nhap vao so: ";
	cin>>a;
}

 void ptb1(float b, float c)
 {
 	if( b == 0)
 	{
 		if(c == 0)
 			cout<<"\nPhuong trinh co vo so nghiem.";
 		else
	 		cout<<"\nPhuong trinh vo nghiem.";
	} 
	else
		cout<<"Phuong trinh co nghiem duy nhat: x= "<<-c/b;
 }
 
 void ptb2(float a, float b, float c)
 {
 	float denta = b*b - 4*a*c;
 	if(a == 0)
 	{
 		ptb1(b, c);
	}
	else if(denta >= 0)
	{
		if(denta > 0)
			cout<<"Phuong trinh co hai nghiem phan biet: x1= "<<((-b+sqrt(denta))/2*a)<<" va x2= "<<((-b-sqrt(denta))/2*a);
		else 
			cout<<"Phuong trinh co nghiem kep: x= "<<-b/2*a;
	}
	else
		cout<<"Phuong trinh vo nghiem.";
 }
 
 void luachon(int n)
 {
 	float a, b, c;
 	cout<<"Chon 1 - Phuong trinh bac 1 \nChon 2 - Phuong trinh bac 2.";
 	cout<<"\nLua chon: ";
 	cin>>n;
 	if(n == 1)
 	{
 		nhapso(b);
 		nhapso(c);
 		ptb1(b,c);
	}
	else if (n==2)
	{
		nhapso(a);
		nhapso(b);
		nhapso(c);
		ptb2(a,b,c);
	}
		else
		cout<<"Lua chon khong phu hop.";
 }

int main()
{
	float a,b,c,n;
	luachon(n);
}
