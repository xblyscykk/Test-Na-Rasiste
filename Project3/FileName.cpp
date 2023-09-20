#include <iostream>
#include <Windows.h>
void Pytanie3();
void KoniecQuiz();
int wybor;
int punkty = 0;


void Pytanie2(){
	ff1:
	system("cls");
	wybor = 0;
	std::cout << "Czy tolerujesz zydow? \n";

	std::cout << "1. Tak \n";
	std::cout << "2. Nie \n";

	system("pause >nul");
	std::cin >> wybor;


	switch (wybor) {

	case 1:

		system("cls");
		std::cout << "Otrzymujesz 0 punktow. \n";
		std::cout << "Posiadasz obecnie: " << punkty << " punktow.";
		Sleep(1500);
		Pytanie3();

	case 2:

		system("cls");
		std::cout << "Otrzymujesz 1 punkt. \n";
		punkty++;
		std::cout << "Posiadasz obecnie: " << punkty << " punktow.";
		Sleep(1500);
		Pytanie3();

	default:

		system("cls");
		goto ff1;



	}

}

void Pytanie3() {


	ff2:
	wybor = 0;
	system("cls");
	std::cout << "Czy potepiasz dzialania hitlera? \n";
	std::cout << "1. Tak \n";
	std::cout << "2. Dobrze zrobil \n";

	system("pause >nul");
	std::cin >> wybor;



	switch (wybor) {

	case 1:

		system("cls");
		std::cout << "Otrzymujesz 0 punktow. \n";
		std::cout << "Posiadasz obecnie: " << punkty << " punktow.";
		Sleep(1500);
		KoniecQuiz();

	case 2:

		system("cls");
		std::cout << "Otrzymujesz 1 punkt. \n";
		punkty++;
		Sleep(1500);
		KoniecQuiz();

	default:

		system("cls");
		goto ff2;



	}




}
void KoniecQuiz() {

	system("cls");

	std::cout << "Obliczanie wyniku.";
	Sleep(500);
	system("cls");
	std::cout << "Obliczanie wyniku..";
	Sleep(500);
	system("cls");
	std::cout << "Obliczanie wyniku...";
	Sleep(500);
	system("cls");
	std::cout << "Obliczanie wyniku.... ";
	Sleep(500);
	system("cls");
	std::cout << "Obliczanie wyniku..... ";
	Sleep(500);
	system("cls");


	if (punkty >= 2) {


		std::cout << "Gratulacje! Jestes rasista! \n";
		std::cout << "Twoj wynik to " << punkty << "/3";
		Sleep(4000);
	}
	else {

		std::cout << "Nie jestes rasista! \n";
		std::cout << "Twoj wynik to " << punkty << "/3";
		Sleep(4000);
	}



}

void Pytanie5() {



}

int main() {
	// KoniecQuiz(); debug
ff:

	std::cout << "Test na rasiste: nacisnij przycisk \n";
	system("pause >nul");
	system("cls");

	std::cout << "Czy lubisz czarnych? \n";
	std::cout << "1. Tak \n";
	std::cout << "2. Nie \n";
	std::cin >> wybor;

	switch (wybor) {

	case 1:

		system("cls");
		std::cout << "Otrzymujesz 0 punktow. \n";
		std::cout << "Posiadasz obecnie: " << punkty << " punktow.";
		Sleep(1500);
		Pytanie2();

	case 2:

		system("cls");
		std::cout << "Otrzymujesz 1 punkt. \n";
		punkty++;
		std::cout << "Posiadasz obecnie: " << punkty << " punktow.";
		Sleep(1500);
		Pytanie2();

	default:

		system("cls");
		goto ff;



	}






}