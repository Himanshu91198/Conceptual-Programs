
class OOP {
    public static void main(String Arg[]) {
        System.out.println("Inside main function");
        Arithmetic obj1 = new Arithmetic();
        Arithmetic obj2 = new Arithmetic(11, 10);

        int iRet = 0;
        iRet = obj1.Addition(); // 0
        System.out.println("Addition is : " + iRet);
        iRet = obj1.Subtraction(); // 0
        System.out.println("Substraction is : " + iRet);
        iRet = obj2.Addition(); // 21
        System.out.println("Addition is : " + iRet);
        iRet = obj2.Subtraction(); // 1
        System.out.println("Substraction is : " + iRet);

    }
}

class Arithmetic {
    public int No1;
    public int No2;

    public Arithmetic() // Default constructor
    {
        System.out.println("Inside Default Constructor");
        this.No1 = 0;
        this.No2 = 0;
    }

    public Arithmetic(int i, int j) // Parameterised constructor
    {
        System.out.println("Inside paramterised Constructor");
        this.No1 = i;
        this.No2 = j;
    }

    public int Addition() {
        int Ans = 0;
        Ans = this.No1 + this.No2;
        return Ans;
    }

    public int Subtraction() {
        int Ans = 0;
        Ans = this.No1 - this.No2;
        return Ans;

    }
}