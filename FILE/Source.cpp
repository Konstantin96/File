#include "File.h"

int main() {
	File *spis;
	int n;
	cout << "Vvedite kol-vo failov: ";
	cin >> n;
	spis = new File[n];

	spisalf(spis, n);
	for (int i = 0; i<n; i++) {
		cout << "==============================" << endl;
		spis[i].show();
	}
	spisrazmer(spis,n); 
	spisobrash(spis,n); 
	delete[] spis;
	cout << "Dlya prodoljeniya najmite lubyu knopku";
}