import java.util.Scanner;
import java.time.LocalTime;
import java.io.IOException;
public class Terminal {
    static int exit = 1;
    static int print = 1;
    static String username = "User";
    static String brand = "Dell";
    static Process proc;
  public static void main(String[] args) throws IOException {
    LocalTime time = LocalTime.now();
    Scanner sc = new Scanner(System.in);
    Runtime run = Runtime.getRuntime();
    System.out.println("Nevertx NeVerox [Version 1.0]\n(c) Nevertx. All rights unreserved.\n");
    do {
        if (print == 1) {
            System.out.print("C:\\" + username + "\\" + brand + ">");
        } else {
            System.out.print("");
        }
        String cmd = sc.nextLine();
        if (cmd.equalsIgnoreCase("help")) {
            System.out.println("ECHO         Prints a string on the console or turns on or off command echoing\nVERIFY       Verifies if that the files are correctly written to the Devops disk\nTIME         Shows the time\nEXIT         Exits the terminal\nADD          Adds two numbers\nSUB          Subtracts two numbers\nMUL          Multiplies two numbers\nDIV          Divides two numbers\nUSERNAME     Sets your username\nBRANDTYPE    Sets the user's computer brand\nOPEN         Opens a program. To see the list of programs that work, type \"programs\" in the command line\n");
        } else if (cmd.equalsIgnoreCase("echo")) {
            System.out.print("Type the sentence you want to print: ");
            String line = sc.nextLine();
            System.out.println(line + "\n");
        } else if (cmd.equalsIgnoreCase("verify")) {
            int chance = (int)(1 + Math.random()* 1000);
            if (chance >= 1) {
                System.out.println("Files are correctly written to the disk.\n");
            } else if (chance == 1000) {
                System.out.println("Files aren't written correctly to the disk. Please restart the terminal.\n");
                sc.close();
            }
        } else if (cmd.equalsIgnoreCase("time")) {
            System.out.println("The current time is: " + time + "\n");
        } else if (cmd.equalsIgnoreCase("exit")) {
            exit = 0;
            sc.close();
        } else if (cmd.equalsIgnoreCase("add")) {
            System.out.print("Type the first addend: ");
            double addend1 = sc.nextDouble();
            System.out.print("Type the second addend: ");
            double addend2 = sc.nextDouble();
            double sum = addend1 + addend2;
            System.out.println("The sum of " + addend1 + " and " + addend2 + " is " + sum + ".\n");
        } else if (cmd.equalsIgnoreCase("sub")) {
            System.out.print("Type the mineund: ");
            double mineund = sc.nextDouble();
            System.out.print("Type the subtrahend: ");
            double subtrahend = sc.nextDouble();
            double difference = mineund - subtrahend;
            System.out.println("The difference of " + mineund + " and " + subtrahend + " is " + difference + ".\n");
        } else if (cmd.equalsIgnoreCase("mul")) {
            System.out.print("Type the multiplier: ");
            double multiplier = sc.nextDouble();
            System.out.print("Type the multiplicand: ");
            double multiplicand = sc.nextDouble();
            double product = multiplier*multiplicand;
            System.out.println("The product of " + multiplier + " and " + multiplicand + " is " + product + ".\n");
        } else if (cmd.equalsIgnoreCase("div")) {
            System.out.print("Type the dividend: ");
            double dividend = sc.nextDouble();
            System.out.print("Type the divisor: ");
            double divisor = sc.nextDouble();
            if (divisor != 0) {
            double quotient = dividend/divisor;
            double remainder = dividend % divisor;
            System.out.println("The quotient of " + dividend + " and " + divisor + " is " + quotient + " and the remainder is " + remainder + ".\n");
        } else {
            System.out.println("Can't divide by zero.\n");
        }
        } else if (cmd.equalsIgnoreCase("echo on")) {
            print = 1;
        } else if (cmd.equalsIgnoreCase("echo off")) {
            print = 0;
        } else if (cmd.equalsIgnoreCase("username")) {
            System.out.print("Type the username you want it to be: ");
            username = sc.nextLine();
            System.out.println("Successfully set the username to: " + username + ".\n");
        } else if (cmd.equalsIgnoreCase("brand")) {
            System.out.print("Type your laptop brand: ");
            brand = sc.nextLine();
            System.out.println("Successfully changed the laptop brand to: " + brand + ".\n");
        } else if (cmd.equalsIgnoreCase("open")) {
            System.out.print("Type the program you want to open: ");
            String program = sc.nextLine();
            try {
            if (program.equalsIgnoreCase("chrome")) {
                proc = run.exec(new String[]{"chrome","/C","Start"});
            } else if (program.equalsIgnoreCase("edge")) {
                proc = run.exec(new String[]{"C:\\Program Files (x86)\\Microsoft\\Edge\\Application\\msedge.exe"});
            } else if (program.equalsIgnoreCase("Command Prompt") ||
            program.equalsIgnoreCase("cmd")){
                proc = run.exec(new String[]{"cmd","/C","Start"});
            } else if (program.equalsIgnoreCase("calc") ||
            program.equalsIgnoreCase("calculator")) {
                proc = run.exec(new String[]{"calc","/C","Start"});
            } else {
                System.out.println("Unknown Program. Type a vaild program name.\n");
            }
            System.out.println("Running: " + program + "\n"); 
            }
            catch(Exception ex) {
                System.out.println("Failed to execute.\n");
            }
        } else if (cmd.equalsIgnoreCase("programs")) {
            System.out.println("1) CHROME\n2) EDGE\n3) EXPLORER\n4) VSCODE\n5) CALCULATOR\n");
        } else {
            System.out.println("\'" + cmd + "\'" + " is not recognized as a internal or external command.");
        }
  } while (exit != 0);
 }
}