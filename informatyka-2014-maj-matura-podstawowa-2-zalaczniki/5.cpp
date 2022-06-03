#include <iostream>
using namespace std;
int  wielokrotnosc( int tab []){
	int wynik=0;
	for(int i=0;i<1999;i++){
		if(tab[i]%tab[i+1]==0 ||tab[i+1]%tab[i]==0){
			wynik++;
		}
		}
	return wynik;
}
int dzielnik(int tab[]){
	int a,b,wynik;
	for(int i=0;i<1999;i++){
	tab[i]=a;
	tab[i+1]=b;
	while(a!=b){
	
       if(a>b)
           a-=b; 
       else
           b-=a;
	}
    if(a=1)wynik++;
    }
    return wynik;
}
int main(){
	int tab [2000];
	for(int i=0;i<2000;i++){
		cin>>tab[i];
	}
	cout<<wielokrotnosc(tab);
	cout<<dzielnik(tab);
	
	
	return 0 ;
}
