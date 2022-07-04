#include <iostream>
using namespace std;

int main()
{
	int i;
	int a;
	for(i=1; i<10; i++)
	{
		cout<<" Bir Sayi Girin "<<endl<<endl;  // 2 tane endl yazýnca alta doðru boþluk býrakýr.
		cin>>a;
		
		if(a%2==0)
		cout<<"Girdiginiz sayi "<<a<<" Sayi Cifttir "<<endl<<endl;  //<<a<< bir deðiþkendir.
		
		else
		cout<<"Girdiginiz sayi "<<a<<" Sayi Tektir "<<endl<<endl;
	}
	
	
}
