/* 
    input:5
    output: A   B   C   D   E
    index:  1   2   3   4   5
    ASCII:  65  66  68  69 70
*/

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt=0;
        
       char ch='A';

        for(iCnt=1 ; iCnt<=iNo ; iCnt++,ch++)
        {
            System.out.printf("%c\t",ch);
        }
        System.out.println();
    }
}

class program176
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter the frequency:");
        iValue=sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
}