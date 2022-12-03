
class Demo  extends Thread
{
    public void run()
    {
        int i = 0;
        try
        {            
            for(i = 1 ; i<=20; i++)
            {
                System.out.println(Thread.currentThread().getName()+" : "+i);
                Thread.sleep(10);
            }
        }
        catch(InterruptedException obj)
        {}  
    }
}
class ThreadDemo7
{
    public static void main(String A[]) throws InterruptedException
    {
        System.out.println("Inside main method");

        Demo obj1 = new Demo();
        Demo obj2 = new Demo();

        Thread t1 = new Thread(obj1);
        Thread t2 = new Thread(obj2);
        
        t1.setName("First");
        t2.setName("Second");
        try{
        t1.start();
        t2.start();
        t1.join();
        t2.join();
        }
        catch(InterruptedException obj)
        {}
        System.out.println("End of main Thread");
    }
}