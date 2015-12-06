/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1076
*/
#include<iostream>
using namespace std;

int main()
{
    int n,i;
    int Y, N;
    cin >> n;
    while (n--)
    {
        cin >> Y >> N;
        for (i = Y;;i++)
        {
            if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
            {
                N -= 1;
            }
            if (N == 0)
            {
                break;
            }
        }
        cout << i << endl;
    }
    return 0;
}