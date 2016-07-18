#include <iostream>
using namespace std;

class VERTEX {
public:
	float x;
	float y;
	float z;
};

class NORMAL {
public:
	float x;
	float y;
	float z;
};

class TRI {
public:
	VERTEX A;
	VERTEX B;
	VERTEX C;
	NORMAL N;

public:
	float AB() { return distance(A, B); };
	float BC() { return distance(B, C); };
	float AC() { return distance(A, C); };

private:
	float distance(VERTEX A, VERTEX B);

};

float TRI::distance(VERTEX A, VERTEX B) {
	return sqrt((B.x - A.x)*(B.x - A.x) + (B.y - A.y)*(B.y - A.y) + (B.z - A.z)*(B.z - A.z));
}

int main(void) {

	VERTEX A;
	A.x =  1.0; A.y = 0.0; A.z = 0.0;

	VERTEX B;
	B.x = -1.0; B.y = 0.0; B.z = 0.0;

	VERTEX C;
	C.x =  0.0; C.y = 1.0; C.z = 0.0;

	NORMAL N;
	N.x =  0.0; N.y = 0.0; N.z = 1.0;

	TRI ABC;
	ABC.A = A; //A點座標
	ABC.B = B; //B點座標
	ABC.C = C; //C點座標
	ABC.N = N; //法向量

	cout << "AB:" << ABC.AB() << endl;
	cout << "BC:" << ABC.BC() << endl;
	cout << "AC:" << ABC.AC() << endl;

	system("pause");
	return 0;
}

