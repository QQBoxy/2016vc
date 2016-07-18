#include <iostream>
#include <regex>
#include <fstream>
using namespace std;

class ERR {
private:
	int kind;
public:
	ERR(int k) : kind(k){}; //建構函式
	char* message() {
		switch (kind) {
		case 403:
			return "Forbidden.";
		case 404:
			return "Not Found.";
		case 503:
			return "Service Unavailable.";
		default:
			return "Unknown Error.";
		}
	}
};

void readfile(string path)
{
	string lines = "";
	ifstream File(path);
	if (File.is_open()) {
		while (File.good()) {
			getline(File, lines);
			cout << lines << endl;
		}
		File.close();
	}
}

int main(int argc, char *argv[]) {
	int c = 1;
	cout << "Input case:";
	cin >> c;
	switch (c) {
		case 1: {
			int n = 0;
			string str = "Hello";
			try {
				cout << "Which character?";
				cin >> n;
				cout << str.at(n) << endl; //取得字串的第n個字元
			} catch (...) {
				cout << "Error!" << endl;
			}
			break;
		}
		case 2: {
			float num = 1;
			try {
				cout << "num=";
				cin >> num;
				if (num == 0) {
					throw "Infinity!";
				}
				cout << "100/num=" << 100 / num << endl;
			} catch (const char* message) {
				cout << message << endl;
			}
			break;
		}
		case 3: {
			try {
				if (argc<2) {
					throw "Parameter error.";
				}
				regex pathRegex("([a-zA-Z]:\\\\(?:[^\\\\]+\\\\)*.*)"); //"C:\\temp\\hello.txt"
				cmatch pathMatch; //cmatch: Char Match
				if (regex_match(argv[1], pathMatch, pathRegex)) { //char, cmatch, regexp
					readfile(pathMatch[1].str());
				} else {
					throw "Path Error.";
				}
			} catch (const char* message) {
				cout << message << endl;
			}
			break;
		}
		case 4: {
			try {
				throw ERR(404);
			} catch (ERR e) {
				cout << e.message() << endl;
			}
			break;
		}
		default:
			break;
	}

	system("pause");
	return 0;
}