#include <iostream>
#include <regex> //string lib here
using namespace std;

int main(void)
{
	string phone = "02-8170-5157";
	//string phone = "02-81705157";
	smatch match; //�ŧi�@�ӪŪ��ǰt

	//�ŧi���W��F��
	regex pattern;

	pattern = "([0-9]{2})\-([0-9]{3,4})\-?([0-9]{4})"; //�n�ǰt���ҫ�
	
	if(regex_match(phone, match, pattern)) //�ҫ����
	{
		cout << "Phone Number: " << match[1] << "-" << match[2] << match[3] << endl;
	}
	else
	{
		cout << "Phone Number not match" << endl;
	}

	system("pause");
	return 0;
}