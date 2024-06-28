//# include <iostream>
//using namespace std;
//class node
//{
//public:
//	node* up;
//	node* down;
//	node* left;
//	node* right;
//	node()
//	{
//		up = down = left = right = NULL;
//	}
//};
//
//class digits
//{
//private:
//	node* n1 = new node;
//	node* n2 = new node;
//	node* n3 = new node;
//	node* n4 = new node;
//	node* n5 = new node;
//	node* n6 = new node;
//public:
//	/*digits()
//	{
//		p1 = p2 = p3 = p4 = p5 = p6 = nullptr;
//	}*/
//	void links(char dig)
//	{
//		if (dig == '0')
//		{
//			n1->right = n2;
//			n2->down = n4;
//			n4->down = n6;
//			n6->left = n5;
//			n5->up = n3;
//			n3->up = n1;
//		}
//		if (dig == '1')
//		{
//			n3->up = n1;
//			n5->up = n3;
//		}
//		if (dig == '2')
//		{
//			n1->right = n2;
//			n2->down = n4;
//			n4->left = n3;
//			n5->up = n3;
//			n6->left = n5;
//		}
//		if (dig == '3')
//		{
//			n1->right = n2;
//			n2->down = n4;
//			n4->left = n3;
//			n4->down = n6;
//			n6->left = n5;
//		}
//		if (dig == '4')
//		{
//			n3->up = n1;
//			n4->left = n3;
//			n2->down = n4;
//			n4->down = n6;
//		}
//		if (dig == '5')
//		{
//			n1->right = n2;
//			n3->up = n1;
//			n4->left = n3;
//			n4->down = n6;
//			n6->left = n5;
//		}
//		if (dig == '6')
//		{
//			n1->right = n2;
//			n3->up = n1;
//			n5->up = n3;
//			n6->left = n5;
//			n4->down = n6;
//			n4->left = n3;
//		}
//		if (dig == '7')
//		{
//			n1->right = n2;
//			n2->down = n4;
//			n4->down = n6;
//		}
//		if (dig == '8')
//		{
//			n1->right = n2;
//			n3->up = n1;
//			n4->left = n3;
//			n2->down = n4;
//			n5->up = n3;
//			n6->left = n5;
//			n4->down = n6;
//		}
//		if (dig == '9')
//		{
//			n4->left = n3;
//			n3->up = n1;
//			n1->right = n2;
//			n2->down = n4;
//			n4->down = n6;
//		}
//	}
//	void print()
//	{
//		if (n1->right == n2)
//		{
//			if (n3->up == n1)
//			{
//				if (n2->down == n4)
//				{
//					cout << "--" << endl;
//					cout << "| |" << endl;
//				}
//				else
//				{
//					cout << "--" << endl;
//					cout << "|" << endl;
//				}
//			}
//			else
//			{
//				if (n2->down == n4)
//				{
//					cout << "--" << endl;
//					cout << "  |" << endl;
//				}
//				else
//				{
//					cout << "--" << endl;
//				}
//			}
//
//		}
//		else if (n3->up == n1 && n2->down == n4)
//		{
//			cout << "| |" << endl;
//		}
//		else if (n3->up == n1)
//		{
//			cout << "|  " << endl;
//		}
//		else if (n2->down == n4)
//		{
//			cout << "  |" << endl;
//		}
//		if (n4->left == n3)
//		{
//			if (n4->down == n6)
//			{
//				if (n6->left == n5)
//				{
//					if (n5->up == n3)
//					{
//						cout << "--" << endl;
//						cout << "| |" << endl;
//						cout << "--" << endl;
//					}
//					else
//					{
//						cout << "--" << endl;
//						cout << "  |" << endl;
//						cout << "--" << endl;
//					}
//				}
//				else
//				{
//					cout << "--" << endl;
//					cout << "  |" << endl;
//				}
//			}
//			else
//			{
//				if (n5->up == n3 && n6->left == n5)
//				{
//					cout << "--" << endl;
//					cout << "|  " << endl;
//					cout << " --" << endl;
//				}                  
//				else
//				{
//					cout << "--" << endl;
//				}
//			}
//
//		}
//		else if (n4->down == n6 && n6->left == n5 && n5->up == n3)
//		{
//			cout << "| |" << endl;
//			cout << "--" << endl;
//		}
//		else if (n4->down == n6 && n6->left == n5)
//		{
//			cout << "  |" << endl;
//			cout << "--" << endl;
//		}
//		else if (n6->left == n5 && n5->up == n3)
//		{
//			cout << "|  " << endl;
//			cout << "--" << endl;
//		}
//		else if (n4->down == n6 && n5->up == n3)
//		{
//			cout << "| |" << endl;
//		}
//		else if (n4->down == n6)
//		{
//			cout << "  |" << endl;
//		}
//		else if (n5->up == n3)
//		{
//			cout << "|  " << endl;
//		}
//		else if (n6->left == n5)
//		{
//			cout << "--" << endl;
//		}
//	}
//};
//class Times
//{
//private:
//	digits* d1;
//	digits* d2;
//	digits* d3;
//	digits* d4;
//	char formate[2];
//public:
//	Times()
//	{
//		d1 = d2 = d3 = d4 = nullptr;
//	}
//	void gettime(string s)
//	{
//		d1 = new digits;
//		d2 = new digits;
//		d3 = new digits;
//		d4 = new digits;
//		d1->links(s[0]);
//		d2->links(s[1]);
//		d3->links(s[3]);
//		d4->links(s[4]);
//		d1->print();
//		d2->print();
//		d3->print();
//		d4->print();
//	}
//	string addmin(int m, string t)
//	{
//		int sum = 0;
//		int t3 = t[3] - 48;
//		int t4 = t[4] - 48;
//		int t1 = 0, t2 = 0;
//		t3 = t3 * 10;
//		sum = t3 + t4 + m;
//		if (sum < 60)
//		{
//			t[4] = sum % 10 + 48;
//			t[3] = sum / 10 + 48;
//		}
//		else
//		{
//			while (sum >= 60)
//			{
//				sum = sum - 60;
//				t1 = t[1] - 48;
//				t[1] = t1 + 1 + 48;
//			}
//			t2 = t[1] - 48;
//			int s = t2 + (t[0] - 48) * 10;
//			if (s >= 24)
//			{
//				s = s - 24;
//				t[1] = s % 10 + 48;
//				t[0] = s / 10 + 48;
//			}
//			t[4] = sum % 10 + 48;
//			t[3] = sum / 10 + 48;
//			delete d1;
//		}
//		delete d3;
//		delete d4;
//		return t;
//	}
//	void changedate()
//	{
//		cout << "date changed" << endl;
//	}
//	string addhours(int h, string t)
//	{
//		int sum;
//		int t1 = t[0] - 48;
//		int t2 = t[1] - 48;
//		t1 = t1 * 10;
//		sum = t1 + t2 + h;
//		if (sum < 24)
//		{
//			t[1] = sum % 10 + 48;
//			t[0] = sum / 10 + 48;
//		}
//		else
//		{
//			while (sum >= 24)
//			{
//				sum = sum - 24;
//				changedate();
//			//	cout << "data changed";
//			}
//
//			t[1] = sum % 10 + 48;
//			t[0] = sum / 10 + 48;
//		}
//		delete d1;
//		delete d2;
//		return t;
//	}
//	string submin(int m, string t)
//	{
//		int sub = 0;
//		int t3 = t[3] - 48;
//		int t4 = t[4] - 48;
//		int t1 = 0;
//		int t2 = 0;
//		t3 = t3 * 10;
//		sub = t3 + t4 - m;
//		if (sub >= 0)
//		{
//			t[4] = sub % 10 + 48;
//			t[3] = sub / 10 + 48;
//		}
//		else
//		{
//			while (sub < 0)
//			{
//				sub = sub + 60;
//				t1 = t[1] - 48;
//				t[1] = t1 - 1 + 48;
//			}
//			t2 = t[1] - 48;
//			if (t2 < 0)
//			{
//				t2 = t2 + 24;
//				changedate();
//				t[1] = t2 % 10 + 48;
//				t[0] = t2 / 10 + 48;
//			}
//			t[4] = sub % 10 + 48;
//			t[3] = sub / 10 + 48;
//			delete d1;
//		}
//		delete d3;
//		delete d4;
//		return t;
//	}
//	string subhour(int h, string t)
//	{
//		int sub;
//		int t1 = t[0] - 48;
//		int t2 = t[1] - 48;
//		t1 = t1 * 10;
//		sub = t1 + t2 - h;
//		if (sub >= 0)
//		{
//			t[1] = sub % 10 + 48;
//			t[0] = sub / 10 + 48;
//		}
//		else
//		{
//			while (sub < 0)
//			{
//				sub = sub + 24;
//				changedate();
//			}
//			t[1] = sub % 10 + 48;
//			t[0] = sub / 10 + 48;
//		}
//		delete d1;
//		delete d2;
//		return t;
//	}
//	string changeformat(string t)
//	{
//		int sum = 0;
//		int t1 = t[0] - 48;
//		int t2 = t[1] - 48;
//		t1 = t1 * 10;
//		sum = t1 + t2;
//		if (sum < 12)
//		{
//			formate[0] = 'a';
//			formate[1] = 'm';
//		}
//		else
//		{
//			sum = sum - 12;
//			t[1] = sum % 10 + 48;
//			t[0] = sum / 10 + 48;
//			formate[0] = 'p';
//			formate[1] = 'm';
//		}
//		return t;
//	}
//	void form()
//	{
//		cout << formate[0] << endl;
//		cout << formate[1] << endl;
//	}
//
//};
//int main()
//{
//	string s;
//	cout << "Enter Time: " << endl;
//	cin >> s;
//	Times t;
//	t.gettime(s);
//	string t1;
//	int min = 0;
//	cout << "enter how many minutes you want to increase" << endl;
//	cin >> min;
//	t1 = t.addmin(min, s);
//	t.gettime(t1);
//	cout << "enter how many hours you want to increase" << endl;
//	int h;
//	cin >> h;
//	t1 = t.addhours(h, s);
//	t.gettime(t1);
//	cout << "enter how many minutes you want to decrease" << endl;
//	cin >> min;
//	t1 = t.submin(min, s);
//	t.gettime(t1);
//	cout << "enter how many hours you want to decrease" << endl;
//	cin >> h;
//	t1 = t.subhour(h, s);
//	t.gettime(t1);
//	cout << "change the formate" << endl;
//	t1 = t.changeformat(s);
//	t.gettime(t1);
//	t.form();
//
//}