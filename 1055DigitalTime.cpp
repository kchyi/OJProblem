#include<iostream>
#include<string>
using namespace std;
//字符串里的数字不要直接用，是char类型，需要将其转化为int类型，
//'0'=48; 
//Add something strange 
int find(string x)
{
	int i = 0;
	while (x[i] != ':')
		++i;
	return i;
}



int main()
{
	string now, past;
	while (cin >> now >> past)
	{
		int d;
		int res;
		int nhour, phour, nmin, pmin;
		int hour, min;
		if (find(now) == 2)
		{
			nhour = 10 * (now[0]-48) + (now[1]-48);
			nmin = 10 * (now[3]-48) + (now[4]-48);
		}
		if (find(now) == 1)
		{
			nhour = now[0]-48;
			nmin = 10 * (now[2]-48) + (now[3]-48);
		}
		if (find(past) == 2)
		{
			phour = 10 * (past[0]-48) + (past[1]-48);
			pmin = 10 * (past[3]-48) + (past[4]-48);
		}
		if (find(past) == 1)
		{
			phour = past[0]-48;
			pmin = 10 * (past[2]-48) + (past[3]-48);
		}
		d = 60 * (nhour - phour) + nmin - pmin;
		res = (d >= 0) ? d : (1440 + d);

		hour = res / 60;
		min = res % 60;

		cout << "The time interval between " << past << " and " << now << endl
			<< "is " << hour << " hours and " << min << " minutes.\n";

	}
	return 0;
}
