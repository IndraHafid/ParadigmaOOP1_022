#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia {
public:
	string name;
	jantung varJntung;

	manusia(string pName) : name(pName) {
		cout << name << "hidup\n";
	}
	~manusia() {
		cout << name << "mati\n";
	}
};
#endif