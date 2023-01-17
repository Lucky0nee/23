#include <iostream>
#include <string>

using namespace std;

int main() {
	system("chcp 1251>nul");
	string String1 = "";
	string String2 = "";

	cout << "Введiть слово: ";
	while (String1.length() == 0) getline(cin, String1);
	cout << "\nВведiть символ: ";
	while (String2.length() == 0) getline(cin, String2);
	int cfind = String1.find(String2);
	for (int i = String1.length(); i >= 0 ; i--) {
		cfind = (String1.find(String2, i));
		if (cfind != -1)
			break;
	}
	if (cfind != -1)
		cout << "Позицiя останнього входження символа в рядок: " << ++cfind;
	else
		cout << "Символ не знайдено \n";
}

/*
Користувач вводить окремий рядок і символ. Потрібно відобразити позицію
останнього входження символа в рядок.
*/
