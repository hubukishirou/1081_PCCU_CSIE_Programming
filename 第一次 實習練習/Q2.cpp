/*==========================================

標題：第二題-速度與激情

==========================================*/

#include<iostream>
using namespace std;

int main()
{
	int time, velocity; //宣告兩變數，分別為時間與速度
	
	cin >> time >> velocity; //輸入時間與速度

	cout << velocity * time * 2 << endl; //將速度乘上兩倍的時間並輸出
	
	return 0;
}