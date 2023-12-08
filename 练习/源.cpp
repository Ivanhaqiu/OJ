#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cctype>
#include <algorithm>
#include <vector>
using namespace std;

//int main()
//{
//	int time = 0;
//	cin >> time;
//	int h = time / 3600;
//	int m = (time % 3600)/60;
//	int s = (time % 3600) % 60;
//	cout << h << ':' << m << ':' << s;
//
//	return 0;	
//}

//#define DAY 7
//
//int main()
//{
//	cout << DAY << endl;
//	cout << sizeof(int) << endl;
//
//	char ch[] = "hello world";
//	cout << ch << endl;
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	
//	cin >> a >> b >> c;
//
//	if (a>b)
//	{
//		if (a>c)
//		{
//			max = a;
//		}
//		else
//		{
//			max = c;
//		}
//	}
//	else
//	{
//		if (b>c)
//		{
//			max = b;
//		}
//		else
//		{
//			max = c;
//		}
//	}
//	cout << max << endl;
//	return 0;
//}

//int main()
//{
//	int n, m, c = 1, count;
//	string str;
//	cin >> n;
//	while (n--)
//	{
//		if (c > 1) cout << endl;
//		cin >> m;
//		count = 0;
//		for (int i = 0; i < m; i++)
//		{
//			cin >> str;
//			if (str=="sheep")
//			{
//				count++;
//			}
//		}
//		cout << "Case " << c++ << ": This list contains " << count << " sheep." << endl;
//	}
//	return 0;
//}

//void test1()
//{
//	cout << "this is test 1" << endl;
//}
//
//void test2(int a)
//{
//	cout << "this is test 2 a = " << a << endl;
//}
//
//int test3()
//{
//	return 1010;
//}
//
//int test4(int a)
//{
//
//	return a;
//}
//
//int main()
//{
//	int a = 10;
//	test1();
//	test2(a);
//	int num1 = test3();
//	cout << "num1 = " << num1 << endl;
//	int num2 = test4(a);
//	cout << "num2 = " << num2 << endl;
//
//	return 0;
//}


//int main()
//{
//	int	W, H, x, y, r;
//	cin >> W >> H >> x >> y >> r;
//
//	if (((x >= r) && (x <= W - r)) && ((y >= r) && (y <= H - r)))
//	{
//		cout << "Yes" << endl;
//	}
//	else
//	{
//		cout << "No" << endl;
//	}
//	return 0;
//}

//int main()
//{
//	char ch;
//	cin >> ch;
//	switch (ch)
//	{
//	case 'a':cout << "aaaaa" << endl;
//		break;
//	default: cout << "default!";
//	case 'b':cout << "bbbbb" << endl;
//		break;
//	case 'c':cout << "ccccc" << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	int number = 0;
//
//	while (number < 20)
//	{
//		number++;
//		sum += number;
//		if (sum >= 100)
//		{
//			break;
//		}
//	}
//	cout << number << endl;	//14
//	cout << sum << endl;	//105
//	return 0;
//}

//int main()
//{
//	int x = 1;
//	int y = 1;
//	while ((x != 0) && (y != 0))
//	{
//		cin >> x >> y;
//		if ((x != 0) && (y != 0))
//		{
//			if (x > y)
//			{
//				cout << y << ' ' << x;
//			}
//			else
//			{
//				cout << x << ' ' << y;
//			}
//		}
//	}
//	return 0;
//}

//How many divisors
//int main()
//{
//	int a, b, c, count = 0;
//	cin >> a >> b >> c;
//	
//	if (a > b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	if ((a!=0)||(b!=0))
//	{
//		for (int i = 1; i <= b; i++)
//		{
//			if (c % i == 0)
//			{
//					count++;
//			}
//		}
//	}
//
//	cout << count << endl;
//	return 0;
//}
//int main()
//{
//	int a = 1, b = 1, c = 1, count = 0;
//	//求c与a-b之间能被整除的数
//
//	while (a||b||c)
//	{
//		cin >> a >> b >> c;
//		if ((a || b || c) == 0)
//		{
//			break;
//		}
//		for (int i = a; i <= b; i++)
//		{
//			if ((c % i == 0))
//			{
//					count++;
//			}
//		}
//		if (a || b || c)
//		{
//			cout << count << endl;
//			count = 0;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char a, b, c;
//	while (true)
//	{
//		cin >> a >> b >> c;
//		if (a=='0' && b=='0' && c=='0')
//		{
//			break;
//		}
//		if (a > b)
//		{
//			int tmp = a;
//			a = b;
//			b = tmp;
//		}
//		if (b > c)
//		{
//			int tmp = b;
//			b = c;
//			c = tmp;
//		}
//		if (a > b)
//		{
//			int tmp = a;
//			a = b;
//			b = tmp;
//		}
//		cout << a << ' ' << b << ' ' << c << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int x1, y1, x2, y2;
//	while (true)
//	{
//		cin >> x1 >> y1 >> x2 >> y2;
//		if ((x1||y1||x2||y2)==0)
//		{
//			break;
//		}
//		double distance = sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
//		cout << fixed << setprecision(2) << distance << endl;
//	}
//	return 0;
//}

//int main()
//{
//	double r = 0;
//	int count = 0;
//	const double PI = 3.1415926535;
//	double area = 0;
//	cin >> count;
//	while (count--)
//	{
//		cin >> r;
//		area = (4.0/3)*PI * r * r * r ;
//		cout << fixed << setprecision(3) << area << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	double val = 0;
//	cin >> count;
//	while (count--)
//	{
//		cin >> val;
//		if (val>0)
//		{
//			cout << fixed << setprecision(2) << val << endl;
//		}
//		else
//		{
//			cout << fixed << setprecision(2) << val*-1 << endl;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int count = 0, score;
//	cin >> count;
//
//	while (count--)
//	{
//		cin >> score;
//		if ((score>=90)&&(score<=100))
//		{
//			cout << 'A' << endl;
//		}
//		else if ((score >= 80) && (score <= 89))
//		{
//			cout << 'B' << endl;
//		}
//		else if ((score >= 70) && (score <= 79))
//		{
//			cout << 'C' << endl;
//		}
//		else if ((score >= 60) && (score <= 69))
//		{
//			cout << 'D' << endl;
//		}
//		else if ((score >= 0) && (score <= 59))
//		{
//			cout << 'E' << endl;
//		}
//		else
//		{
//			cout << "Score is error!" << endl;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int set = 0;
//	int num, count, ans = 1;
//	cin >> set;
//	for (int i = 0; i < set; i++)
//	{
//		cin >> count;
//		for (int j = 0; j < count; j++)
//		{
//			cin >> num;
//			if ((num%2 == 1)|| (num%2 == -1))
//			{
//				ans *= num;
//			}
//		}
//		cout << ans << endl;
//		ans = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, count, eans = 0, oans = 0;
//	cin >> count;
//	for (int i = 0; i < count; i++)
//	{
//		cin >> a >> b;
//		for (int j = a; j <= b; j++)
//		{
//			if (j % 2 == 0)
//			{
//				eans += j * j;
//			}
//			else
//			{
//				oans += j * j * j;
//			}
//		}
//		cout << eans << ' ' << oans << endl;
//		eans = 0;
//		oans = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int count, pos = 0, neg = 0, zero = 0;
//	double a;
//	while (true)
//	{
//		cin >> count;
//		if (count == 0)
//		{
//			break;
//		}
//		for (int i = 0; i < count; i++)
//		{
//			cin >> a;
//			if (a<0)
//			{
//				neg++;
//			}
//			else if (a==0)
//			{
//				zero++;
//			}
//			else
//			{
//				pos++;
//			}
//		}
//		cout << neg << ' ' << zero << ' ' << pos << endl;
//		neg = 0;
//		pos = 0;
//		zero = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int count, n, a;
//	long long ans = 1;
//	cin >> count;
//	for (int i = 0; i < count; i++)
//	{
//		cin >> n;
//		for (int j = 0; j < n; j++)
//		{
//			cin >> a;
//			if (a%2 != 0)
//			{
//				ans *= a;
//			}
//		}
//		cout << ans << endl;
//		ans = 1;
//	}
//	return 0;
//}

//struct Student {
//	string name;
//	int age;
//	int score;
//};
//
//int main()
//{
//	struct Student s1;
//	s1.name = "ivan";
//	s1.age = 19;
//	s1.score = 100;
//
//	cout << s1.name << s1.age << s1.score << endl;
//	return 0;
//}

//struct Student {
//	string name;
//	int age;
//	int score;
//};
//
//int main()
//{
//	struct Student s1 = { "ivan", 19, 100 };
//	Student* p = &s1;
//	cout << p->name << p->age << p->score << endl;
//	return 0;
//}

//int main()
//{
//	int h = 1, w = 1;
//	while (h&&w)
//	{
//		cin >> h >> w;
//		for (int i = 0; i < h; i++)
//		{
//			for (int j = 0; j < w; j++)
//			{
//				cout << '#';
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int h = 1, w = 1;
//	while (h && w)
//	{
//		cin >> h >> w;
//		for (int i = 0; i < h; i++)
//		{
//			if (i==0 || i==h-1)
//			{
//				for (int j = 0; j < w; j++)
//				{
//					cout << '#';
//				}
//				cout << endl;
//			}
//			else
//			{
//				for (int j = 0; j < w; j++)
//				{
//					if (j==0 || j==w-1)
//					{
//						cout << '#';
//					}
//					else
//					{
//						cout << '.';
//					}
//				}
//				cout << endl;
//			}
//
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int h = 1, w = 1;
//	while (h && w)
//	{
//		cin >> h >> w;
//		for (int i = 1; i <= h; i++)
//		{
//			if (i&1)
//			{
//				for (int j = 1; j <= w; j++)
//				{
//					if (j & 1)
//					{
//						cout << '#';
//					}
//					else
//					{
//						cout << '.';
//					}
//				}
//				cout << endl;
//			}
//			else
//			{
//				for (int j = 1; j <= w; j++)
//				{
//					if (j & 1)
//					{
//						cout << '.';
//					}
//					else
//					{
//						cout << '#';
//					}
//				}
//				cout << endl;
//			}
//			
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j < n-i; j++)
//		{
//			cout << ' ';
//		}
//		for (int j = 0; j < 2*i-1; j++)
//		{
//			cout << '*';
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	cin >> n;	
//	int arr[100];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int j = 1; j <= n-1; j++)
//	{
//		for (int k = 0; k < n-j; k++)
//		{
//			if (arr[k] < arr[k+1])
//			{
//				int tmp;
//				tmp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < n-1; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//	cout << arr[n - 1];
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	cin >> n;
//	int arr[100];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int j = n-1; j > 0; j--)
//	{
//		cout << arr[j] << ' ';
//	}
//	cout << arr[0];
//	return 0;
//}


//FIND MISSING CARD
//int main()
//{
//	int H[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
//	int D[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
//	int S[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
//	int C[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
//	int n, val;
//	char suit;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> suit >> val;
//		switch (suit)
//		{
//		case 'H':
//			H[val - 1] = 0;
//			break;
//		case 'D':
//			D[val - 1] = 0;
//			break;
//		case 'S':
//			S[val - 1] = 0;
//			break;
//		case 'C':
//			C[val - 1] = 0;
//			break;
//		default:
//			break;
//		}
//	}
//	for (int k = 0; k < 13; k++)
//	{
//		if (S[k])
//		{
//			cout << "S " << S[k] << endl;
//		}
//	}
//	for (int k = 0; k < 13; k++)
//	{
//		if (H[k])
//		{
//			cout << "H " << H[k] << endl;
//		}
//	}
//	for (int k = 0; k < 13; k++)
//	{
//		if (C[k])
//		{
//			cout << "C " << C[k] << endl;
//		}
//	}
//	for (int k = 0; k < 13; k++)
//	{
//		if (D[k])
//		{
//			cout << "D " << D[k] << endl;
//		}
//	}
//	return 0;
//}

//structured programming
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; ++i <= n; )
//	{
//		int x = i;
//		if (x % 3 == 0)
//		{
//			cout << " " << i;
//			continue;
//		}
//		while (true)
//		{
//			if (x % 10 == 3)
//			{
//				cout << " " << i;
//				break;
//			}
//			else
//			{
//				x /= 10;
//				if (x==0)
//				{
//					break;
//				}
//			}
//		}
//	}
//	cout << endl;
//	return 0;
//}

//official house
//int main()
//{
//	const int building = 4, floor = 3, room = 10;
//	int b, f, r, v, n;
//	int arr[building][floor][room] = { 0 };
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> b >> f >> r >> v;
//		arr[b-1][f-1][r-1] += v;
//	}
//	for (int i = 0; i < building; i++)
//	{
//		for (int j = 0; j < floor; j++)
//		{
//			for (int k = 0; k < room; k++)
//			{
//				cout << ' ' << arr[i][j][k];
//			}
//			cout << endl;
//		}
//		if (i<building-1)
//		{
//			cout << "####################" << endl;
//		}
//	}
//	return 0;
//}
 
//int main()
//{
//	int row, col;
//	int arr[100][100];
//	int vector[100][1];
//	int ans[100][1] = { 0 };
//	cin >> row >> col;
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	for (int i = 0; i < col; i++)
//	{
//		cin >> vector[i][0];
//	}
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			ans[i][0] += vector[j][0] * arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < row; i++)
//	{
//		cout << ans[i][0] << endl;
//	}
//	return 0;
//}

//int main()
//{
//	string s1 = "welcome to HTML";
//	string s2 = "welcomg";
//	cout << s1.compare(s2) << endl;
//	cout << s2.compare(s1) << endl;
//	cout << s1.substr(3) << endl;
//	cout << s1.find("co") << endl;
//	cout << s1.find("co", 6) << endl;
//	cout << s1.find("o", 6) << endl;
//	cout << s1.insert(11, "C++ and ") << endl;
//	s2 = "AA";
//	cout << s2.insert(1, 4, 'B') << endl;
//	string s3("welcomr to HTML");
//	s3.replace(11, 4, "C++");
//	return 0;
//}

//int main()
//{
//	char num[30] = { 0 };
//	int sum = 0;
//	
//	while (cin >> num)
//	{
//		for (int i = 0; num[i]>47 && num[i]<58; i++)
//		{
//			sum += num[i] - 48;
//		}
//		if (sum)
//		{
//			cout << sum << endl;
//		}
//		sum = 0;
//	}
//	return 0;
//}

//int main()
//{
//	string str;
//	getline(cin, str);
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str.at(i)>='a' && str.at(i) <= 'z')
//		{
//			str.at(i) -= 32;
//		}
//		else if (str.at(i) >= 'A' && str.at(i) <= 'Z')
//		{
//			str.at(i) += 32;
//		}
//	}
//	cout << str << endl;
//	return 0;
//}

//int main()
//{
//	string str;
//	char alpha = 'a';
//	getline(cin, str);
//
//	for (char alpha = 'a'; alpha <= 'z'; alpha++)
//	{
//		int num = 0;
//		for (int i = 0; i < str.length(); i++)
//		{
//			if (str.at(i) == alpha || str.at(i) == alpha - 32)
//			{
//				num++;
//			}
//		}
//		cout << alpha << " : " << num << endl;
//	}
//	return 0;
//}

//int main()
//{
//	string s, p;
//
//	cin >> s >> p;
//
//	s = s + s;
//	if (s.find(p) != -1)
//	{
//		cout << "Yes" << endl;
//	}
//	else
//	{
//		cout << "No" << endl;
//	}
//
//	return 0;
//}

//int max(int num1, int num2)
//{
//	int result;
//	if (num1>num2)
//	{
//		result = num1;
//	}
//	else
//	{
//		result = num2;
//	}
//	return result;
//}
//
//int main()
//{
//	cout << max(3, 9) << endl;
//	return 0;
//}

//long long CommFactor(long long m, long long n)
//{
//	long long z = n;
//	while (m % n != 0)
//	{
//		z = m % n;
//		m = n;
//		n = z;
//	}
//	return z;
//}
//
//int main()
//{
//	long long a = 1, b = 1;
//	while (1)
//	{
//		cin >> a >> b;
//		if (a == 0 && b == 0)
//		{
//			break;
//		}
//		int ans = CommFactor(a, b);
//		cout << ans << endl;
//	}
//	return 0;
//}

//long long power(long long a, long long b)
//{
//	long long ans = 1;
//	for (int i = 0; i < b; i++)
//	{
//		ans *= a;
//	}
//	return ans;
//}
//
//int main()
//{
//	long long a, b;
//	while (true)
//	{
//		cin >> a >> b;
//		if (a==-1 && b==-1)
//		{
//			break;
//		}
//		cout << power(a, b) << endl;
//	}
//	return 0;
//}

//bool symm(long n)
//
//{
//	long i, m;
//	i = n;  m = 0;
//
//	while (i)
//	{
//		m = m * 10 + i % 10;
//		i = i / 10;
//	}
//	return (m == n);
//}
//
//int main()
//{
//	for (int i = 11; i <= 999; i++)
//	{
//		if (symm(i)&& symm(i*i)&& symm(i*i*i))
//		{
//			cout << i << endl;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	char op;
//	while (true)
//	{
//		cin >> a >> op >> b;
//		if (op=='?')
//		{
//			break;
//		}
//		switch (op)
//		{
//		case '+':
//			cout << a + b << endl;
//			break;
//		case '-':
//			cout << a - b << endl;
//			break;
//		case '*':
//			cout << a * b << endl;
//			break;
//		case '/':
//			cout << a / b << endl;
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n, num, max = -1000000, min = 1000000;
//	long long sum = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		sum += num;
//		if (num > max)
//		{
//			max = num;
//		}
//		if (num < min)
//		{
//			min = num;
//		}
//	}
//	cout << min << ' ' << max << ' ' << sum << endl;
//	return 0;
//}

//int main()
//{
//	double n, ans = 0;
//	int m;
//	
//	while (true)
//	{
//		cin >> n >> m;
//		if (n==0 && m==0)
//		{
//			break;
//		}
//		for (int i = 0; i < m; i++)
//		{
//			ans += n;
//			n = sqrt(n);
//		}
//		cout << fixed << setprecision(2) << ans << endl;
//		ans = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int x1, y1, x2, y2;
//	cin >> x1 >> y1 >> x2 >> y2;
//	double ans = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
//	cout << fixed << setprecision(4) << ans << endl;
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	double rad = c*acos(-1)/180;
//	double s = (a * b / 2.0) * sin(rad),
//		l = a + b + sqrt(pow(a, 2) + pow(b, 2) - (2 * a * b) * cos(rad)),
//		h = s / (0.5 * a);
//	cout << fixed << setprecision(8) << s << endl;
//	cout << fixed << setprecision(8) << l << endl;
//	cout << fixed << setprecision(8) << h << endl;
//	return 0;
//}

//int main()
//{
//	int n, num[1000], sum = 0;
//	double sd = 0, variance = 0, m;
//	while (true)
//	{
//		cin >> n;;
//		if (n == 0)
//		{
//			break;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cin >> num[i];
//			sum += num[i];
//		}
//		m = sum / n;
//		for (int i = 0; i < n; i++)
//		{
//			variance += pow(num[i] - m, 2) / n;
//		}
//		sd = sqrt(variance);
//		cout << fixed << setprecision(8) << sd << endl;
//		variance = 0;
//		sd = 0;
//		sum = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int n, arrx[1000], arry[1000];
//	double p1 = 0, p2 = 0, p3 = 0, p=0;
//	cin >> n;
//	for (int i = 0; i < n;i++)
//	{
//		cin >> arrx[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arry[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (arrx[i]>arry[i])
//		{
//			p1 += arrx[i] - arry[i];
//			p2 += pow(arrx[i] - arry[i], 2);
//			p3 += pow(arrx[i] - arry[i], 3);
//			if (arrx[i] - arry[i] > p)
//			{
//				p = arrx[i] - arry[i];
//			}
//		}
//		else
//		{
//			p1 += arry[i] - arrx[i];
//			p2 += pow(arry[i] - arrx[i], 2);
//			p3 += pow(arry[i] - arrx[i], 3);
//			if (arry[i] - arrx[i] > p)
//			{
//				p = arry[i] - arrx[i];
//			}
//		}
//	}
//	p2 = sqrt(p2);
//	p3 = pow(p3, 1.0 / 3);
//	cout << fixed << setprecision(6) << p1 << endl;
//	cout << fixed << setprecision(6) << p2 << endl;
//	cout << fixed << setprecision(6) << p3 << endl;
//	cout << fixed << setprecision(6) << p << endl;
//
//	return 0;
//}

//void Print(const char* p1, const char* p2)
//{
//    int sz = p2 - p1;
//    for (int i = 0; i < sz; i++)
//    {
//        cout << *p1;
//        p1++;
//    }
//}
//int main()
//{
//    const char* s = "Tianjin University123";
//    Print(s, s + 7);
//    cout << endl;
//    Print(s, s + 18);
//    cout << endl;
//
//    return 0;
//}

//char* search(char* str, char ch)
//{
//	for (int i = 0; i < 100; i++,str++)
//	{
//		if (*str==ch)
//		{
//			return str;
//		}
//	}
//	return NULL;
//}
//
//int main()
//{
//	char str[100];
//	char ch;
//	cin >> str >> ch;
//	if (search(str, ch))
//	{
//		cout << "yes" << endl;
//	}
//	else
//	{
//		cout << "no" << endl;
//	}
//	return 0;
//}

//int main()
//{
//	char str[100] = { 0 };
//	cin >> str; 
//	char* ptr = str;
//
//	for (int i = 0; i < sizeof(str); i++)
//	{
//		
//		switch (*ptr)
//		{
//		case 'A':
//			cout << 'W';
//			break;
//		case 'B':
//			cout << 'X';
//			break;
//		case 'C':
//			cout << 'Y';
//			break;
//		case 'D':
//			cout << 'Z';
//			break;
//		case 0:
//			break;
//		default:
//			char ch = *ptr - 4;
//			cout << ch;
//			break;
//		}
//		ptr++;
//	}
//
//	return 0;
//}

//void ADD(int(*pa)[10], int(*pb)[10], const int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			pa[i][j] += pb[i][j];
//		}
//	}
//}
//
//int main()
//{
//	int a[10][10],b[10][10];
//	int n;
//	
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> b[i][j];
//		}
//	}
//	int(*pa)[10] = a;
//	int(*pb)[10] = b;
//	ADD(pa, pb, n);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << a[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int a[3][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	};
//	cout << *(*a + 0) << *a[0] << a[0][0] << endl;
//	cout << *(*(a + 1) + 0) << *(a[1]+0) << a[1][0] << endl;
//	cout << *(*(a + 2) + 1) << *(a[2]+1) << a[2][1] << endl;
//	return 0;
//}

//int main()
//{
//	int(*p)[4];
//	int a[3][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	}; 
//	p = a;
//	p++;
//	for (int  i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << p[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int prime(int n)
//{
//    n = n * n + n + 41;
//    if (n==1)
//    {
//        return 0;
//    }
//    for (int i = 2; i <= sqrt(n); i++)
//    {
//        if (n%i==0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main()
//{
//    int x, y;
//    
//    while (1)
//    {
//        cin >> x >> y;
//        int isPrime = 1;
//        if (x == 0 && y == 0)
//        {
//            break;
//        }
//        
//        for (int i = x; i <= y ; i++)
//        {
//            if (prime(i)==0)
//            {
//                isPrime = 0;
//                break;
//            }
//        }
//        if (isPrime)
//        {
//             cout << "OK" << endl;
//        }
//        else
//        {
//           cout << "Sorry" << endl;
//        }
//        
//    }
//    return 0;
//}

//int main()
//{
//	int n, sum = 1;
//	while (true)
//	{
//		cin >> n;
//		if (n==0)
//		{
//			break;
//		}
//		for (int i = 0; i < n-1; i++)
//		{
//			sum = (sum + 1) * 2;
//		}
//		cout << sum << endl;
//		sum = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int n, num, sum = 0, min = 100, max = 0;
//	double avg;
//	while (true)
//	{
//		cin >> n;
//		if (n==0)
//		{
//			break;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cin >> num;
//			sum += num;
//			if (num>max)
//			{
//				max = num;
//			}
//			if (num<min)
//			{
//				min = num;
//			}
//		}
//		sum = (sum - max) - min;
//		avg = sum * 1.0 / (n - 2);
//		cout << fixed << setprecision(2) << avg << endl;
//
//		sum = 0;
//		max = 0;
//		min = 100;
//	}
//	return 0;
//}

//int main()
//{
//    int n, x;
//    int arr[100];
//    while (true)
//    {
//        int min = 100;
//        cin >> n;
//        if (n == 0)
//        {
//            break;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            cin >> arr[i];
//            if (arr[i] < min)
//            {
//                min = arr[i];
//                x = i;
//            }
//        }
//
//        int tmp = arr[0];
//        arr[0] = arr[x];
//        arr[x] = tmp;
//
//        for (int i = 0; i < n; i++)
//        {
//            cout << arr[i] << ' ';
//        }
//        cout << endl;
//    }
//    return 0;
//}


//recursion 递归
//int fib(int a)
//{
//	if (a==0)
//	{
//		return 0;
//	}
//	else if (a==1)
//	{
//		return 1;
//	}
//	if (a>=2)
//	{
//		return fib(a - 1) + fib(a - 2);
//	}
//}
//
//int main()
//{
//	cout << fib(3) << endl;
//	return 0;
//}

//int binarySearch(const int list[], int key, int low, int high)
//{
//	if (low>high)
//	{
//		return -low - 1;
//	}
//	int mid = (low + high) / 2;
//	if (key < list[mid])
//	{
//		return binarySearch(list, key, low, mid - 1);
//	}
//	else if (key == list[mid])
//	{
//		return mid;
//	}
//	else
//	{
//		return binarySearch(list, key, mid + 1, high);
//	}
//}
//
//int binarySearch(const int list[], int key, int size)
//{
//	int low = 0;
//	int high = size - 1;
//	return binarySearch(list, key, low, high);
//}
//
//int main()
//{
//	int list[] = { 2,4,7,10,11,45,50,59,60,66,69,70,79 };
//	int i = binarySearch(list, 2, 13);
//	int j = binarySearch(list, 11, 13);
//	int k = binarySearch(list, 12, 13);
//	cout << i << endl;
//	cout << j << endl;
//	cout << k << endl;
//	return 0;
//}

//int binarySearch(int arr[], int x, int high, int low)
//{
//    int mid = (low + high) / 2;
//    if (high > low)
//    {
//        return - 1;
//    }
//    if (x < arr[mid])
//    {
//        return binarySearch(arr, x, mid + 1, low);
//    }
//    else if (x == arr[mid])
//    {
//        return mid;
//    }
//    else
//    {
//        return binarySearch(arr, x, high, mid - 1);
//    }
//}
//
//int binarySearch(int arr[], int size, int x)
//{
//    int high = 0;
//    int low = size - 1;
//    return binarySearch(arr, x, high, low);
//}
//
//int main()
//{
//    int n, x;
//    int arr[100000];
//
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//    cin >> x;
//
//    if (binarySearch(arr, n, x)==-1)
//    {
//        cout << "NO" << endl;
//    }
//    else
//    {
//        cout << "YES" << endl;
//    }
//    return 0;
//}

//long long power(long long a, long long b)
//{
//	if (b == 0)
//	{
//		return 1;
//	}
//	if (b == 1)
//	{
//		return a;
//	}
//	if (b>= 2)
//	{
//		return a * power(a, b - 1);
//	}
//}
//
//int main()
//{
//	long long a, b;
//	while (true)
//	{
//		cin >> a >> b;
//		if (a == -1 && b == -1)
//		{
//			break;
//		}
//		cout << power(a, b) << endl;
//	}
//	return 0;
//}

//递归实现最大公约数
//long long CommFactor(long long m, long long n)
//{
//	if (m % n == 0)
//	{
//		return n;
//	}
//	else
//	{
//		return CommFactor(n, m % n);
//	}
//	
//}
//
//int main()
//{
//	long long a = 1, b = 1;
//	while (1)
//	{
//		cin >> a >> b;
//		if (a == 0 && b == 0)
//		{
//			break;
//		}
//		int ans = CommFactor(a, b);
//		cout << ans << endl;
//	}
//	return 0;
//}

//void sort(int a[], int b[], int n, int m)
//{
//	for (int i = 0; i < n + m; i++)
//	{
//		for (int j = 0; j < n + m - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//	b[0] = a[0];
//	for (int i = 0, j = 0; i < n + m; i++)
//	{
//		if (b[j] != a[i])
//		{
//			j++;
//			b[j] = a[i];
//		}
//	}
//}
//
//int main()
//{
//	int a[100], b[100] = { 0 };
//	int n, m;
//
//	while (true)
//	{
//		cin >> n >> m;
//		if (m == 0 && n == 0)
//		{
//			break;
//		}
//		for (int i = 0; i < n + m; i++)
//		{
//			cin >> a[i];
//		}
//		sort(a, b, n, m);
//		int sz = sizeof(b) / sizeof(int);
//		for (int i = 0; i < sz; i++)
//		{
//			if (b[i] == 0)
//			{
//				break;
//			}
//			cout << b[i] << ' ';
//			b[i] = 0;
//		}
//		cout << endl;
//	}
//}

//int main()
//{
//	int n, a, b, sum = 0,pn = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b;
//		for (int j = a; j <= b; j++)
//		{
//			for (int k = 1; k < j; k++)
//			{
//				if (j%k==0)
//				{
//					sum += k;
//				}
//			}
//			if (sum==j)
//			{
//				pn++;
//			}
//			sum = 0;
//		}
//		cout << pn << endl;
//		
//		pn = 0;
//	}
//	return 0;
//}

//int prime(int n)
//{
//	for (int i = 2;i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int pnum(int n)
//{
//	int ans = 0, m = n;
//	while (m > 0)
//	{
//		ans = ans * 10 + m % 10;
//		m /= 10;
//	}
//	return ans == n;
//}
//
//int main()
//{
//	int a, b;
//	while (true)
//	{
//		cin >> a >> b;
//		if (a==0 && b==0)
//		{
//			break;
//		}
//		for (int i = a; i <= b; i++)
//		{
//			if (prime(i)&&pnum(i))
//			{
//				cout << i<< endl;
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int t, n, m, ans, mfac, fac = 1;
//	char ch;
//	cin >> t;
//	while (t--)
//	{
//		cin >> ch >> n >> m;
//		int tmp = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			
//			fac *= i;
//			if (i == n-m)
//			{
//				tmp = fac;
//			}
//			if (i == m)
//			{
//				mfac = fac;
//			}
//		}
//		if (ch=='A')
//		{
//			ans = fac / tmp;
//		}
//		else
//		{
//			ans = fac / (tmp * mfac);
//		}
//
//		cout << ans << endl;
//		fac = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	string x;
//	getline(cin, x);
//	for (int i = 0; i < x.size(); i++)
//	{
//		if (x[i] == 'a' || x[i] == 'd' || x[i] == 'g' || x[i] == 'j' || x[i] == 'm' || x[i] == 'p' || x[i] == 't' || x[i] == 'w' || x[i] == ' ') 
//		{
//			num++;
//		}
//		if (x[i] == 'b' || x[i] == 'e' || x[i] == 'h' || x[i] == 'k' || x[i] == 'n' || x[i] == 'q' || x[i] == 'u' || x[i] == 'x')
//		{
//			num += 2;
//		}
//		if (x[i] == 'c' || x[i] == 'f' || x[i] == 'i' || x[i] == 'l' || x[i] == 'o' || x[i] == 'r' || x[i] == 'v' || x[i] == 'y')
//		{
//			num += 3;
//		}
//		if (x[i] == 's' || x[i] == 'z')
//		{
//			num += 4;
//		}
//	}
//	cout << num;
//	return 0;
//}

//int main()
//{
//	int n, max = 0;
//	string x;
//	cin >> n;
//	while (n--)
//	{
//		cin >> x;
//		for (int i = 1; i < x.size(); i++)
//		{
//			if (x[i]>x[max])
//			{
//				max = i;
//			}
//		}
//		max = x[max];
//		for (int i = 0; i < x.size(); i++)
//		{
//			cout << x[i];
//			if (x[i]==max)
//			{
//				cout << "(max)";
//			}
//		}
//		cout << endl;
//		max = 0;
//	}
//	return 0;
//

//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
//union teacher
//{
//	string name;
//	int age;
//	int score;
//};
//
//int main()
//{
//	student tom;
//	cin >> tom.name >> tom.age >> tom.score;
//	cout << tom.name << tom.age << tom.score;
//	return 0;
//}

//union weightType
//{
//	long wtInOunces;
//	int wtInPounds;
//	float wtInTons;
//};
//
//int main()
//{
//	weightType weight;
//	weight.wtInTons = 4.83;
//	cout << weight.wtInTons << endl;
//	cout << weight.wtInPounds << endl;
//
//	weight.wtInPounds = 35;
//	cout << weight.wtInTons << endl;
//	cout << weight.wtInPounds << endl;
//	return 0;
//}

//struct user
//{
//	string username;
//	string password;
//};
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	user users[100];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> users[i].username >> users[i].password;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << users[i].username << ' ' << users[i].password << endl;
//	}
//	return 0;
//}

//struct student
//{
//	long long id;
//	string name;
//	int score;
//};
//
//int main()
//{
//	int n, search;
//	long long id;
//	cin >> n;
//	student students[100];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> students[i].id >> students[i].name >> students[i].score;
//	}
//	cin >> search;
//	for (int i = 0; i < search; i++)
//	{
//		cin >> id;
//		for (int j = 0; j < n; j++)
//		{
//			if (students[j].id == id)
//			{
//				cout << students[j].name << ' ' << students[j].score << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n, num1, num2, den1, den2, num3, den3 = 1;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num1 >> den1 >> num2 >> den2;
//		num3 = num1 * den2 + num2 * den1;
//		den3 = den1 * den2;
//		int f = num3 < den3 ? den3 : num3;
//		int gcf = 1;
//		for (int i = f; i >= 1; i--)
//		{
//			if (num3 % i == 0 && den3 % i == 0)
//			{
//				gcf = i;
//				break;
//			}
//		}
//		num3 /= gcf;
//		den3 /= gcf;
//		cout << num3 << ' ' << den3 << endl;
//	}
//	return 0;
//}

//struct cnum
//{
//	int rp;
//	int ip;
//};
//
//int main()
//{
//	int n, k, tmp;
//	cnum cnum1;
//	cin >> n;
//	while (n--)
//	{
//		cin >> k;
//		int a = 0, b = 0;
//		for (int i = 0; i < k; i++)
//		{
//			cin >> cnum1.rp;
//			cin >> cnum1.ip;
//			a += cnum1.rp;
//			b += cnum1.ip;
//		}
//		cout << a << ' ' << b << endl;
//
//	}
//	return 0;
//}

//union fyl {
//	int x;
//	char c[4];
//}num;
//
//int main()
//{
//	int n, a, b, c, d;
//	cin >> n;
//	while (n--)
//	{
//		cin >> num.c[3] >> num.c[2] >> num.c[1] >> num.c[0];
//		cout << num.x << endl;
//	}
//	return 0;
//}

//struct stu
//{
//	int chi, math;
//}cla[100];
//
//bool cmp(stu a, stu b)
//{
//	if (a.chi != b.chi)
//	{
//		return a.chi < b.chi;
//	}
//	return a.math < b.math;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> cla[i].chi >> cla[i].math;
//	}
//
//	sort(cla, cla + n, cmp);
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << cla[i].chi << ' ' << cla[i].math << endl;
//	}
//	return 0;
//}

//struct fcn
//{
//	int num, den;
//}fcn1, fcn2, fcn3;
//
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		cin >> fcn1.num >> fcn1.den >> fcn2.num >> fcn2.den;
//		fcn3.num = fcn1.num * fcn2.den + fcn2.num * fcn1.den;
//		fcn3.den = fcn1.den * fcn2.den;
//		int f = fcn3.num < fcn3.den ? fcn3.num : fcn3.den;
//		int gcf = 1;
//		for (int i = f; i >= 1; i--)
//		{
//			if (fcn3.num % i == 0 && fcn3.den % i == 0)
//			{
//				gcf = i;
//				break;
//			}
//		}
//		fcn3.num /= gcf;
//		fcn3.den /= gcf;
//		cout << fcn3.num << ' ' << fcn3.den << endl;
//	}
//	return 0;
//}


//class point
//{
//public:
//	void set_x()
//	{
//		cin >> p_x;
//	}
//	int get_x() 
//	{
//		return p_x;
//	}
//	void set_y()
//	{
//		cin >> p_y;
//	}
//	int get_y()
//	{
//		return p_y;
//	}
//private:
//	int p_x;
//	int p_y;
//};
//
//class circle
//{
//public:
//	void setcenter()
//	{
//		c_center.set_x();
//		c_center.set_y();
//	}
//	point getcenter()
//	{
//		return c_center;
//	}
//	void setr()
//	{
//		cin >> c_r;
//	}
//	int getr()
//	{
//		return c_r;
//	}
//private:
//	point c_center;
//	int c_r;
//};
//
//void print(point p)
//{
//	cout << p.get_x() << ' ' << p.get_y() << endl;
//}
//
//double distance(point p, int x, int y)
//{
//	double ret = sqrt(pow((p.get_x() - x), 2) + pow((p.get_y() - y), 2)) / 1.0;
//	return ret;
//}
//
//void opposite(point p)
//{
//	cout << p.get_x() / -1 << ' ' << p.get_y()/ -1 << endl;
//}
//
//bool incircle(circle c, int x, int y)
//{
//	if (distance(c.getcenter(), x, y) < c.getr())
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	int n;
//	circle c;
//	point p;
//	p.set_x();
//	p.set_y();
//	cin >> n;
//	
//	while (n--)
//	{
//		int ch;
//		double d;
//		cin >> ch;
//		switch (ch)
//		{
//		case 1:
//			print(p);
//			break;
//		case 2:
//			point p2;
//			p2.set_x();
//			p2.set_y();
//			d = distance(p, p2.get_x(), p2.get_y());
//			cout << d << endl;
//			break;
//		case 3:
//			opposite(p);
//			break;
//		case 4:
//			c.setcenter();
//			c.setr();
//			if (incircle(c, p.get_x(),p.get_y()))
//			{
//				cout << "yes";
//			}
//			else
//			{
//				cout << "no";
//			}
//			break;
//		}
//	}
//
//	return 0;
//}

//class circle
//{
//public:
//	circle(int x, int y, int r);
//	void print();
//	double area();
//	double circum();
//	bool contact(int p, int q, int r1);
//private:
//	int x;
//	int y;
//	int r;
//};
//
//circle::circle(int x, int y, int r)
//{
//	this->x = x;
//	this->y = y;
//	this->r = r;
//}
//
//void circle::print()
//{
//	cout << x << ' ' << y << endl;;
//}
//
//double circle::area()
//{
//	return acos(-1) * r * r;
//}
//
//double circle::circum()
//{
//	return acos(-1) * 2 * r;
//}
//
//bool circle::contact(int p, int q, int r1)
//{
//	int d = (x - p) * (x - p) + (y - q) * (y - q);
//	return (d == r * r);
//}
//
//int main()
//{
//	int x, y, r, n, ch;
//	cin >> x >> y >> r;
//	circle c(x, y, r);
//	cin >> n;
//	while (n--)
//	{
//		cin >> ch;
//		switch (ch)
//		{
//		case 1:
//			c.print();
//			break;
//		case 2:
//			cout << c.area() << endl;
//			break;
//		case 3:
//			cout << c.circum() << endl;
//			break;
//		case 4:
//			cin >> x >> y >> r;
//			if (c.contact(x, y, r))
//			{
//				cout << "Yes" << endl;
//			}
//			else
//			{
//				cout << "No" << endl;
//			}
//			break;
//		}
//	}
//	return 0;
//}

//class MyString
//{
//public:
//	MyString();
//	MyString(const char* str);
//	int length();
//	int find(const char* find_str);
//private:
//	const char* string;
//};
//
//MyString::MyString(const char* str)
//{
//	string = str;
//}
//
//int MyString::length()
//{
//	int len = 0;
//	for (int num = 0; string[num] != '\0'; num++)
//	{
//		len++;
//	}
//	return len;
//}
//
//int MyString::find(const char* find_str)
//{
//	int pos = 0;
//	int len = length();
//	int j;
//	int strlen = MyString(find_str).length();
//	for (int i = 0; i < len; i++)
//	{
//		pos = i;
//		for (j = 0; j < strlen; j++)
//		{
//			if (string[i]!=find_str[j])
//			{
//				j = 0;
//				break;
//			}
//			else
//			{
//				i++;
//			}
//		}
//		if (j==strlen)
//		{
//			return pos;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int n, ch;
//	char arr[100];
//	char find[100];
//	cin.getline(arr, 100);
//	MyString str(arr);
//	cin >> n;
//	while (n--)
//	{
//		cin >> ch;
//		switch (ch)
//		{
//		case 1:
//			cout << str.length() << endl;
//			break;
//		case 2:
//			getchar();
//			cin.getline(find, 100);
//			cout << str.find(find) << endl;
//		}
//	}
//	return 0;
//}

//class  Time	// Time.h
//{
//public: 	//  8 function members
//    void Set(int hours, int minutes, int seconds) {
//        hrs = hours;
//        mins = minutes;
//        secs = seconds;
//    }
//    void Increment() {
//        secs++;
//        hrs += (mins + secs / 60) / 60;
//        mins = (mins + secs / 60) % 60;
//        secs %= 60;
//    }
//    void Write()  const {
//        cout << setw(2) << setfill('0') << hrs << ':' 
//            << setw(2) << setfill('0') << mins<< ':'
//            << setw(2) << setfill('0') << secs << endl;
//    }
//    bool Equal(Time otherTime)  const {
//        return (hrs == otherTime.hrs && mins == otherTime.mins && secs == otherTime.secs);
//    }
//    bool LessThan(Time otherTime)  const {
//        int ctime = hrs * 3600 + mins * 60 + secs;
//        int otime = otherTime.hrs * 3600 + otherTime.mins * 60 + otherTime.secs;
//        return (ctime < otime);
//    }
//
//    // 带参数的狗赞函数
//    Time(int initHrs, int initMins, int initSecs) {
//        hrs = initHrs;
//        mins = initMins;
//        secs = initSecs;
//    }
//    // 默认构造函数
//    Time() {
//
//    }
//    // 析构函数
//    ~Time() {
//
//    }
//
//private:	//  3 data members
//    //你需要在此定义出需要的成员变量
//    int hrs;
//    int mins;
//    int secs;
//};
//
//int main()
//{
//    Time time(3, 59, 59);
//    Time time2(4, 0, 0);
//    time.Write();
//    time.Increment();
//    time.Write();
//    cout << time.LessThan(time2) << endl;
//    cout << time.Equal(time2);
//}


//coding game Power of Thor - Episode 1
//int main()
//{
//    int light_x; // the X position of the light of power
//    int light_y; // the Y position of the light of power
//    int initial_tx; // Thor's starting X position
//    int initial_ty; // Thor's starting Y position
//    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();
//
//    // game loop
//    while (1) {
//        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
//        string direction;
//        cin >> remaining_turns; cin.ignore();
//        if (initial_tx < light_x && initial_ty < light_y)
//        {
//            direction = "SE";
//            initial_tx++;
//            initial_ty++;
//        }
//        else if (initial_tx < light_x && initial_ty > light_y)
//        {
//            direction = "NE";
//            initial_tx++;
//            initial_ty++;
//        }
//        else if (initial_tx > light_x && initial_ty < light_y)
//        {
//            direction = "SW";
//            initial_tx--;
//            initial_ty++;
//        }
//        else if (initial_tx > light_x && initial_ty > light_y)
//        {
//            direction = "NW";
//            initial_tx--;
//            initial_ty++;
//        }
//        else if (initial_tx < light_x)
//        {
//            direction = "E";
//            initial_tx++;
//        }
//        else if (initial_tx > light_x)
//        {
//            direction = "W";
//            initial_tx--;
//        }
//        else if (initial_ty < light_y)
//        {
//            direction = "S";
//            initial_ty--;
//        }
//        else if (initial_ty > light_y)
//        {
//            direction = "N";
//            initial_ty++;
//        }
//        // Write an action using cout. DON'T FORGET THE "<< endl"
//        // To debug: cerr << "Debug messages..." << endl;
//
//
//        // A single line providing the move to be made: N NE E SE S SW W or NW
//        cout << direction << endl;
//    }
//}


//class GeometricObject
//{
//
//};
//
//class Circle :public GeometricObject
//	//public: all public members in geometricobject are inherited as public members in circle
//	//protected: a protected member of a class can be accesse from a derived class
//{
//
//};

//class B
//{
//public:
//	int i;
//protected:
//	int j;
//private:
//	int k;
//};
//
//class A :public B
//{
//public:
//	void display()const
//	{
//		cout << j << endl;//fine
//		cout << i << endl;//fine
//		cout << k << endl;//wrong
//	}
//};
//
////						 public		|protected	|private
////	class A:public B	|public		|protected	|private
////	class A:protected B |protected	|protected	|private
////	class A:private B	|private	| private	| private
//
//int main()
//{
//	A a;
//	cout << a.i << endl;//fine
//	cout << a.j << endl;//wrong
//	cout << a.k << endl;//wrong
//	return 0;
//}

//int main()
//{
//	int n, k;
//	cin >> n;
//	while (n--)
//	{
//		int sum = 0;
//		cin >> k;
//		for (int i = 1; i <= k; i++)
//		{
//			if (k % i == 0)
//			{
//				sum += i;
//			}
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}

//int leap_year(int y)
//{
//	if (y % 100 != 0 && y % 4 == 0)
//		return 1;
//	if (y % 100 == 0 && y % 400 == 0)
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	int n, y, m, d;
//	int month[13] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	cin >> n;
//	while (n--)
//	{
//		int sum = 0;
//		cin >> y >> m >> d;
//		for (int i = 0; i < m-1; i++)
//		{
//			sum += month[i];
//		}
//		sum += d;
//		if (leap_year(y))
//		{
//			if (m>2)
//			{
//				sum++;
//			}
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}


////三角形个数--简单暴力解 193ms
//int is_tri(int arr[], int i, int j, int k)
//{
//
//	if (arr[i] + arr[j] > arr[k])
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[1001] = { 0 };
//	int n;
//	unsigned int sum = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr, arr + n);
//	for (int i = 0; i < n - 2; i++)
//	{
//		for (int j = i + 1; j < n - 1; j++)
//		{
//			for (int k = j + 1; k < n; k++)
//			{
//				if (is_tri(arr, i, j, k))
//				{
//					sum++;
//				}
//			}
//		}
//	}
//	cout << sum;
//	return 0;
//}


//顺子/刻子+对子
//麻将网解
//int n, m, a[5000], s[5000] = { 0 }, s1[5000], ans[5000], ss = 0;
//
//bool hehe()
//{
//    bool v;
//    for (int i = 1; i <= n; i++)
//    {
//        if (s[i] >= 2)
//        {
//            v = true;
//            s[i] -= 2;
//            for (int j = 1; j <= n + 2; j++)
//            {
//                s1[j] = s[j];
//            }
//            for (int j = 1; j <= n + 2; j++)
//            {
//                if (s1[j] < 0) 
//                { 
//                    v = false;
//                    break; 
//                }
//                s1[j] %= 3;
//                s1[j + 1] -= s1[j];
//                s1[j + 2] -= s1[j];
//            }
//            s[i] += 2;
//            if (v == true)
//            {
//                return 1;
//            }
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    cin >> n >> m;
//    for (int i = 1; i <= m * 3 + 1; i++)
//    {
//        cin >> a[i];
//        s[a[i]]++;
//    }
//    bool v = false;
//    for (int i = 1; i <= n; i++)
//    {
//        s[i]++;
//        if (hehe())
//        {
//            v = true;
//            ans[++ss] = i;
//        }
//        s[i]--;
//    }
//    for (int i = 1; i <= ss; i++)
//    {
//        cout << ans[i];
//        if (i != ss)
//        {
//            cout << ' ';
//        }
//    }
//    if (!v)
//    {
//        cout << "NO" << endl;
//    }
//        return 0;
//}


//麻将自解-网解思路
//int n, m;
//int original[3002], rec[405] = { 0 };
//
//bool ting()
//{
//	bool solution;
//	int copy[405];
//	//刻子
//	//顺子	
//	//一对
//	for (int i = 1; i <= n; i++)
//	{
//		//设i为对子
//		//判断对子是否成立
//		if (rec[i] >= 2)
//		{
//			solution = true;
//			rec[i] -= 2;
//			for (int j = 1; j <= n + 1; j++)
//			{
//				copy[j] = rec[j];
//			}
//			for (int j = 1; j <= n + 1; j++)//n+1判断最后还剩一张牌时会把n外的牌-1
//			{
//				if (copy[j] < 0)
//				{
//					//此解不成立
//					solution = false;
//					break;
//				}
//				copy[j] %= 3;//提出刻子
//				copy[j + 1] -= copy[j];
//				copy[j + 2] -= copy[j];//提出顺子
//			}
//			//复原牌数
//			rec[i] += 2;
//			if (solution)
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//
//int main()
//{
//	cin >> n >> m;
//	//输入
//
//	for (int i = 0; i < m * 3 + 1; i++)
//	{
//		cin >> original[i];
//		rec[original[i]]++;
//	}
//	//判断
//	//假设把每一张牌加入手牌，尝试和牌
//	bool solved = false;
//	for (int i = 1; i <= n; i++)
//	{
//		rec[i]++;
//		if (ting())
//		{
//			solved = true;
//			cout << i << ' ';
//		}
//		rec[i]--;
//	}
//	if (!solved)
//	{
//		cout << "NO" << endl;
//	}
//	return 0;
//}


//class base
//{
//public:
//	base()
//	{
//		cout << "calling of base()" << endl;
//	}
//	base(int a)
//	{
//		cout << "calling of base(int a)" << endl;
//	}
//	~base()
//	{
//		cout << "calling of ~base()" << endl;
//	}
//};
//
//class son:public base
//{
//public:
//	son()
//	{
//		cout << "calling of son()" << endl;
//	}
//	~son()
//	{
//		cout << "calling of ~son()" << endl;
//	}
//	
//};
//
//void test()
//{
//	son s;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//void displayGeometricObject(const GeometricObject& shape)
//{
//	cout << shape.getColor() << endl;
//}
//
//int main()
//{
//	displayGeometricObject(GeometricObject("black", true));
//	displayGeometricObject(Circle(5));
//	displayGeometricObject(Rectangle(2, 3));
//	return 0;
//}
//
//virtual string toString()const;
//dynamic binding
//to enable dynamic binding for a function,you need:
//1.the function must be defined virtual in the base class.
//2.the variable that references the object must be passed be 
//	reference or passed as a pointer in the virtual function.
//
// virtual double getArea() const = 0;


//吃饼干
//int main()
//{
//	int n, m,count = 0;
//	char arr[12][12] = { 0 };
//	int copy[12][12] = { 0 };
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> arr[i][j];
//			if (arr[i][j] == '#')
//			{
//				copy[i][j] = -10;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (arr[i][j]== '#')
//			{
//				copy[i - 1][j - 1]++;
//				copy[i - 1][j ]++;
//				copy[i - 1][j + 1]++;
//				copy[i][j - 1]++;
//				copy[i][j + 1]++;
//				copy[i + 1][j - 1]++;
//				copy[i + 1][j]++;
//				copy[i + 1][j + 1]++;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (copy[i][j] < 0)
//			{
//				cout << '#';
//			}
//			else
//			{
//				cout << copy[i][j];
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}


//页码统计
//int main()
//{
//	int n, num;
//	cin >> n;
//	while (n--)
//	{
//		int arr[10] = { 0 };
//		cin >> num;
//		for (int i = 1; i <= num; i++)
//		{
//			int k = i;
//			while (k>0)
//			{
//				arr[k % 10]++;
//				k /= 10;
//			}
//		}
//		for (int i = 0; i <=9 ; i++)
//		{
//			cout << arr[i] << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}


//进位
//int main()
//{
//    int n;
//    string a, b;
//    cin >> n;
//    while (n--)
//    {
//        int ans = 0;
//        int count = 0;
//        cin >> a >> b;
//        int len1 = a.length();
//        int len2 = b.length();
//        if (len2>len1)
//        {
//            int len_diff = len2 - len1;
//            a = string(len_diff, '0') + a;
//        }
//        else
//        {
//            int len_diff = len1 - len2;
//            b = string(len_diff, '0') + b;
//        }
//
//        for (int i = len1-1; i >= 0; i--)
//        {
//            int digits = a[i] - '0' + b[i] - '0' + count;
//            count = digits / 10;
//            if (count!=0)
//            {
//                ans++;
//            }
//        }
//        cout << ans << endl;
//    }
//    return 0;
//}



//罗马数字
//int main()
//{
//	string roman[14] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
//	int nums[14] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
//	int n;
//	string ans = "";
//	cin >> n;
//
//	for (int i = 0; i < 13; i++)
//	{
//		int x = n;
//		while(n/nums[i] != 0)
//		{
//			ans.append(roman[i]);
//			n -= nums[i];
//  		}
//	}
//	cout << ans;
//	return 0;
//}


//神奇的元素
//int main()
//{
//	int n, a, b, count = 1;
//	cin >> n;
//	cin >> a;
//	for (int i = 1; i < n; i++)
//	{
//		cin >> b;
//		if (count<=0)
//		{
//			cin >> a;
//			count = 1;
//			i++;
//		}
//		if (a==b)
//		{
//			count++;
//		}
//		else
//		{
//			count--;
//		}
//	}
//	cout << a << endl;
//	return 0;
//}


//素数求和
//vector<bool> sieve(int N)
//{
//	vector<bool>isPrime(N + 1, true);
//	isPrime[0] = isPrime[1] = false;
//	
//	for (int i = 2; i <= sqrt(N); i++)
//	{
//		if (isPrime[i])
//		{
//			for (int j = i*i; j <= N; j+=i)
//			{
//				isPrime[j] = false;
//			}
//		}
//	}
//	return isPrime;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	unsigned long long sum = 0;
//	vector<bool>isPrime = sieve(n);
//	for (int i = 2; i <= n; i++)
//	{
//		if (isPrime[i])
//		{
//			sum += i;
//		}
//	}
//	cout << sum << endl;
//	return 0;
//}


//int main()
//{
//	int a = 1, b = 5, c = 0,d = 3;
//	int x1, x2, x3, x4;
//	x1 = (a && b || (++c));
//	x2 = ++a || ++b && ++c;
//	a = -1;
//	x3 = ++a && ++b && ++c;
//	x4 = a > b ? a + 1 : c < d ? c + 3 : d + 1;
//
//	cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 4; i++)
//	{
//		for (int j = 1; j <= 4 - i; j++) cout << "+";
//		for (int k = 0; k <= 2 * i + 1; k++)
//			if (k <= 3)cout << "$";
//			else cout << "*";
//		cout << endl;
//	}
//	return 0;
//}


//int main()
//{
//	int i, j, k[26] = { 0 };
//	char s[] = "I love c++ very much!";
//	for (i = 0; s[i]; i++)
//		if (s[i] >= 'a' && s[i] <= 'z')k[s[i] - 'a']++;
//	for (j = 0, i = 1; i < 26; i++)
//		if (k[i] > k[j])j = i;
//	cout << char(j + 'a') << ' ' << k[j] << endl;
//	return 0;
//}

//int f(int n, int s[]) {
//	static int m = s[n];
//	return m + s[n];
//}
//int main()
//{
//	int s[] = { 5,4,3,2,1 };
//	int i;
//	for (int i = 1; i <=3; i++)
//	{
//		cout << f(i, s) << endl;
//	}
//	return 0;
//}



//int cnt, n;
//unsigned long long sum = 0;
//int pri[100000000], vis[100000000];
//void Euler(int n)
//{
//    for (int i = 2; i <= n; ++i)
//    {
//        if (!vis[i])
//        {
//            pri[cnt++] = i;
//        }
//        for (int j = 0; j < cnt; ++j)
//        {
//            if (1ll * i * pri[j] > n)
//                break;
//            vis[i * pri[j]] = 1;
//            if (i % pri[j] == 0)
//            {
//                break;
//            }
//        }
//    }
//}
//
//
//int main()
//{
//    cin >> n;
//    Euler(n);
//    int i = 0;
//    while (pri[i]!=0)
//    {
//        sum += pri[i];
//        i++;
//    }
//    cout << sum;
//	return 0;
//}


