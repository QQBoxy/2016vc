#include <iostream>
#include <fstream> //ofstream、ifstream
#include <string>

using namespace std;

int main(void)
{
	int i = 0, j = 0;
	int mode = 0;
	bool quit = false; //Flag
	const char *filePath = "math.xls";

	ofstream outputFile;
	ifstream inputFile;
	string lines = "";

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
			outputFile.open(filePath, ios::trunc);
			if (outputFile.is_open()) { //Check File
				for (j = 1; j<10; j++) {
					for (i = 1; i<10; i++) {
						outputFile << i << "*" << j << "=" << i*j << "\t";
					}
					outputFile << endl;
				}
				outputFile.close();
			}
			break;
		case 2: //VC++ Read File
			inputFile.open(filePath, ios::in); //
			if (inputFile.is_open()) { //Check File
				while (inputFile.good()) { //確認是否還有資料
					getline(inputFile, lines); //取得一行字串
					cout << lines << endl;
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