/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1062
*/
#include<stdio.h>
#include<string.h>

char str[999];

int main()
{
    int t,k, i, length, left, right;
    scanf("%d", &t);
    getchar();

    for (k = 0;k < t;k++)
    {
        gets(str);
        length = strlen(str);
        i = 0;
        for (;i < length;i++)
        {
            left = i;
            while (str[i] != ' '&&str[i] != '\0')
            {
                i++;
            }
            right = i - 1;
            for (;right >= left;right--)
            {
                printf("%c", str[right]);
            }
            if (str[i] == ' ')
            {
                printf(" ");
            }
        }
                printf("\n");
    }
    return 0;
}