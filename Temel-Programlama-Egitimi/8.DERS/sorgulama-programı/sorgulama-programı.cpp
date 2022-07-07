#include <iostream>
using namespace std;


int main()
{

	string kullanici_adi;
	int sifre;
	
	cout<<"Lutfen kullanici adini giriniz"<<endl;
	cin>>kullanici_adi;
	
	if(kullanici_adi=="erol")
	{
		
	
	
	cout<<"Kullanici adi dogru"<<endl<<endl;
		cout<<"Sifrenizi giriniz"<<endl;
		cin>>sifre;
		if(sifre==123456)
		cout<<"-----Giris basarili---------"<<endl;
		
		else
		cout<<"---------Sifreniz hatalidir--------"<<endl;
	}
	
	else
	{
		cout<<"-------kullanici adiniz hatalidir------"<<endl;
	}
}
 
