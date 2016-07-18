#include <iostream>
#include <fstream> //ofstream�Bifstream
#include <string>
using namespace std;

int main(void) {
	int i = 0, j = 0;
	int mode = 0;
	int number = 0;
	bool quit = false; //Flag
	const char *filePath = "number.binary";
	unsigned long ulcount = 10; //10�����

	ofstream outputFile;
	ifstream inputFile;

	while (!quit) {
		cout << "[1]C++ write" << endl;
		cout << "[2]C++ read" << endl;
		cout << "[0]Exit" << endl;
		cout << "Input Number : ";
		cin >> mode;

		switch (mode) {
		case 0: //Exit
			quit = true; //Flag jump
			break;
		case 1: //VC++ Write File
			outputFile.open(filePath, ios::trunc | ios::binary);
			if (outputFile.is_open()) { //Check File
				outputFile.seekp(80, ios::beg); //���L���Y80�Ӧr�� //UINT8
				outputFile.write((char*)&ulcount, sizeof(unsigned long)); //�g�J�ƶq //UINT32
				for (i = 0; i<ulcount; i++) {
					//outputFile.write(reinterpret_cast<char*>(&i), sizeof(int));
					outputFile.write((char*)&i, sizeof(int));
				}
				outputFile.close();
			}
			break;
		case 2: //VC++ Read File
			inputFile.open(filePath, ios::in | ios::binary);
			if (inputFile.is_open()) { //Check File
				inputFile.seekg(80, ios::beg); //���L���Y80�Ӧr�� //UINT8
				inputFile.read((char*)&ulcount, sizeof(unsigned long)); //Ū���ƶq //UINT32
				cout << "count:" << ulcount << endl;
				while (1) { //�T�{�O�_�٦����
					inputFile.read((char*)&number, sizeof(int));
					if (inputFile.good()) {
						cout << number << endl;
					} else {
						break;
					}
				}
				inputFile.close();
			}
			break;
		default:
			cout << "Nothing happened." << endl;
			break;
		}
	}

	cout << "Exit" << endl;
	system("pause");
	return 0;
}