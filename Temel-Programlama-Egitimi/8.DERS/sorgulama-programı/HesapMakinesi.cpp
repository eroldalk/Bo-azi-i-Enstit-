#include <iostream>
using namespace std;


int main()
{
	int sayi1,sayi2;
	int menu;
	
	cout<<"Hesap Makinesi Hos Geldiniz"<<endl;
	cout<<"Lutfen yapmak istediğiniz islemi secin"<<endl;
	
	cout<<"Toplam islemi icin  1"<<endl;
	cout<<"Cıkarma islemi icin 2"<<endl;
	cout<<"Carpma islemi icin  3"<<endl;
	cout<<"Bolme islemi icin   4"<<endl;
	
	cin>>menu;
	
	if(menu==1)
	{
		cout<<"Toplama islemi"<<endl;
		cout<<"Birinci sayiyi girin"<<endl;
		cin>>sayi1;
		
		cout<<"ikinci sayiyi girin"<<endl;
		cin>>sayi2;
		
		cout<<"iki sayinin toplami  = "<<sayi1+sayi2;
	}
	
	else if(menu==2)
	{
		cout<<"Cikarma islemi"<<endl;
		cout<<"Birinci sayiyi girin"<<endl;
		cin>>sayi1;
		
		cout<<"ikinci sayiyi girin"<<endl;
		cin>>sayi2;
		
		cout<<"iki sayinin farki  = "<<sayi1-sayi2;
	}
	
		else if(menu==3)
	{
		cout<<"Carpma islemi"<<endl;
		cout<<"Birinci sayiyi girin"<<endl;
		cin>>sayi1;
		
		cout<<"ikinci sayiyi girin"<<endl;
		cin>>sayi2;
		
		cout<<"iki sayinin Carpması  = "<<sayi1*sayi2;
	}
	
		else if(menu==4)
	{
		cout<<"Bolme islemi"<<endl;
		cout<<"Birinci sayiyi girin"<<endl;
		cin>>sayi1;
		
		cout<<"ikinci sayiyi girin"<<endl;
		cin>>sayi2;
		
		cout<<"iki sayinin bolumu  = "<<sayi1/sayi2;
	}
	
	else 
	cout<<"---------Bulunamadi----------";
	
}
 
