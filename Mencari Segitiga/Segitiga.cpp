#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
main()
{
    int pilihan,a,b,c;
    cout<<"========================================\n";
    cout<<"\t1.PROGRAM JENIS SEGITIGA \n";
    cout<<"\t2.KELUAR \n";
    cout<<"========================================\n";
    cout<<"MASUKAN PILIHAN ANDA : "; cin>>pilihan;
    system("cls");
        switch(pilihan)
    {
        case 1:
                cout<<"ANDA MEMILIH PROGRAM JENIS SEGITIGA \n";
                cout<<"=============================================\n";
                cout<<"\nMASUKAN SISI A :"; cin>>a;
                cout<<"\nMASUKAN SISI B :"; cin>>b;
                cout<<"\nMASUKAN SISI C :"; cin>>c;
            if(a==b && b==c)
                cout<<"\nSEGITIGA SAMA KAKI ";
            else if(a==b || b==c || c==a)
                cout<<"\nSEGITIGA SAMA SISI ";
            else
                cout<<"\nSEGITIGA SEMBARANG ";
            break;

        case 2:
            cout<<"TERIMAKASIH SUDAH MEMILIH ";
            break;
    }




    getch();
    return 0;
}
