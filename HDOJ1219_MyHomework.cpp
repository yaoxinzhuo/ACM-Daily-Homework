/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1219
*/
#include<iostream>
#include<cstdio>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
    char str[100001];
    int a[26], t;
    while (gets(str))
    {
        t = strlen(str);
        int a[26] = { 0 };
        for (int i = 0;i < t;i++)
        {
            if (str[i] >= 'a'&&str[i] <= 'z')
            {
                a[str[i] - 'a'] += 1;
            }
        }
        for (int i = 0;i < 26;i++)
        {
            printf("%c:%d\n", i + 'a', a[i]);
        }
        cout<<endl;
    }
    return 0;
}