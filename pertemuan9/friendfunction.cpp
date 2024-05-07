#include <iostream>
using namespace std;

class pelajar;
class manusia
{
public:
	void shownilaipelajar(pelajar& x);

};

class pelajar
{
private:
	int nilai;
public:
	pelajar() { nilai = 100 }

};

void manusia::shownilaipelaja (pelajar& x);
{
	cout << x.nilai;
}

