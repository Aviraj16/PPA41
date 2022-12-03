import java.util.*;     //Inbulit Package
import Marvellous.Arithematic;      //User Defined package
import Marvellous.PPA.Loop;      //User Defined package
class DemoPackage
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first Number");
        int iNo1 = sobj.nextInt();
        System.out.println("Enter Second Number");
        int iNo2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iNo1,iNo2);

        int iResult = aobj.Addition();
        System.out.println("Addition is :"+iResult);
        iResult = aobj.Substratcion();
        System.out.println("Substraction is :"+iResult);

        Loop lobj = new Loop();
        lobj.Display();
    }
}