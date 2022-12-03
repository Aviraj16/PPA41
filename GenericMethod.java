
class GenericMethod
{
    public static <T> void Display(T Arr[])
    {
        for(int i = 0; i<Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public static void main(String a[])
    {
        Integer iArr[] = {10,20,30,40};

        Display(iArr);

        Character cArr[] = {'a','b','c','d','e'};

        Display(cArr);

        Float fArr[] = {10.8f,34.56f,644.42f,56.54f,45.87f};

        Display(fArr);
    }
}