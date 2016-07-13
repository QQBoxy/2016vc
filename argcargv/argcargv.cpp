#include <iostream>
#include <fstream> //ifstream
#include <string> //getline
using namespace std;

//Ū����r��
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

int main(const int argc, char *argv[]) //��o�~���Ѽ�
{
	int i = 0;

	//��ܥ~���Ѽ�
	cout << "argc: " << argc << endl;
	for(i = 0; i<argc; i++)
	{
		cout << "*argv[" << i << "]: " << argv[i] << endl;
	}

	cout << "---------- Read File ----------" << endl;

	if(argc>1) //��Ԥ覡
	{
		readboxy(argv[1]);
	}
	else //��J�ɮ׸��|
	{
		char *path = new char[1024];
		cout << "Path:";
		cin >> path;
		readboxy(path);
	}

	system("pause");
	return 0;
}