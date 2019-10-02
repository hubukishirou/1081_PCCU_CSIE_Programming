/*==========================================

標題：第一題-基礎運算

==========================================*/

#include<iostream>
using namespace std;

int main()
{
	int num_1, num_2; //宣告兩個變數

	cin >> num_1 >> num_2; //輸入兩個數

	cout << num_1 << "+" << num_2 << "=" << num_1+num_2 << endl; //加法
	cout << num_1 << "*" << num_2 << "=" << num_1*num_2 << endl; //減法
	cout << num_1 << "-" << num_2 << "=" << num_1-num_2 << endl; //乘法
	cout << num_1 << "/" << num_2 << "=" << num_1/num_2 << "..." << num_1%num_2 << endl; //除法與餘數
	
	return 0;
}