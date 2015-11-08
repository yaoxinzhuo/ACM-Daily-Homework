/*
	*Problem Description
	There are many students in PHT School. One day, the headmaster whose name
is PigHeader wanted all students stand in a line. He prescribed that girl can 
not be in single. In other words, either no girl in the queue or more than one 
girl stands side by side. The case n=4 (n is the number of children) is like
FFFF, FFFM, MFFF, FFMM, MFFM, MMFF, MMMM
	Here F stands for a girl and M stands for a boy. 
The total number of queue satisfied the headmaster’s needs is 7. 
Can you make a program to find the total number of queue with n children?

	*Input
	There are multiple cases in this problem and ended by the EOF. In each case, 
there is only one integer n means the number of children (1<=n<=1000).

	*Output
	For each test case, there is only one integer means the number of queue 
satisfied the headmaster’s needs.

	*Sample Input
	1
	2
	3
	
	*Sample Output
	1
	2
	4
	
	//Resolution 
	If n people legal queue,the last people is M,no limit,so has a(n-1) situations.
	If the last people is F,the n-1 people should be F,too.
		1.a(n-2) situations,the n-1 and n people are F.
		2.a(n-4) illegal situations,the last is MF,we can put FF behind it,become MFFF,has a(n-4)solutions.
*/

import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    public static void main(String[] args)
    {
        BigInteger[] a=new BigInteger[1001];
        
        a[1]=BigInteger.valueOf(1);
        a[2]=BigInteger.valueOf(2);
        a[3]=BigInteger.valueOf(4);
        a[4]=BigInteger.valueOf(7);
        
        for(int i=5;i<1001;i++)
        {
            a[i]=a[i-1].add(a[i-2]).add(a[i-4]);
        }
        
        int n;
        Scanner cin = new Scanner(System.in);
        while(cin.hasNextInt())
        {
            n=cin.nextInt();
            System.out.println(a[n]);
        }
    }
}