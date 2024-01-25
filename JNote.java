package Note;

import javax.swing.JFrame;
import java.awt.Color;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import javax.swing.JEditorPane;
import javax.swing.JFileChooser;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;

public class JNote {
 static boolean Darkmode = false;
 public static void main(String[] args) {
    final JFrame frame = new JFrame("JNote");
    JEditorPane editor = new JEditorPane();
    JMenuBar menuBar = new JMenuBar();
    JMenu menu = new JMenu("Menu");
    JMenuItem menuItem = new JMenuItem("New");
    JMenuItem menuItem1 = new JMenuItem("Save");
    JMenuItem menuItem2 = new JMenuItem("Load");
    JMenuItem menuItem3 = new JMenuItem("Dark Mode/Light Mode");
    menuItem.addActionListener(e -> {
        editor.setText(null);
    });
    menuItem1.addActionListener(e -> {
        JFileChooser jFileChooser = new JFileChooser("F:");
        int save = jFileChooser.showSaveDialog(null);
        if (save == JFileChooser.APPROVE_OPTION) {
             File file = new File(jFileChooser.getSelectedFile().getAbsolutePath());
                try {
                    FileWriter writer = new FileWriter(file);
                    BufferedWriter write = new BufferedWriter(writer);
                    write.write(editor.getText());
                    write.flush();
                    write.close();
                }
                catch (Exception ex) {
                    JOptionPane.showMessageDialog(frame, ex.getMessage());
                }
        }
    });
    menuItem2.addActionListener(e -> {
                JFileChooser j = new JFileChooser("F:");
                int r = j.showOpenDialog(null);
                if (r == JFileChooser.APPROVE_OPTION) {
                File file = new File(j.getSelectedFile().getAbsolutePath());
                try {
                    String str1 = "", str2= "";
                    FileReader fileReader = new FileReader(file);
                    try (BufferedReader bufferedReader = new BufferedReader(fileReader)) {
                        str2 = bufferedReader.readLine();
                        while ((str1 = bufferedReader.readLine()) != null) {
                            str2 = str2 + "\n" + str1;
                        }
                    }
                    editor.setText(str2);
                }
                catch (Exception ex) {
                    JOptionPane.showMessageDialog(frame, ex.getMessage());
                }
            }
    });
    menuItem3.addActionListener(e -> {
        if (Darkmode == false) {
            editor.setBackground(Color.BLACK);
            editor.setForeground(Color.WHITE);  
            Darkmode = true; 
        } else if (Darkmode == true) {
            editor.setBackground(Color.WHITE);
            editor.setForeground(Color.BLACK); 
            Darkmode = false;  
        }
    });
    menu.add(menuItem);
    menu.add(menuItem1);
    menu.add(menuItem2);
    menu.add(menuItem3);
    menuBar.add(menu);
    frame.add(editor);
    frame.setJMenuBar(menuBar);
    frame.setSize(1000,600);
    frame.setVisible(true);
    frame.setResizable(true);
 }
}