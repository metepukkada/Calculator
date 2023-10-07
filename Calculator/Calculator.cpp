#include<iostream>

using namespace std;

int main() {
	cout << "1-) Toplama" << endl;
	cout << "2-) Cikarma" << endl;
	cout << "3-) Carpma"<< endl;
	cout << "4-) Bolme" << endl;
	cout << "Seciminiz:";
	int choice;
	cin >> choice;

	switch (choice) {
		float number1;
		float number2;
		float result;

	case 1:
		cout << "Birinci Sayiyi Giriniz:";
		cin >> number1;
		cout << "Ikinci Sayiyi Giriniz:";
		cin >> number2;
		result = number1 + number2;
		cout << "Sonuc:" << result;
		break;
		
	case 2:
		cout << "Birinci Sayiyi Giriniz:";
		cin >> number1;
		cout << "Ikinci Sayiyi Giriniz:";
		cin >> number2;
		result = number1 - number2;
		cout << "Sonuc:" << result;
		break;

	case 3: 
		cout << "Birinci Sayiyi Giriniz:";
		cin >> number1;
		cout << "Ikinci Sayiyi Giriniz:";
		cin >> number2;
		result = number1 * number2;
		cout << "Sonuc:" << result;
		break;

	case 4:
		cout << "Birinci Sayiyi Giriniz:";
		cin >> number1;
		cout << "Ikinci Sayiyi Giriniz:";
		cin >> number2;
		if (number2 == 0 && choice == 4) {
			cout << "0'a Bolunemez!!";
		}
		else {
			result = number1 / number2;
			cout << "Sonuc:" << result;
			break;
		}
	}




}