import java.net.*;
import java.io.*;
import java.util.*;

public class Server2
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Server Application is Running...");

        ServerSocket ss = new ServerSocket(2100);
        System.out.println("Server is running at port no 2100 and waiting for client request");

        Socket s = ss.accept();
        System.out.println("Request of client gets accepted");

        PrintStream ps = new PrintStream(s.getOutputStream());

        BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

    }
}