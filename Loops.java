class Loops
{
    public static void main(String arg[])
    {
        int Arr[] = {10,20,30,40};
        int iCnt = 0;

        //Traversal of array using for loop
        System.out.println("Traversal of array using for loop");
        for(iCnt = 0; iCnt < Arr.length;iCnt++ )
        {
            System.out.println(Arr[iCnt]);
            
        }

        //Traversal of array using while loop
        System.out.println("Traversal of array using while loop");
        iCnt = 0;
        while(iCnt < Arr.length )
        {
            System.out.println(Arr[iCnt]);
            iCnt++;
        }

        //Traversal of array using do-while loop
        System.out.println("Traversal of array using do while loop");
        iCnt = 0;
        do
        {
            System.out.println(Arr[iCnt]);
            iCnt++;
        }while(iCnt < Arr.length );
        
        //Traversal of array using for-each loop
        System.out.println("Traversal of array using for-each loop");
        for(int iNo : Arr)  //only in JAVA
        {
            System.out.println(iNo);
        }
    }
}
        // C:\Users\Windows 11\Desktop\JAVA>java Loops
        // Traversal of array using for loop
        // 10
        // 20
        // 30
        // 40
        // Traversal of array using while loop
        // 10
        // 20
        // 30
        // 40
        // Traversal of array using do while loop
        // 10
        // 20
        // 30
        // 40
        // Traversal of array using for-each loop
        // 10
        // 20
        // 30
        // 40
