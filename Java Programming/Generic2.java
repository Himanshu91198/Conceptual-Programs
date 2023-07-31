
class Generic2 {
    public static void Display(T Arr[]) {
        for (int no : Arr) {
            System.out.println(no);
        }
    }

    public static void main(String Arg[]) {
        Integer A[] = { 10, 20, 30, 40 };
        Float B[] = { 50.45f, 60.564f, 70.64f };
        Double C[] = { 50.78, 60.68, 70.87 };

        Display(A);
        Display(B);
        Display(C);

    }

}