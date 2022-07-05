#include <iostream>
using namespace std;

int main(){
	
	//int n=40;				// iþlem önceliði
	//cout<<(n*(n+1)/2);

	int i;
	/*for(i=1; i<=10; i++)   //sayýlarýn karesi
	{
		cout<<i*i<<endl;
	}*/
	
			/*for(i=1; i<=10; i++)
			{						//sayýlardan biri 5 e denk gelince durur*************************************
				if(i==5)
				break;
				cout<<i<<endl;
			}*/
	
	for(i=1; i<=10; i++)
	{						//10 sayýdan sadece 7. sayý çýkarýlýr**********************************
		if(i==7)
		continue;
		cout<<i<<endl;
	}
	
}


