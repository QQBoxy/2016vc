//Chapter 3 - if statement
#include <iostream>
using namespace std;

int main(void)
{
	int i = 0;
	char str[9] = "_09azAZ?";
	for (i = 0; i<sizeof(str)/sizeof(char); i++) //檢查字串中的字元是否均為英文
	{
		//DEC	Symbol
		cout << int(str[i]) << "\t" << char(str[i]) << "\t";

		//使用十進制ASCII碼判斷字元
		if (str[i] >= 48 && str[i] <= 57) //數字的ASCII碼落在48 ~ 57
		{
			cout << "是數字" << endl;
		}
		else if (str[i] >= 65 && str[i] <= 90) //大寫的ASCII碼落在65 ~ 90
		{
			cout << "是大寫" << endl;
		}
		else if (str[i] >= 97 && str[i] <= 122) //小寫的ASCII碼落在97 ~ 122
		{
			cout << "是小寫" << endl;
		}
		else //其它非英數
		{
			cout << "非英數" << endl;
		}
	}
	system("pause");
	return 0;
}