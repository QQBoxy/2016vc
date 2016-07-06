//Chapter 3 - if statement
#include <iostream>
using namespace std;

int main(void)
{
	int i = 0;
	char str[9] = "_09azAZ?";
	for (i = 0; i<sizeof(str)/sizeof(char); i++) //浪琩﹃いじ琌А璣ゅ
	{
		//DEC	Symbol
		cout << int(str[i]) << "\t" << char(str[i]) << "\t";

		//ㄏノ秈ASCII絏耞じ
		if (str[i] >= 48 && str[i] <= 57) //计ASCII絏辅48 ~ 57
		{
			cout << "琌计" << endl;
		}
		else if (str[i] >= 65 && str[i] <= 90) //糶ASCII絏辅65 ~ 90
		{
			cout << "琌糶" << endl;
		}
		else if (str[i] >= 97 && str[i] <= 122) //糶ASCII絏辅97 ~ 122
		{
			cout << "琌糶" << endl;
		}
		else //ㄤウ獶璣计
		{
			cout << "獶璣计" << endl;
		}
	}
	system("pause");
	return 0;
}