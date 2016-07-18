#include <iostream>
#include <fstream> //ofstream、ifstream
#include <string>
using namespace std;

int main(void) {
	int i = 0, j = 0;
	int mode = 0;
	int number = 0;
	bool quit = false; //Flag
	const char *filePath = "number.binary";
	unsigned long ulcount = 10; //10筆資料

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
				outputFile.seekp(80, ios::beg); //跳過標頭80個字元 //UINT8
				outputFile.write((char*)&ulcount, sizeof(unsigned long)); //寫入數量 //UINT32
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
				inputFile.seekg(80, ios::beg); //跳過標頭80個字元 //UINT8
				inputFile.read((char*)&ulcount, sizeof(unsigned long)); //讀取數量 //UINT32
				cout << "count:" << ulcount << endl;
				while (1) { //確認是否還有資料
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