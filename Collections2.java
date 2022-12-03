import java.util.*;


class Collections2
{
    public static void main(String Arr[])
    {
        LinkedList <String>lobj = new LinkedList<String>();

        lobj.add("Kapil");
        lobj.add("Aditya");
        lobj.add("Rohan");
        lobj.add("Rutik");
        lobj.add("Tejas");

        System.out.println("Elements of Linked List are"+lobj);
        lobj.addFirst("Pooja");

        System.out.println("Elements of Linked List are"+lobj);

        lobj.addLast("Sneha");
        System.out.println("Elements of Linked List are"+lobj);

        Iterator iobj = lobj.iterator();
        System.out.println("Data using Iterator is : ");
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
        if(lobj.contains("Rohan"))
        {
            System.out.println("Rohan is Present in Linked List");
        }
        else
        {
            System.out.println("Rohan is Not Present in Linked List");
        }

        lobj.remove();
        System.out.println("Elements of Linked List are"+lobj);

        lobj.remove();
        System.out.println("Elements of Linked List are"+lobj);

        lobj.remove(0);
        System.out.println("Elements of Linked List are"+lobj);

        lobj.removeLast();
        System.out.println("Elements of Linked List are"+lobj);

        System.out.println("Number of Elements are : "+lobj.size());

        lobj.set(1,"Dipak");
        System.out.println("Elements of Linked List are"+lobj);

        lobj.clear();
        System.out.println("Elements of Linked List are"+lobj);

    }
}