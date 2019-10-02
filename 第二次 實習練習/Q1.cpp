/*==========================================

標題：第一題-閏平年

==========================================*/

#include<iostream>
using namespace std;

int main()
{
	int year; //宣告一個變數
	
	cin >> year; //輸入一個數

	//方法一、運用條件判斷(使用and與or)並輸出
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
		cout << year << " is LeapYear" << endl;
	else
		cout << year << " is CommonYear" << endl;

	//方法二、運用條件判斷(非使用and與or)並輸出
	// if(year % 4 == 0)
	// {
	// 	if(year % 100 == 0)
	// 	{
	// 		if(year % 400 == 0)
	// 			cout << year << " is LeapYear" << endl;
	// 		else
	// 			cout << year << " is CommonYear" << endl;
	// 	}
	// 	else
	// 		cout << year << " is LeapYear" << endl;
	// }
	// else
	// 	cout << year << " is CommonYear" << endl;


	return 0;
}