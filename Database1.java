import java.sql.*;
import java.sql.DriverManager;

class Database1
{
    public static void main(String arg[]) throws Exception
    {

        Connection cobj = DriverManager.getConnection("jdbc:mysql://locathost:3306/ppa41","root","root");

        Statement sobj = cobj.createStatement();

        ResultSet robj = sobj.executeQuery("select * from student");

        while(robj.next())
        {
            System.out.println("RID :"+robj.getInt("RID"));
            System.out.println("Name :"+robj.getString("Name"));
            System.out.println("City :"+robj.getString("City"));
            System.out.println("Marks :"+robj.getInt("Marks"));
        } 
    }
}