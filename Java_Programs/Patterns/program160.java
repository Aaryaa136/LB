import java.util.*;

//TC:O(2N)

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt=0;

        for(iCnt=-iNo ; iCnt<=0 ; iCnt++)
        {
            System.out.print(iCnt+"\t");
        }

        for(iCnt=1 ; iCnt<=iNo ;iCnt++)
        {
            System.out.print(iCnt+"\t");
        }

        System.out.println();

    }
}
            
class program160
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