import javax.swing.*;    
public class OOPS {    
   
 public static void main(String[] args) {    
    JFrame x = new JFrame("java test");
    JLabel z=new JLabel("First Label");
    JButton y= new JButton();
    y.add(z);
    z.setBounds(0,0,150,200);
    y.setBounds(0,0,150,200);
    x.add(y);
    x.setSize(500,500);
    x.setLayout(null);
    x.setVisible(true);
 }    
}