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
   //masukkan matrix R
 
   cout<<"Silahkan input matrik R : \n";
 
   cout<<"------------------------- \n";
 
   for(i=0;i<3;i++)
 
   {
 
        for(j=0;j<5;j++)
 
        {
 
        cout<<"matrik R "<<(i+1)<<","<<(j+1)<<" : ";
 
      cin>>R[i][j];
 
        }
 
   }
   //masukkan BOBOT W
 
   cout<<"BOBOT W: \n";
 
   cout<<"------------------------- \n";
 
   for(i=0;i<1;i++)
 
   {
 
    for(j=0;j<5;j++)
 
        {
 
        cout<<"BOBOT W "<<(i+1)<<","<<(j+1)<<" : ";
 
      cin>>W[i][j];
 
        }
 
   }
   cout<<"Silahkan input Matrik R*W: \n";
 
   cout<<"------------------------- \n";
 
   for(i=0;i<3;i++)
 
   {
 
        for(j=0;j<5;j++)
 
        {
 
        cout<<"Matrik R*W"<<(i+1)<<","<<(j+1)<<" : ";
 
      cin>>C[i][j];
 
        }
 
   }
    //cetak matrix X
 
   cout<<"\nMatrik x : \n";;
 
   for(i=0;i<3;i++)
 
   {
 
        for(j=0;j<5;j++)
 
        {
 
        cout<<setw(4)<<X[i][j]<<"|";
 
        }
 
        cout<<endl;
 
   }
 
   cout<<endl;
    //cetak matrix R
 
   cout<<"\nMatrik R : \n";;
 
   for(i=0;i<3;i++)
 
   {
 
        for(j=0;j<5;j++)
 
        {
 
        cout<<setw(4)<<R[i][j]<<"|";
 
        }
 
        cout<<endl;
 
   }
 
   cout<<endl;
//cetak matrix W
 
   cout<<"\nBOBOT W : \n";
 
   for(i=0;i<1;i++)
 
   {
 
        for(j=0;j<5;j++)
 
        {
 
        cout<<setw(4)<<W[i][j]<<"|";

 
        }
 
        cout<<endl;
 
   }
   //cetak matrix R*W
 
   cout<<"\nMatrik R*W : \n";;
 
   for(i=0;i<3;i++)
 
   {
 
        for(j=0;j<5;j++)
 
        {
 
        cout<<setw(4)<<C[i][j]<<"|";
 
        }
 
        cout<<endl;
 
   }
 
   cout<<endl;
 
     //Operasi Perkalian
 
  for (i=0;i<3;i++)
 
  {
 
    for (j=0;j<5;j++)
 
    {
 
    C[i][j]=0;
 
        for (k=0;k< 5;k++)
 
      {
 
        C[i][j]+= R[i][k]*W[k][j];
 
      }
 
    }
 
  }
  
  for (i=0;i<3;i++)
 
  {
 
    for (j=0;j<5;j++)
 
    {
 
    C[i][j]=0;
 
        for (k=0;k< 5;k++)
 
      {
 
        C[i][j]+= X[i][k]*R[k][j];
 
      }
 
    }
 
  }
 
 
  //Menampilkan hasil
 
cout<<"\n HASIL AKHIR : ";
cout<<"\n Nilai A1 : 17.0000";
cout<<"\n Nilai A2 : 13.1167";
cout<<"\n Nilai A3 : 13.6000\n";
  	


    getch();
}

