#include "File.h"

File::File() {
	cout << "Vvedite imya faila: "; cin >> name;
	cout << "Vvedite datu obrasheniya\n";
	cout << "Den: "; cin >> t.day;
	cout << "God: "; cin >> t.year;
	cout << "Vvedite razmer: "; cin >> razmer;
	cout << "Vvedite kol-vo obrasheniy: "; cin >> obrash;
	cout << "\n";
}

void File::show() {
	cout << "Imya faila: " << name << endl;
	cout << "Data obrasheniya: " << t.day << '.' << t.year << endl;
	cout << "Razmer: " << razmer << endl;
	cout << "Kol-vo obrasheniy: " << obrash << endl;
	cout << "\n";
}

char *File::getalf() { return name; }
int File::getrazmer() { return razmer; }
int File::getobrash() { return obrash; }
void File::setalf(char *inp_name) {
	/*strcpy(name, inp_name);*/
}


File::~File()
{
}

void spisalf(File spis[], int n) {
	cout << "Spisok failov v alfavitnom poryadke:";
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (strcmp(spis[j].getalf(), spis[j - 1].getalf()) < 0) {
				char name[30];
				/*strcpy(name, spis[j].getalf());*/
				spis[j].setalf(spis[j - 1].getalf());
				spis[j - 1].setalf(name);
			}
		}
	}
}

//список файлов заданного размера
void  spisrazmer(File spis[], int n) {
	int razm;
	cout << "Vvedite razmer: ";
	cin >> razm;
	for (int i = 0; i<n; i++)
		if (spis[i].getrazmer() > razm)
			spis[i].show();
}

//список файлов по дате обращения
void spisobrash(File spis[], int n) {
	int obr;
	cout << "Vvedite kol-vo obrasheniy: "; cin >> obr;
	for (int i = 0; i<n; i++)
		if (spis[i].getobrash()> obr)
			spis[i].show();
}