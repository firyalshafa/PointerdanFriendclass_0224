// pertemuan9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class persegipanjang
{
public:
    int panjang, lebar;
    int luaspersegipanjang(int b, int a)
    {
        return a * b;
    }

};

class segitiga
{
public:
    int tinggi, alas;
    int luassegitiga(int a, int t)
    {
        return 0.5 * a * t;
    }
    
    int hitung(persegipanjang p)
    {
        return p.panjang;
    }

};

int main()
{
    persegipanjang pp;
    segitiga sg;
    cout << "masukan panjang:";
    cin >> pp.panjang;
    cout << "masukan lebar :";
    cin >> pp.lebar;
    cout << "masukan tinggi:";
    cin >> sg.tinggi;
    cout << "masukan alas:";
    cin >> sg.alas;
    cout << "Masukan TInggi : ";
    cin >> sg.tinggi;
    cout << "Masukan TInggi : ";
    cin >> sg.tinggi;
    cout << "Luas Persegi Panjang : " << pp.luaspersegipanjang (pp.panjang, pp.lebar) << endl;
    cout << "Luas Segitiga : " << sg.luassegitiga(sg.alas, sg.tinggi) << endl;
}

