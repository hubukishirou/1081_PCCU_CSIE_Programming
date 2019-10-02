/*==========================================

標題：第四題-溫度轉換

==========================================*/

#include<iostream>
#include<iomanip> //為了要使用setprecision，因此需增加此include
using namespace std;

int main()
{
    int f; //宣告一個變數

	cin >> f; //輸入一個數

	cout << setprecision(3) << fixed << (f - 32) * 5 / 9.0 << endl; 
	//進行計算並取三位小數後輸出，setprecision與fixed需搭配使用方能達到取三位小數的效果

	return 0;
}