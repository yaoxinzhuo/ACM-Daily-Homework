/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1197
*/
#include<iostream>
using namespace std;

int find(int n, int t)
{
    int sum = 0;
    while (n)
    {
        sum += (n%t);
        n /= t;
    }
    return sum;
}

int main()
{
    for (int i = 1992;i < 9999;i++)
    {
        if (find(i, 10) == find(i, 12) && (find(i, 10) == find(i, 16)))
        {
            cout << i << endl;
        }
    }
    return 0;
}