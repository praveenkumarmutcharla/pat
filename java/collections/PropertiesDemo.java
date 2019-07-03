import java.util.*;
import java.io.*;

class PropertiesDemo{
    public static void main(String[] args) throws Exception{
        Properties p=new Properties();
        FileInputStream fis=new FileInputStream("logins.properties");
        p.load(fis);

        System.out.println(p);

        Scanner sc=new Scanner(System.in);
        System.out.println("enter username");
        String user=sc.next();
        String pwd=p.getProperty(user);

        System.out.println("Password for "+user+" is " +pwd);

        System.out.println("enter username and password");
        String s1=sc.next();
        String s2=sc.next();

        p.setProperty(s1, s2);

        FileOutputStream fos = new FileOutputStream("logins.properties");

        p.store(fos,"updated by satya");

    }
}