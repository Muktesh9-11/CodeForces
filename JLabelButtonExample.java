import javax.swing.*;
//import java.awt.event.*;

public class JLabelButtonExample {
    public static void main(String[] args) {
        // Create a JFrame
        JFrame frame = new JFrame("JLabel on Button Click");
        frame.setSize(300, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create a JPanel
        JPanel panel = new JPanel();

        // Create a JButton
        JButton button = new JButton("Click Me");
        button.setVisible(true);

        // Create a JLabel (initially hidden)
        JLabel label = new JLabel("Hello, Swing!");
        label.setVisible(false); // Hide the label initially 

        // Add ActionListener to the button
        button.addActionListener(e -> label.setVisible(true));
        button.addActionListener(e -> button.setVisible(false));

        // Add components to the panel
        panel.add(button);
        panel.add(label);

        // Add panel to the frame
        frame.add(panel);

        // Make the frame visible
        frame.setVisible(true);
    }
}
