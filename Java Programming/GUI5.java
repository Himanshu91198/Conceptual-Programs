import java.awt.*;
import java.awt.event.*;

public class GUI5 {
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
        fobj.addWindowListener(new MarvellousListener());

    }
}

class MarvellousListener extends WindowAdapter {

    public void windowClosing(WindowEvent obj) {
        System.exit(0);
    }
}