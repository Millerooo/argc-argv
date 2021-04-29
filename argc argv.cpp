#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main ()
{
	HANDLE hOut;
	
	hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    int tablica[500];
    
 
    string linia;
    fstream plik;
 
    plik.open("plikLICZBY.txt", ios::in);
    if(plik.good() == true)
    {
        while(!plik.eof())
        {
            getline(plik, linia);
            cout << linia << endl;
        }
        plik.close();
	}                   
	{
     SetConsoleTextAttribute( hOut, BACKGROUND_GREEN);
	int max, tab[]={2, 3, 4, 5, 6, 7}; 
	
	max = tab[0]; 
	
	for(int i=1;i<10;i++) 
		if(max<tab[i]){
			if (tab[i]<4){
				cout<<"blad- ilosc parametrow";
			}
		}
		
		
			max = tab[i];
	SetConsoleTextAttribute( hOut, BACKGROUND_RED);
	cout<<"Najwieksza wczytana liczba jest "<<max<<endl;
	}
       return 0; 
    }
   
   
