// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
	int x; 
	double a, b, r,area;
	const float p = 3.14;
	cout << "please choose a number(圆形-1，正方形-2，长方形-3）:\n";
		cin >> x;
		switch (x)
		{
		case 1:cout << "输入半径:\n";
			cin >> r;
			area = p * r*r;
			cout << "圆形面积为:\n" << area << endl;
			break;
		case 2:cout << "输入边长:\n";
			cin >> a;
			area = a * a;
			cout << "正方形面积为:\n" << area << endl;
			break;
		case 3:cout << "输入长:\n";
			cin >> a;
			cout << "输入宽:\n";
			cin >> b;
			area = a * b;
			cout << "长方形面积为:\n" << area << endl;
			break;
			return 0;
		}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
