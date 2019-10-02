/*==========================================

標題：第三題-奇數和

==========================================*/

#include<iostream>
using namespace std;

int main() 
{	
	int min, Max, total=0; 	//宣告三個變數

	cin >> min >> Max; //輸入兩個值

	if(min % 2 == 0) min++;
	//判斷奇偶數，若為偶數則加1

	//當min小於等於Max則執行迴圈
	while (min <= Max)
	{
		//加總
		total += min;
		//每次加2
		min += 2;
	}
	
	//印出個數
	cout << total << endl;

	return 0;
}