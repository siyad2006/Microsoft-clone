//make calculator

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class calculatapp implements actionlistener {
    JFrame jf;
    JLabel displaylabel;

    public calculatapp(){
        
         jf=new JFrame("calculator");
        jf.setLayout(null);
        jf.setSize(600, 600);
         displaylabel=new JLabel("hello");
        displaylabel.setBounds(30, 50, 0540, 40);
        displaylabel.setBackground(Color.CYAN);
        displaylabel.setOpaque(true);
        displaylabel.setForeground(Color.RED);

        jf.add(displaylabel);
        JButton sevenButton=new JButton("7");
        sevenButton.setBounds(30, 130, 80, 80);
        
        jf.add(sevenButton);

        
        JButton eightButton=new JButton("8");
        eightButton.setBounds(130, 130, 80, 80);
        jf.add(eightButton);

        JButton ninetButton=new JButton("9");
        ninetButton.setBounds(230, 130, 80, 80);
        jf.add(ninetButton);

        JButton fpoButton=new JButton("4");
        fpoButton.setBounds(30, 230, 80, 80);
        jf.add(fpoButton);


        JButton fiveButton=new JButton("5");
        fiveButton.setBounds(130, 230, 80, 80);
        jf.add(fiveButton);

        JButton sixButton=new JButton("6");
        sixButton.setBounds(230, 230, 80, 80);
        jf.add(sixButton);

        JButton threeButton=new JButton("3");
        threeButton.setBounds(30, 330, 80, 80);
        jf.add(threeButton);

        JButton twoButton=new JButton("2");
        twoButton.setBounds(130, 330, 80, 80);
        jf.add(twoButton);


        JButton oneButton=new JButton("1");
        oneButton.setBounds(230, 330, 80, 80);
        jf.add(oneButton);

        JButton dotButton=new JButton(".");
        dotButton.setBounds(30, 430, 80, 80);
        jf.add(dotButton);

        JButton zeButton=new JButton("0");
        zeButton.setBounds(130, 430, 80, 80);
        jf.add(zeButton);


        JButton poneButton=new JButton("=");
        poneButton.setBounds(230, 430, 80, 80);
        jf.add(poneButton);

        JButton dninetButton=new JButton("/");
        dninetButton.setBounds(330, 130, 80, 80);
        jf.add(dninetButton);
        
        JButton zsixButton=new JButton("x");
        zsixButton.setBounds(330, 230, 80, 80);
        jf.add(zsixButton);

        JButton ioneButton=new JButton("-");
        ioneButton.setBounds(330, 330, 80, 80);
        jf.add(ioneButton);

        JButton rponeButton=new JButton("+");
        rponeButton.setBounds(330, 430, 80, 80);
        jf.add(rponeButton);




        jf.setVisible(true);
        


    }
    public static void main(String[] args) {
        new calculatapp();
        


    }

    public void actionperformed(ActionEvent e){
        jf.getContentPane().setBackground(Color.BLUE);
            displaylabel.setText("7");


    }

}