#include <iostream>
using namespace std;

int main()
{
	int i;
	int a;
	for(i=1; i<10; i++)
	{
		cout<<" Bir Sayi Girin "<<endl<<endl;  // 2 tane endl yaz�nca alta do�ru bo�luk b�rak�r.
		cin>>a;
		
		if(a%2==0)
		cout<<"Girdiginiz sayi "<<a<<" Sayi Cifttir "<<endl<<endl;  //<<a<< bir de�i�kendir.
		
		else
		cout<<"Girdiginiz sayi "<<a<<" Sayi Tektir "<<endl<<endl;
	}
	
	
}
