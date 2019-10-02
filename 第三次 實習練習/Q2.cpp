/*==========================================

標題：第二題-數數有幾個

==========================================*/

#include<iostream>
using namespace std;

int main() 
{
	int input, count=0; //宣告兩個數

	cin >> input; //輸入一個數

	//不斷執行迴圈直到輸入值為0
	while (input > 0)
	{
		//將輸入值去一位數
		input /= 10;
		//count每去一位數都加1
		count++;
	}

	//輸出個數
	cout << count << endl;

	return 0;
}