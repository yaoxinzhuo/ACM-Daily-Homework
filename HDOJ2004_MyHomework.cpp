/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2004
*/
#include<iostream>
using namespace std;
int main()
{
    int score;
    while(cin>>score)
    {
        if((score>=0)&&(score<=100))
        {
        switch(score/10)
            {
            case 6:
                cout<<"D"<<endl;
                break;
            case 7:
                cout<<"C"<<endl;
                break;
            case 8:
                cout<<"B"<<endl;
                break;
            case 9:
                cout<<"A"<<endl;
                break;
            case 10:
                cout<<"A"<<endl;
                break;
            default:
                cout<<"E"<<endl;        
                break;
            }
        }
        else
        {
            cout<<"Score is error!"<<endl;
        }
    }
    return 0;
}