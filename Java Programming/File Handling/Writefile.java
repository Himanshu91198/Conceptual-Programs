import java.io.*;

class Writefile {
    public static void main(String Arg[]) throws Exception {
        FileOutputStream fobj = new FileOutputStream("Infosystems.txt");
        String str = "India is my country";

        byte Arr[] = str.getBytes();
        fobj.write(Arr);
        fobj.close();
    }
}