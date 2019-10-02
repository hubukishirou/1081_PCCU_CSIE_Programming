/*==========================================

標題：第三題-數字加總

==========================================*/

#include<iostream>
using namespace std;

int main()
{
	int num; //宣告一個變數

	cin >> num; //輸入一個數

	cout << num/10/10 + num/10%10 + num%10 << endl; //運用取商和取餘數拆數字

	return 0;
}