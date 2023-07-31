import java.sql.*;

public class Database {
    public static void main(String Arg[]) throws Exception {

        Connection cobj = DriverManager.getConnection("jdbc:mysql://localhost:3306/ppa49", "root", ""); // 2

        Statement sobj = cobj.createStatement(); // 3

        ResultSet robj = sobj.executeQuery("select * from student"); // 4

        while (robj.next()) {
            System.out.println("RID : " + robj.getInt("rno"));
            System.out.println("Name : " + robj.getString("name"));
            System.out.println("City : " + robj.getString("city"));
            System.out.println("Marks : " + robj.getInt("marks"));
        }
    }
}

// execute() Create table
// executeQuery() select
// executeUpdate() delete / update / alter / insert