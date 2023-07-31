import java.awt.*;
import java.awt.event.*;

public class GUI4 {
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

class MarvellousListener implements WindowListener {
    public void windowDeactivated(WindowEvent obj) {
    }

    public void windowDeiconified(WindowEvent obj) {
    }

    public void windowIconified(WindowEvent obj) {
    }

    public void windowClosed(WindowEvent obj) {
    }

    public void windowOpened(WindowEvent obj) {
    }

    public void windowActivated(WindowEvent obj) {
    }

    public void windowClosing(WindowEvent obj) {
        System.exit(0);
    }
}