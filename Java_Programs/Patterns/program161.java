import java.util.*;

//TC:O(2N)   -check start and condition and displacement

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt=0;

        for(iCnt=-iNo ; iCnt<=iNo ; iCnt++)
        {
            System.out.print(iCnt+"\t");
        }

        System.out.println(); 

    }
}
            
class program161
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter the frequency:");
        iValue=sobj.nextInt();

        Pattern pobj=new Pattern();
        pobj.Display(iValue);
    }
}