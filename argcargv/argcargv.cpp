#include <iostream>
#include <fstream> //ifstream
#include <string> //getline
using namespace std;

//讀取文字檔
void readboxy(char *filename) {
	ifstream inputFile;
	string lines = "";
	inputFile.open(filename, ios::in);
	if (inputFile.is_open())
	{
		while (inputFile.good())
		{
			getline(inputFile, lines);
			cout << lines << endl;
		}
		inputFile.close();
	}
	return;
}

int main(const int argc, char *argv[]) //獲得外部參數
{
	int i = 0;

	//顯示外部參數
	cout << "argc: " << argc << endl;
	for(i = 0; i<argc; i++)
	{
		cout << "*argv[" << i << "]: " << argv[i] << endl;
	}

	cout << "---------- Read File ----------" << endl;

	if(argc>1) //拖拉方式
	{
		readboxy(argv[1]);
	}
	else //輸入檔案路徑
	{
		char *path = new char[1024];
		cout << "Path:";
		cin >> path;
		readboxy(path);
	}

	system("pause");
	return 0;
}