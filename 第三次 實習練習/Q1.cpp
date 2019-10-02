/*==========================================

標題：第一題-誰最大

==========================================*/

#include<iostream>
using namespace std;

int main()
{
	//宣告三個變數
	int index = 0, input, Max = 0;

	//迴圈總共跑十次
	while (index++ < 10)
	{
		//輸入一個值
		cin >> input;
		//與Max相比，若輸入值比Max大則將Max替換為輸入值
		if (input > Max) Max = input;
	}

	//輸出最大值
	cout << Max << endl;

	return 0;
}