public class AbstractDemo {
    public static void main(String Arg[]) {
        RBI robj1 = new SBI(); // Upcasting
        RBI robj2 = new BOM(); // Upcasting
        SBI sobj = new SBI(); // no casting
        BOM bobj = new BOM(); // no casting

        sobj.DisplayRules();
        bobj.DisplayRules();

        float fRet = 0.0f;
        fRet = sobj.CalculateROI();
        System.out.println("ROI of SBI is : " + fRet);
        fRet = bobj.CalculateROI();
        System.out.println("ROI of BOM is : " + fRet);
    }
}

abstract class RBI {
    public abstract float CalculateROI();

    // virtual float Calculatea ROI()
    public void DisplayRules() {
        System.out.println("You have to submit Adhaar card and PAN card");
        System.out.println("Minimum balance is 10,000\n");
    }
}

class SBI extends RBI {
    public float CalculateROI() {
        return 5.7f;
    }
}

class BOM extends RBI {
    public float CalculateROI() {
        return 7.7f;
    }
}