//For statement
#include <iostream>
using namespace std;

int main(void)
{
	int i = 0, j = 0, len = 0;
	const double PI = acos(-1.0), DEGREE = 180.0 / PI;

	for (i = 0; i <= 180; i += 10) {
		len = (int)(sin(i / DEGREE) * 30);
		for (j = 0; j<len; j++) {
			cout << '*';
		}
		cout << " " << len << endl;
	}

	system("pause");
	return 0;
}