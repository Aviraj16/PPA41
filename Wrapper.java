import java.io.*;
class Wrapper
{
    public static void main(String arg[])
    {
        int no  = 11;
        Integer iobj = new Integer(no);     //Boxing - converting primitive to wrapper

        System.out.println(no);
        System.out.println(iobj);
        
        int x = iobj;                       //Unboxing - converting Wrapper to Primitive
        System.out.println(x);
    }
}