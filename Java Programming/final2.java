class final2 {
    public static void main(String Arg[]) {
        Base bobj = new Derieved();
        bobj.fun();
        bobj.gun();
    }
}

class Base {
    public void fun() {
        System.out.println("Base fun");
    }

    final public void gun() {
        System.out.println("Base gun");
    }
}

class Derieved extends Base {
    public void fun() {
        System.out.println("Derieved fun");
    }

    // public void gun() {
    // System.out.println("Derieved gun");
    // }
}
