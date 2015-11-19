/*
	*Problem Description
	I have a very simple problem for you. 
Given two integers A and B, your job is to calculate the Sum of A + B.

	*Input
	The first line of the input contains an integer T(1<=T<=20) which 
means the number of test cases. Then T lines follow, each line consists 
of two positive integers, A and B. Notice that the integers are very large, 
that means you should not process them by using 32-bit integer. You may 
assume the length of each integer will not exceed 1000.

	*Output
	For each test case, you should output two lines. The first line is 
"Case #:", # means the number of the test case. The second line is the an 
equation "A + B = Sum", Sum means the result of A + B. Note there are some 
spaces int the equation. Output a blank line between two test cases.

	*Sample Input
	2
	1 2
	112233445566778899 998877665544332211
	
	*Sample Output
	Case 1:
	1 + 2 = 3

	Case 2:
	112233445566778899 + 998877665544332211 = 1111111111111111110
	
*/
import java.util.Scanner;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args)
	{
		BigInteger a;
		BigInteger b;
		BigInteger c;
		int T;
		Scanner cin=new Scanner(System.in);
		T=cin.nextInt();
		for(int i=1;i<T;i++)
		{
			a=cin.nextBigInteger();
			b=cin.nextBigInteger();
			c=a.add(b);
			System.out.println("Case "+i+":");
			System.out.println(a+" + "+b+" = "+c);
                        System.out.println();
		}
		a=cin.nextBigInteger();
		b=cin.nextBigInteger();
		c=a.add(b);
		System.out.println("Case "+T+":");
		System.out.println(a+" + "+b+" = "+c);
	}
}
