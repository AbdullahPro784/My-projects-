#include <iostream>
#include<cmath>
using namespace std;
void sum()
{
	int n;
	int i;
	int sum = 0;
	cout << "Enter the amount of numbers you want to add: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int num[i];
		cout << "Enter number " << i << " : ";
		cin >> num[i];
	}
	for (i = 1; i <= n; i++)
	{
		int num[i];
		sum = sum + num[i];
	}
	cout << sum;

}
void sub()
{
	int n;
	int i;
	int s;
	int sub = 0;
	cout << "Enter the amount of numbers you want to subtract: ";
	cin >> n;
	int num[n];
	for (int i = 1; i <= n; i++)
	{

		cout << "Enter number " << i << " : ";
		cin >> num[i];
	}
	for (i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			s = num[i];
		}
		else
		{
			s = s - num[i];
		}



	}
	cout << s;
}
void mul()
{
	int n;
	int i;
	int mul = 1;
	cout << "Enter the amount of numbers you want to multiply: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int num[i];
		cout << "Enter number " << i << " : ";
		cin >> num[i];
	}
	for (i = 1; i <= n; i++)
	{
		int num[i];
		mul = mul*num[i];

	}
	cout << mul;

}
void divi()
{
	int n;
	int i;
	float y;
	int div1 = 1;
	cout << "Enter the amount of numbers you want to divide: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int num[i];
		cout << "Enter number " << i << " : ";
		cin >> num[i];
	}
	for (i = 1; i <= n; i++)
	{

		float num[i];
		if (i == 1)
		{
			y = num[i];
		}
		else
		{
			y = y / num[i];
		}


	}
	cout << y;

}
void mod()
{

	int n;
	int y;
	int z;
	int i;
	int num[i];
	int mod1 = 1.0;
	cout << "Enter the amount of numbers you want to find modulous of : ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{

		cout << "Enter number " << i << " : ";
		cin >> num[i];
	}
	for (i = 1; i <= n; i++)
	{

		if (i == 1)
		{
			y = num[i];
		}
		else
		{
			z = y%num[i];
		}

	}
	cout << z;
}
void prime()
{
	int n;
	int i;
	int j;
	int cnt = 0;
	int ncnt = 0;
	cout << "Enter the amount of numbers you want to know that are prime: ";
	cin >> n;
	int num[n];
	for (i = 1; i <= n; i++)
	{
		cout << "Enter number " << i << ":";
		cin >> num[i];

	}
	for (i = 1; i <= n; i++)
	{

		for (j = 2; j<num[i]; j++)
		{
			if (num[i] % j == 0 && j != num[i])
			{
				cnt++;
				break;

			}

			else if (num[i] % j != 0)
			{
				ncnt++;
				break;
			}

		}
	}
	/* for(i=1;i<=n;i++)
	{

	for(j=2;j<num[i];j++)
	{


	if(num[i]%j!=0)
	{
	ncnt++;    //prime
	break;
	}

	}
	}*/
	cout << cnt << "******************************";

	int notpr[cnt];
	int pr[ncnt];
	for (i = 1; i <= n; i++)
	{

		for (j = 2; j<num[i]; j++)
		{
			if (num[i] % j == 0 && j != num[i])
			{
				notpr[i] = num[i];

			}

		}
	}
	for (i = 1; i <= n; i++)
	{

		for (j = 2; j<num[i]; j++)
		{
			if (num[i] % j == 0 && j != num[i])
			{
				notpr[i] = num[i];

			}

		}
	}
	for (i = 1; i <= cnt; i++)
	{

		cout << notpr[i] << " is not prime" << "\n";

	}
	for (i = 1; i <= ncnt; i++)
	{

		cout << pr[i] << " is prime" << "\n";

	}
}
void even()
{
	int n;
	int i;
	int sub = 0;
	cout << "Enter the amount of numbers you want to know that are even: ";
	cin >> n;
	int num[n];
	for (int i = 1; i <= n; i++)
	{

		cout << "Enter number " << i << " : ";
		cin >> num[i];
	}
	for (i = 1; i <= n; i++)
	{

		if (num[i] % 2 == 0)
		{
			cout << "The number " << num[i] << "is even\n";
		}
		else
		{
			cout << "The number " << num[i] << "is not even\n";
		}

	}

}
void odd()
{
	int n;
	int i;
	int sub = 0;
	cout << "Enter the amount of numbers you want to know that are odd: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int num[i];
		cout << "Enter number " << i << " : ";
		cin >> num[i];
	}
	for (i = 1; i <= n; i++)
	{
		int num[i];
		if (num[i] % 2 == 1)
		{
			cout << "The number " << num[i] << "is odd\n";
		}
		else
		{
			cout << "The number " << num[i] << "is not odd\n";
		}

	}
	cout << odd;
}
int disc(int a, int b, int c)
{

	int n;
	int i;
	n = b*b - 4 * a*c;

}
void quad()
{
	int a;
	int b;
	int c;
	int n1;
	int n2;
	int i;
	int y;
	int z;
	cout << "Enter the values of a,b and c: \n";
	cin >> a >> b >> c;
	i = disc(a, b, c);
	n1 = -b + pow(i, 0.5);
	y = n1 / 2 * a;
	n2 = -b - pow(i, 0.5);
	z = n2 / 2 * a;
	cout << "For positive: \n" << y;
	cout << "For negative: \n" << z;
}
void table()
{
	int num;
	int i;
	int j;
	int n;
	int x;
	cout << "Enter the number that you want table for: ";
	cin >> n;
	cout << "How far do you want this table to be: ";
	cin >> x;
	for (i = 1; i <= x; i++)
	{
		cout << n << " x " << i << "=" << n*i;
		cout << endl;
	}

}
void fact1()
{
	int n;
	int i;
	int fact = 1;
	int j;
	cout << "Enter the number that you want factorial for: ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		fact = fact*i;
	}
	cout << fact;
}
void greater1()
{

	int num;
	int i;
	int j;
	cout << "Enter first number: ";
	cin >> i;
	cout << "Enter second number: ";
	cin >> j;
	if (i>j)
	{
		cout << i << " is greater than " << j;
	}
	else if (i<j)
	{
		cout << j << " is greater than " << i;
	}
}
void smaller()
{
	int i;
	int j;
	int num;
	cout << "Enter first number: \n";
	cin >> i;
	cout << "Enter second number: \n";
	cin >> j;
	if (i<j)
	{
		cout << i << " is smaller than " << j;
	}
	else if (i>j)
	{
		cout << j << " is smaller than " << i;
	}
}
int main()
{

	int x;
	cout << "                                         cccccc     a     ll      ccccccc  u   u  ll      a     tt      ooooo  rr rr rr\n";
	cout << "                                         cc        aaa    ll      cc       u   u  ll     aaa    tt      o   o  rr    rr\n";
	cout << "                                         cc       aaaa    ll      cc       u   u  ll     aaa   tttt     o   o  rrrrrrrr \n";
	cout << "                                         cccccc  a   a    lllllll ccccccc  uuuuu  llll  a   a   tt      ooooo  rr      rr \n";
	cout << "                                                                                                 ttttt           \n";
	cout << "PRESS 1 FOR ADDITION: \n";
	cout << "PRESS 2 FOR SUBTRACTION: \n";
	cout << "PRESS 3 FOR MULTIPLICATION:  \n";
	cout << "PRESS 4 FOR DIVISION: \n";
	cout << "PRESS 5 FOR MODULOUS: \n";
	cout << "PRESS 6 FOR FINDING PRIME NUMBER: \n";
	cout << "PRESS 7 FOR FINDING EVEN NUMBER: \n";
	cout << "PRESS 8 FOR FINDING ODD NUMBER:  \n";
	cout << "PRESS 9 FOR FINDING DISCRIMINANT: \n";
	cout << "PRESS 10 FOR USING QUADRATIC FORMULA: \n";
	cout << "PRESS 11 FOR PRINTING A NUMBERS TABLE: \n";
	cout << "PRESS 12 FOR FINDING FACTORIAL OF A NUMBER: \n";
	cout << "PRESS 13 FOR FINDING THE LARGER NUMBER OF TWO INPUTS: \n";
	cout << "PRESS 14 FOR FINDING SMALLER NUMBER OF TWO INPUTS: \n";
	cout << "******************************************************************************************************************************************************";
	cin >> x;
	if (x == 1)
	{
		sum();
	}
	else if (x == 2)
	{
		sub();
	}
	else if (x == 3)
	{
		mul();
	}
	else if (x == 4)
	{
		divi();
	}
	else if (x == 5)
	{
		mod();
	}
	else if (x == 6)
	{
		prime();
	}
	else if (x == 7)
	{
		even();
	}
	else if (x == 8)
	{
		odd();
	}
	else if (x == 9)
	{
		int num1, num2, num3;
		cout << "Enter a,b,c: ";
		cin >> num1 >> num2 >> num3;
		disc(num1, num2, num3);
	}
	else if (x == 10)
	{
		quad();
	}
	else if (x == 11)
	{
		table();
	}
	else if (x == 12)
	{
		fact1();
	}
	else if (x == 13)
	{
		greater1();
	}
	else if (x == 14)
	{
		smaller();
	}
	else
	{

		cout << "Invalid choice";
	}
	return 0;
}
