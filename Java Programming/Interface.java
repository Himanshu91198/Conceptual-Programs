public class Interface {
    public static void main(String Arg[]) {
        Demo dobj = new Demo();

        float fret = 0.0f;

        fret = dobj.CalculateArea(4);
        System.out.println("Area is : " + fret);

        fret = dobj.CalculateCircumference(4);
        System.out.println("Area is : " + fret);
    }
}

interface Circle {
    public final float PI = 3.14f;

    public float CalculateArea(float Radius);

    public float CalculateCircumference(float Radius);
}

class Demo implements Circle {
    public float CalculateArea(float Radius) {
        return PI * Radius * Radius;
    }

    public float CalculateCircumference(float Radius) {
        return 2 * PI * Radius;
    }
}
