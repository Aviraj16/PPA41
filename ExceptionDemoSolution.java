import java.util.*;

class ExceptionDemoSolution
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0,iNo2 = 0,iAns =0;
        System.out.println("Enter first Number");
        iNo1 = sobj.nextInt();
        System.out.println("Enter first Number");
        iNo2 = sobj.nextInt();

        try
        {
            System.out.println("Inside Try Block");
            iAns = iNo1/iNo2;
            System.out.println("Division is : "+iAns);
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside catch1");
            System.out.println(obj);
        }
        catch(NullPointerException obj)
        {
            System.out.println("Inside catch2");
            System.out.println(obj);
        }
        catch(Exception obj)
        {
            System.out.println("Inside catch3");
            System.out.println(obj);
        }
        finally
        {
            System.out.println("Inside Finally block");
            sobj.close();
        }        
    }
}