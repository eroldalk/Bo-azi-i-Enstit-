#include <iostream>
using namespace std;

int main(){
	
	//int n=40;				// i�lem �nceli�i
	//cout<<(n*(n+1)/2);

	int i;
	/*for(i=1; i<=10; i++)   //say�lar�n karesi
	{
		cout<<i*i<<endl;
	}*/
	
			/*for(i=1; i<=10; i++)
			{						//say�lardan biri 5 e denk gelince durur*************************************
				if(i==5)
				break;
				cout<<i<<endl;
			}*/
	
	for(i=1; i<=10; i++)
	{						//10 say�dan sadece 7. say� ��kar�l�r**********************************
		if(i==7)
		continue;
		cout<<i<<endl;
	}
	
}


