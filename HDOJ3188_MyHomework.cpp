/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=3188
*/
#include<iostream>
using namespace std;

int panduan(int a, int b, int c)
{
    if (a == b || b == c || a == c)
    {
        return 2;
    }
    else if(((a*a)==(b*b+c*c))||((b*b)==(a*a+c*c))||((c*c)==(b*b+a*a)))
    { 
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n,flag;
    int a, b, c;
    cin >> n;
    while ( n -- )
    {
        cin >> a >> b >> c;
        flag = panduan(a, b, c);
        if (flag == 1)
        {
            cout << "good" << endl;
        }
        else if (flag == 2)
        {
            cout << "perfect" << endl;
        }
        else
        {
            cout << "just a triangle" << endl;
        }
    }
    return 0;
}