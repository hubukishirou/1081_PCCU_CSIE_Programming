/*==========================================

標題：第四題-如何付錢

==========================================*/

#include<iostream>
using namespace std;

int main()
{
	int money; //宣告一個變數

	cin >> money; //輸入一個數

	//判斷是否為正整數
	if(money >= 0) 
	{
		//每個幣值之張數為取商數，並將餘數繼續往下除

		cout << "2000: " << money / 2000 << endl;
		money %= 2000;
		
		cout << "1000: " << money / 1000 << endl;
		money %= 1000;
		
		cout << "500: " << money / 500 << endl;
		money %= 500;
		
		cout << "200: " << money / 200 << endl;
		money %= 200;
		
		cout << "100: " << money / 100 << endl;
		money %= 100;
		
		cout << "50: " << money / 50 << endl;
		money %= 50;
		
		cout << "10: " << money / 10 << endl;
		money %= 10;
		
		cout << "5: " << money / 5 << endl;
		money %= 5;
		
		cout << "1: " << money / 1 << endl;
	}
	else 
	{
		cout << "error" << endl;
	}


	return 0;
}