#include <iostream>
#include <vector>
using namespace std;

class XYZ {
public:
	int x;
	int y;
	int z;
};

int main(void) {
	int i = 0;

	XYZ A;
	A.x = 1.0; A.y = 0.0; A.z = 0.0;
	XYZ B;
	B.x = -1.0; B.y = 0.0; B.z = 0.0;

	vector<XYZ> lines;
	lines.push_back(A);
	lines.push_back(B);

	for (i = 0; i<lines.size(); i++) {
		cout << lines[i].x << ", " << lines[i].y << ", " << lines[i].z << endl;
	}

	system("pause");
	return 0;
}

