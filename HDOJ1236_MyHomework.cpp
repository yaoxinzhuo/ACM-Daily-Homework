/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1236
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Student
{
public:
    string name;
    int grade=0;
    bool flag = false;
};

bool compare(Student &a, Student &b)
{
    if (a.grade > b.grade)
    {
        return true;
    }
    else if (a.grade == b.grade&&(a.name<b.name))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int score[11];
    Student a[1005];
    int N, M, G;
    while (cin >> N)
    {
        if (N == 0)
        {
            break;
        }
        else
        {
            cin >> M >> G;
            for (int i = 1;i <= M;i++)
            {
                cin >> score[i];
            }
            for (int i = 1;i <= N;i++)
            {
                a[i].grade = 0;
                a[i].flag = false;
                int temp;
                int t;
                cin >> a[i].name;
                cin >> temp;
                for (int k = 1;k <= temp;k++)
                {
                    cin >> t;
                    a[i].grade += score[t];
                }
            }
            int n = 0;
            for (int i = 1;i <= N;i++)
            {
                if (a[i].grade >= G)
                {
                    n += 1;
                    a[i].flag = true;
                }
            }
            cout << n << endl;
            sort(a+1, a + 1 + N, compare);
            for (int i = 1;i <= N;i++)
            {
                if (a[i].flag == true)
                {
                    cout << a[i].name << " " << a[i].grade << endl;
                }
            }
        }
    }
    return 0;
}