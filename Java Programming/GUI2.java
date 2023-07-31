import java.awt.*;

public class GUI2 {
    public static void main(String a[]) {
        MarvellousFrame mobj = new MarvellousFrame("PPA");
    }
}

class MarvellousFrame {
    public Frame fobj;

    public MarvellousFrame(String Title) {
        Frame fobj = new Frame(Title);
        fobj.setSize(400, 400);
        fobj.setVisible(true);
    }
}