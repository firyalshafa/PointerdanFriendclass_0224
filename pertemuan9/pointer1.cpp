#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	int showNim() {
		cout << "no induk = " << nim << endl;
	}
};

int main() {
	mahasiswa mhs{ 1 };
	mhs.showNim();

	mahasiswa& refmhs = mhs; //object mhs
	refmhs.nim = 2;// member acces operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs;
	pMhs->nim = 3;

}