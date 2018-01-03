#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

main()
 
{
	 int X[3][5],R[3][5],W[1][5],C[3][5],i,j,k;
 
 cout<<"\n\t\t\tNAMA : Khairunnaji\n";

cout<<"\t\t\tNPM : 16630286\n";

cout<<"\t\t\tPROGRAM : Teknik Informtika\n";
cout<<"\t\t\tTeknik : INPUTAN ARRAY DIMENSI 2\n";
  cout<<"Silahkan input matrik X : \n";
 
   cout<<"------------------------- \n";
 
   for(i=0;i<3;i++)
 
   {
 
        for(j=0;j<5;j++)
 
        {
 
        cout<<"matrik X "<<(i+1)<<","<<(j+1)<<" : ";
 
      cin>>X[i][j];
 
        }
 
   }
 
}
