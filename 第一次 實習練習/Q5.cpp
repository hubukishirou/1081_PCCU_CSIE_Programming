/*==========================================

標題：第五題-二進位轉換

==========================================*/

#include<iostream>
using namespace std;

int main()
{
	int num; //宣告一個變數

	cin >> num; //輸入一個數

	cout << num/2/2/2%2 << num/2/2%2 << num/2%2 << num%2 << endl;
	//進行二進位計算並輸出

	return 0;
}