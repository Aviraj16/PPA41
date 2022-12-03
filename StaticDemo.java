class StaticDemo
{
    static
    {
        System.out.println("Inside static block of StaticDemo class which contains main");
    }
    public StaticDemo()
    {
        System.out.println("Inside constructor of StaticDemo ");
    }
    public static void main (String arg[])
    {
        System.out.println("Inside Main ");
        
        System.out.println("Value of static No3 : "+Demo.No3);  //Demo::No3
        System.out.println("Value of static No3 : "+Demo.No4);  //Demo::No4
        Demo.Gun();

        Demo obj1 = new Demo();
        Demo obj2 = new Demo();
        
        obj1.Fun();
    }
}
class Demo
{
    public int No1;         //Non static characcterstics
    public int No2;         //Non static characcterstics
    public static int No3;  //static characterstics
    public static int No4;  //static characterstics

    static                  //static bolck
    {
        System.out.println("Inside static block");
        No3 = 51;
        No4 = 101;
    }
    public Demo()       //Constructor     
    {
        System.out.println("Inside constructor");
        No1 = 11;
        No2 = 21;
    }
    public void Fun()       //Non static method
    {
        //non static method can access static as well as non static data
        //we can use this keyword 
        System.out.println("Inside non static method Fun");
        
        System.out.println("Value of No1 : "+this.No1);
        System.out.println("Value of No2 : "+this.No2);
        System.out.println("Value of No3 : "+this.No3);
        System.out.println("Value of No4 : "+this.No4);
    }
    public static void Gun()       //static method
    {
        //static method can access only static data
        //we can't use this keyword 
        System.out.println("Inside static method Gun");

        // System.out.println("Value of No1 : "+No1);
        // System.out.println("Value of No2 : "+No2);
        System.out.println("Value of No3 : "+No3);
        System.out.println("Value of No4 : "+No4);
    }
}