//Chapter 3 - if statement
#include <iostream>
using namespace std;

int main(void)
{
	int i = 0;
	char str[9] = "_09azAZ?";
	for (i = 0; i<sizeof(str)/sizeof(char); i++) //�ˬd�r�ꤤ���r���O�_�����^��
	{
		//DEC	Symbol
		cout << int(str[i]) << "\t" << char(str[i]) << "\t";

		//�ϥΤQ�i��ASCII�X�P�_�r��
		if (str[i] >= 48 && str[i] <= 57) //�Ʀr��ASCII�X���b48 ~ 57
		{
			cout << "�O�Ʀr" << endl;
		}
		else if (str[i] >= 65 && str[i] <= 90) //�j�g��ASCII�X���b65 ~ 90
		{
			cout << "�O�j�g" << endl;
		}
		else if (str[i] >= 97 && str[i] <= 122) //�p�g��ASCII�X���b97 ~ 122
		{
			cout << "�O�p�g" << endl;
		}
		else //�䥦�D�^��
		{
			cout << "�D�^��" << endl;
		}
	}
	system("pause");
	return 0;
}