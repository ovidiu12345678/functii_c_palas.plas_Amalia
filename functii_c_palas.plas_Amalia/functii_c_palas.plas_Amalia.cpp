#include <iostream>
using namespace std;
int main() {
	
// sintaxa while
//
    //  while(conditie){instructiuni executate}
//
//	// ex:
//
//	// parcugem numerele de la numarStart-numarAles
//
//
	int numarStart, numarAles;

	cout << "Intrdoduceti numarul de statrt si cel ales de dumneavoastra pentru parcurgere !" << endl << endl;

	cout << "numar curent de start = ", cin >> numarStart;
	cout << "numarul ales de dumneavoastra reprezentand numarul de start parcus = ", cin >> numarAles;

	while (numarStart < numarAles)
	{
		numarStart++;

		cout << numarStart;
	}

//// ***********************************************************************************************************************
//
//	//Suma cifrelor unui număr natural n, de cel mult 9 cifre.
//
//
	int numarAles, sumaNumarAles = 0;

	cout << "Introduce-ti un numar ales, programul va efectua suma nummarului introdus de utilizator ! " << endl << endl;

	cout << "Introduceti numarul ales de dumneavoastra = ",  cin >> numarAles;

	while (numarAles)
	{
		sumaNumarAles = sumaNumarAles + numarAles % 10;
		numarAles = numarAles / 10;

	}
	cout << " Suma numarului ales este egala cu = " << sumaNumarAles;
//
//
//
//	//***************************************************************************************************************
//
//
//	// instructiunea for
//	// sintaxa
//
//
//	// for (; ;){executie block code}
//
//
	 parcurgegem numereledin 10 in 10
//
//
	int numarAles, numarParcus;
//
	cout << "Citeste numar !" << endl;
//
	cout << " Ganditiva la un numar = ", cin >> numarAles;
	cout << "Introduce-ti numarul parcus ce va reprezenta numarul ales = ", cin >> numarParcus;
//
//	cout << "Numerele parcurse din 10 in 10 sunt : " << endl << endl;
//
	for (int numarCurent = numarAles; numarCurent <= numarParcus; numarCurent += 10) {

		cout  <<  numarCurent << endl << endl;
	}
//
//
//
//	// **********************************************************************************************************
//
//
//	//// sintaxa do while
//
//	//do 
//	//{
//	//	// executie
//
//	//} while (conditie);
//
//
//
//
////	**************************************************************************************************************************
//
//
//
//	// oprratii increment si discrement(--, ++, ++variabila, variabila++, --variabila, variabila--)
//
//
//
//
//
int numar = 12, increment = 3;

int impartire = numar /= increment++; // returneaza valoarea curenta

cout << impartire;



int numar = 12, increment = 3;

int impartire = numar /= ++increment;// ++increment ===>>> ++ 1 (unitate) + increment = 3 ==>> ++increment = 4, adica numar = 12 / increment = 4;
	
cout << impartire;



////********************************************************************************************************************************************************************************************
//
//
//// Functii
//
//
//  
//  
//}
//










	// FUNCTII


	/*Functii
		• Numele
		 PascalCase
		• Parametrii
		 Transmisi prin valoare(exteriorul nu se modifica)
		 Transmisi prin referinta(este trimisa adresa de memorie a)
		 Majoritatea tipurilor reference - type, vectori
		 “out” – antipattern, asa nu!
		• Vizibili in interiorul functiei
		• De la 0 la 65536 parametri
		• Max 3 - 7 params
		• Despartiti prin virgula
		• Rezultatul functiei
		 Orice tip de date C, C++  C# etc, functii
		 Tipul void
		• Return
		• Marcheaza iesirea din functie
		• Daca functia are return type trebuie sa returneze o valoare pe toate beranch - urile sale
		Functii
		• Ajuta la managementul complexitatii
		 Impart un algoritm complex intr - un set de algoritmi mai simpli
		 PornesteMasina = > DeschideUsa, InchideUsa, PuneCentura,
		ApasaButonulDePornire
		• Fac codul reutilizabil
		 OpresteMasina = > DeschideUsa, UnchideUsa*/



		// EX VOLUM PARALIPIIPED DREPTUNGHIC


	
	static void PrintTextUser() {
	
		cout << "Introduceti valorile dorite fiecarei caracteristica a componentei unui paralaripiped dreptunghic !" << endl << endl;
	
	}
	
	static int CalculezaVolumParalaripipedDreptunghic(int lungime, int inaltime, int latime) {
	
		int volum = lungime * latime * inaltime;
	
		return volum;
	}
	
	
	int main() {
	
		int lungime, latime, inaltime, volum;
	
		PrintTextUser();
	
	
		cout << "Introduce-ti lungimea acestuia !" << endl << "lungime= ", cin >> lungime;
		cout << "Acum introduce-ti latimea ! " << endl << "latime= ", cin >> latime;
		cout << "Acum a mai ramas sa introduti inaltimea acestuia ! " << endl << "inaltime= ", cin >> inaltime;
	
		cout << "Rezultatul volumului unui paralaripiped dreptunghic este : " << endl << "Volum paralaripiped dreptunhic= " << CalculezaVolumParalaripipedDreptunghic(lungime, latime, inaltime) << endl;
		
	
	       int sumaVolumPerimetru = (lungime + latime + inaltime) + CalculezaVolumParalaripipedDreptunghic(lungime, latime, inaltime);
	
	      cout << "Rezultat suma volum perimetru= " << sumaVolumPerimetru;
	
	}
