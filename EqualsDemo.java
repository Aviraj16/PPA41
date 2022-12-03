class EqualsDemo
{
        public static void main(String a[])
    {
        String s1 = "Hello";
        String s2 = "Hello";
        
        System.out.println("HashCode of s1 :"+s1.hashCode());
        System.out.println("HashCode of s2 :"+s2.hashCode());

        if(s1.equals(s2))       
        {
            System.out.println("Objects are Same");
        }
        else 
        {
            System.out.println("Objects are Different");
        }
        if(s1==s2)      //if(1001==1001)
        {
            System.out.println("Objects are Same");
        }
        else 
        {
            System.out.println("Objects are Different");
        }
    }
}