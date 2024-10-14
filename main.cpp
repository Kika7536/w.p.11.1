#include<iostream>
#include<string>

using namespace std;

void main() {

	string flats[]{ "Ahmedov", "Abdullaev", "Mahmakov", "Usufbekov", "Hrapach", "Chernozipunnikova", 
		"Shkrabluk", "Kozloduev", "Fozilov", "Djumaev"};
	int num;

	for (int i = 0; i < 3; i++) {

		cout << "Input: ";
		cin >> num;

		if (num < 0 || num > 9) {
			cout << "Invalid number." << endl;
			break;
		}

		cout << flats[num] << endl;
	}
}