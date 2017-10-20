#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;



int main()
{
	char  metin[255];

	cout<<"metin giriniz";
	gets(metin);
	int uzunluk=strlen(metin);
	for(int i=0;i<uzunluk;i++)
	{
		metin[i]=metin[i]+1;
		
	}
	
	
	cout<<metin;
	return 0;
}
