#include<iostream>
#include<math.h>
using namespace std;

void nhap(float &initial_amount, float &number_of_year, float &rate);
void tong(float initial_amount, float number_of_year, float rate);
int main()
{
	float initial_amount;
	float number_of_year; 
	float rate;
	nhap( initial_amount,number_of_year,rate); 
	tong(initial_amount,number_of_year,rate);
	return 0;
}

void nhap(float &initial_amount, float &number_of_year, float &rate)
{
	cout<<"Enter initial amount :";
	cin>>initial_amount;cout<<endl;
	cout<<"Enter number of year :";
	cin>>number_of_year;cout<<endl;
	cout<<"Enter interest rate :";
	cin>>rate;cout<<endl;
}
void tong(float initial_amount, float number_of_year, float rate)
{
	float a=initial_amount*pow(1+rate/100,number_of_year);
	cout<<"At the end of "<<number_of_year<<" you will have "<<a<<" dolar";
}
