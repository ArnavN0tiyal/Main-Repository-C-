package terminal;
import java.util.ArrayList;
import java.util.Scanner;
import java.time.LocalTime;
import java.io.IOException;

public class Terminal {
    static int exit = 1;
    static int print = 1;
    static String username = "User";
    static String brand = "Dell";
    static Process proc;
    static Scanner sc = new Scanner(System.in);
    static Runtime run = Runtime.getRuntime();
    static int choice;
    static String default_brand = "Dell";
    static String default_username = "User";
    static String confirm;
public static void main(String[] args) throws IOException {
    System.out.println("Nevertx NeVerox Java [Version 1.1.3140.2560]\n(c) Nevertx. All rights unreserved.\n");
    do {
        if (print == 1) {
            System.out.print("C:\\" + username + "\\" + brand + ">");
        } else;
        String cmd = sc.nextLine();
        executeCmd(cmd);
    } while (exit != 0);
  }
public static void executeCmd(String cmd) throws IOException {
            switch(cmd) {
                case "help":
                case "Help":
                case "HELP":
                help();
                break;
                case "echo":
                case "Echo":
                case "ECHO":
                echo();
                break;
                case "echo on":
                case "Echo on":
                case "Echo On":
                case "ECHO ON":
                echo_on();
                break;
                case "echo off":
                case "Echo off":
                case "Echo Off":
                case "ECHO OFF":
                echo_off();
                break;
                case "verify":
                case "Verify":
                case "VERIFY":
                verify();
                break;
                case "time":
                case "Time":
                case "TIME":
                showtime();
                break;
                case "exit":
                case "Exit":
                case "EXIT":
                exit();
                break;
                case "add":
                case "Add":
                case "ADD":
                addition();
                break;
                case "sub":
                case "Sub":
                case "SUB":
                subtraction();
                break;
                case "mul":
                case "Mul":
                case "MUL":
                multiplication();
                break;
                case "div":
                case "Div":
                case "DIV":
                division();
                break;
                case "username":
                case "Username":
                case "USERNAME":
                username();
                break;
                case "brandtype":
                case "Brandtype":
                case "BrandType":
                case "BRANDTYPE":
                brandtype();
                break;
                case "open":
                case "Open":
                case "OPEN":
                applications();
                break;
                case "programs":
                case "Programs":
                case "PROGRAMS":
                programs();
                break;
                case "shutdown /?":
                case "Shutdown /?":
                case "SHUTDOWN /?":
                case "shutdown":
                case "Shutdown":
                case "SHUTDOWN":
                shutdown();
                break;
                case "shutdown /i":
                case "Shutdown /i":
                case "SHUTDOWN /i":
                shutdown_1();
                break;
                case "shutdown /l":
                case "Shutdown /l":
                case "SHUTDOWN /l":
                shutdown_2();
                break;
                case "shutdown /s":
                case "Shutdown /s":
                case "SHUTDOWN /s":
                shutdown_3();
                break;
                case "shutdown /sg":
                case "Shutdown /sg":
                case "SHUTDOWN /sg":
                shutdown_4();
                break;
                case "shutdown /r":
                case "Shutdown /r":
                case "SHUTDOWN /r":
                shutdown_5();
                break;
                case "shutdown /g":
                case "Shutdown /g":
                case "SHUTDOWN /g":
                shutdown_6();
                break;
                case "shutdown /a":
                case "Shutdown /a":
                case "SHUTDOWN /a":
                shutdown_7();
                break;
                case "shutdown /p":
                case "Shutdown /p":
                case "SHUTDOWN /p":
                shutdown_8();
                break;
                case "shutdown /h":
                case "Shutdown /h":
                case "SHUTDOWN /h":
                shutdown_9();
                case "java list":
                case "Java list":
                case "Java List":
                case "JAVA LIST":
                java_list();
                break;
                case "java project":
                case "Java project":
                case "Java Project":
                case "JAVA PROJECT":
                java_project();
                break;
                case "todo manager":
                case "Todo manager":
                case "Todo Manager":
                case "TODO MANAGER":
                Todo_Manager();
                break;
                default:
                if (!cmd.isEmpty()) {
                    System.out.println("\'" + cmd + "\'" + " is not recognized as a internal or external command.\n");
                } else;
                break;
            }
}

public static void help() {
    System.out.println("ECHO         Prints a string on the console or turns on or off command echoing\nVERIFY       Verifies if that the files are correctly written to the Devops disk\nTIME         Shows the time\nEXIT         Exits the terminal\nADD          Adds two numbers\nSUB          Subtracts two numbers\nMUL          Multiplies two numbers\nDIV          Divides two numbers\nUSERNAME     Sets your username\nBRANDTYPE    Sets the user's computer brand\nOPEN         Opens a program. To see the list of programs that work, type \"programs\" in the command line\nSHUTDOWN     Allows proper and local shutdown of the computer\nJAVA LIST    Gives a bit of help about java lists\nJAVA PROJECT Gives some projects to do in java\nTODO MANAGER Runs a todo manager\n");
}

public static void echo() {
    System.out.print("Type the sentence you want to print: ");
    String line = sc.nextLine();
    System.out.println(line + "\n");
}

public static void echo_on() {
    print = 1;
}

public static void echo_off() {
    print = 0;
}

public static void verify() {
        int chance = (int)(1 + Math.random()* 1000);
        if (chance >= 1) {
            System.out.println("Files are correctly written to the disk.\n");
        } else if (chance == 1000) {
            System.out.println("Files aren't written correctly to the disk. Please restart the terminal.\n");
            sc.close();
        }
}

public static void showtime() {
    LocalTime time = LocalTime.now();
    System.out.println("The current time is: " + time + "\n");
}

public static void exit() {
    exit = 0;
    sc.close();
}

public static void addition() {
    System.out.print("Type the first addend: ");
    double addend1 = sc.nextDouble();
    System.out.print("Type the second addend: ");
    double addend2 = sc.nextDouble();
    double sum = addend1 + addend2;
    System.out.println("The sum of " + addend1 + " and " + addend2 + " is " + sum + ".\n");
}

public static void subtraction() {
    System.out.print("Type the mineund: ");
    double mineund = sc.nextDouble();
    System.out.print("Type the subtrahend: ");
    double subtrahend = sc.nextDouble();
    double difference = mineund - subtrahend;
    System.out.println("The difference of " + mineund + " and " + subtrahend + " is " + difference + ".\n");
}

public static void multiplication() {
    System.out.print("Type the multiplier: ");
    double multiplier = sc.nextDouble();
    System.out.print("Type the multiplicand: ");
    double multiplicand = sc.nextDouble();
    double product = multiplier*multiplicand;
    System.out.println("The product of " + multiplier + " and " + multiplicand + " is " + product + ".\n");
}

public static void division() {
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
}

public static void username() {
    System.out.print("Type the username you want it to be: ");
    username = sc.nextLine();
    System.out.println("Successfully set the username to: " + username + ".\n");
}

public static void brandtype() {
    System.out.print("Type your laptop brand: ");
    brand = sc.nextLine();
    System.out.println("Successfully changed the laptop brand to: " + brand + ".\n");
}

public static void applications() {
    System.out.print("Type the program you want to open: ");
    String program = sc.nextLine();
    try {
    switch(program) {
        case "edge":
        case "Edge":
        case "EDGE":
        proc = run.exec(new String[]{"C:\\Program Files (x86)\\Microsoft\\Edge\\Application\\msedge.exe"});
        break;
        case "command prompt":
        case "Command Prompt":
        case "COMMAND PROMPT":
        case "cmd":
        case "Cmd":
        case "CMD":
        proc = run.exec(new String[]{"cmd","/C","Start","Nevertx Promopt"});
        break;
        case "calculator":
        case "CALCULATOR":
        case "calc":
        case "CALC":
        proc = run.exec(new String[]{"calc","/C","Start"});
        break;
        case "vscode":
        case "Vscode":
        case "VSCODE":
        case "visual studio code":
        case "Visual studio code":
        case "Visual Studio Code":
        case "VISUAL STUDIO CODE":
        case "code":
        case "Code":
        case "CODE":
        proc = run.exec(new String[]{"cmd","/K","code"});
        break;
        default:
        System.out.println("Unknown Program. Type a vaild program name.\n");
        break;
     }
    }
    catch(Exception ex) {
        System.out.println("Failed to execute.\n");
    }
}

public static void programs() {
    System.out.println("1) EDGE\n2) EXPLORER\n3) VSCODE\n4) CALCULATOR\n");
}

public static void shutdown() {
    System.out.println("How to use: shutdown /i, /l, /s, /sg, /r, /g, /a, /p, /h\nNo args    This is the same as doing /?\n/i         Shows the graphical user interface\n/?         Gives the type of shutdown the user can do\n/l         Logs off the computer\n/s         Complete shutdown of the computer\n/sg        Shutdowns the computer. Then on the next boot, if automatic sign in is enabled then it will automaticly sign in to the user's computer\n/r         Shutdowns then restarts\n/g         Shutdowns and restarts. After the system is rebooted, if automatic sign in is enabled, the user will automaticly sign in\n/a         Abort a system shutdown *Can only be used in time out period*\n/p         Turns off the computer without any warning or time out\n/h         Hibernate the local computer\n");
}
public static void shutdown_1() throws IOException {
    System.out.print("Are you sure?\nType yes or no: ");
    confirm = sc.nextLine();
    if (confirm.equalsIgnoreCase("yes")) {
        proc = run.exec(new String[]{"cmd","/C","Start","shutdown", "/i"});
    } else {
        System.out.print("\n");
    }
}

public static void shutdown_2() throws IOException {
      System.out.print("Are you sure?\nType yes or no: ");
      confirm = sc.nextLine();
      if (confirm.equalsIgnoreCase("yes")) {
        proc = run.exec(new String[]{"cmd","/C","Start","shutdown", "/l"});
    } else {
        System.out.print("\n");
    }
}

public static void shutdown_3() throws IOException {
      System.out.print("Are you sure?\nType yes or no: ");
      confirm = sc.nextLine();
      if (confirm.equalsIgnoreCase("yes")) {
        proc = run.exec(new String[]{"cmd","/C","Start","shutdown", "/s"});
    } else {
        System.out.print("\n");
    }
}

public static void shutdown_4() throws IOException {
     System.out.print("Are you sure?\nType yes or no: ");
     confirm = sc.nextLine();
     if (confirm.equalsIgnoreCase("yes")) {
        proc = run.exec(new String[]{"cmd","/C","Start","shutdown", "/sg"});
    } else {
        System.out.print("\n");
    }
}

public static void shutdown_5() throws IOException {
      System.out.print("Are you sure?\nType yes or no: ");
      confirm = sc.nextLine();
      if (confirm.equalsIgnoreCase("yes")) {
        proc = run.exec(new String[]{"cmd","/C","Start","shutdown", "/r"});
    } else {
        System.out.print("\n");
    }
}

public static void shutdown_6() throws IOException {
      System.out.print("Are you sure?\nType yes or no: ");
      confirm = sc.nextLine();
      if (confirm.equalsIgnoreCase("yes")) {
        proc = run.exec(new String[]{"cmd","/C","Start","shutdown", "/g"});
    } else {
        System.out.print("\n");
    }
}

public static void shutdown_7() throws IOException {
     System.out.print("Are you sure?\nType yes or no: ");
     confirm = sc.nextLine();
     if (confirm.equalsIgnoreCase("yes")) {
        proc = run.exec(new String[]{"cmd","/C","Start","shutdown", "/a"});
    } else {
        System.out.print("\n");
    }
}

public static void shutdown_8() throws IOException {
      System.out.print("Are you sure?\nType yes or no: ");
      confirm = sc.nextLine();
      if (confirm.equalsIgnoreCase("yes")) {
        proc = run.exec(new String[]{"cmd","/C","Start","shutdown", "/p"});
    } else {
        System.out.print("\n");
    }
}

public static void shutdown_9() throws IOException {
      System.out.print("Are you sure?\nType yes or no: ");
      confirm = sc.nextLine();
      if (confirm.equalsIgnoreCase("yes")) {
        proc = run.exec(new String[]{"cmd","/C","Start","shutdown", "/h"});
    } else {
        System.out.print("\n");
    }
 }

public static void java_list() {
        System.out.println("Math Functions:\n1) abs(x)\n2) acos(x)\n3) asin(x)\n4) atan(x)\n5) atan2(y,x)\n6) coordinates(x, y)\n7) brt(x)\n8) ceil(x)\n9) copySign(x, y)\n10) cos(x)\n11) cosh(x)\n12) exp(x)\n13) expm1(x)\n14) floor(x)\n15) getExponent(x)\n16) hypot(x, y)\n17) IEEEremainder(x, y)\n18) log(x)\n19) log10(x)\n20) log1p(x)\n21) doublemax(x, y)\n22) min(x, y)\n23) extAfter(x, y)\n24) nextUp(x)\n25) pow(x, y)\n26) random()\n27) round(x)\n28) rint(x)\n29) signum(x)\n30) sin(x)\n31) sinh(x)\n32) sqrt(x)\n33) tan(x)\n34) tanh(x)\n35) toDegrees(x)\n36) toRadians(x)\n37) ulp(x)"); 
        System.out.println("ArrayLists:\nFormat - ArrayList<VarType> myArrayListName = new ArrayList<VarType>();\nFunctions:\n1) arraylist.add(\"Hello World\");\n2) arraylist.remove(0);\n3) arraylist.clear();\n4) arraylist.size();\n5) arraylist.get(0);\n6) arraylist.set(0, \"Hello World\")\nHow to loop through a arraylist:\nfor (int i = 0; i < arraylist.size(); i++) {\n System.out.println(arraylist.get(i));\n}\nor\nfor (String i : arraylist) {\n System.out.println(arraylist)\n}");
        System.out.println("Linked List is the same as arraylists but with extra functions. They're:\n1) addFirst();\n2) addLast();\n3) removeFirst();\n4) removeLast();\n5) getFirst();\n6) getLast();");
        System.out.println("Hashmap:\nFormat - Hashmap<VarType, VarType> myhashmapname = new Hashmap<VarType, VarType>();\nFunctions\n1) hashmap.put(\"Hello World\");\n2) hashmap.get(0);\n3) hashmap.remove(0);\n4) hashmap.clear();\n5) hashmap.size();\nHow to loop through hashmaps *Keys*:\nfor (String i : hashmap.keys()) {\n System.out.println(i)\n}\nValues:\nfor (String i : hashmap.values()) {\n System.out.println(i)\n}");
        System.out.println("Hashset:\nFormat is same as arraylists or linkedlists\nFunctions:\n1) hashset.add(\"Hello World\");\n2) hashset.contains(\"Hello World\");\n3) hashset.remove(0);\n4) hashset.clear();\n5) hashset.size();\nLooping through a hashmap is also the same as arraylists and linkedlists");
        System.out.println("Wrapper Classes:\nWe can't do ArrayList<int> array = new ArrayList<int>(); etc with any list type, instead, we use wrapper classes, like: Integer x = 10;, ArrayList<Boolean> array = new ArrayList<Boolean>(); etc. The types are:\n1) int to Integer\n2) float to Float\n3) double to Double\n4) boolean to Boolean\n5) char to Character\nWe can also get certain information about variables, Here are some functions which get certain information about variables:\n1) intvalue()\n2) byteValue()\n3) shortValue()\n4) longValue()\n5) floatValue()\n6) doubleValue()\n7) charValue()\n8) booleanValue()\n");
 }
public static void java_project() {
    System.out.println("Projects: 1) Number Guessing Game 2) Temperature Converter 3) Simple Chat Application 4) Guess the Word Game 5) Rock, Paper, Scissors Game 6) Basic ATM Simulator\n");
 }
public static void Todo_Manager() {
    ArrayList<String> Tasks = new ArrayList<String>();
    Tasks.add("Tasks:");
    System.out.println("Welcome to your todo manager");
    do {
        System.out.print("0) Exit\n1) View tasks\n2) Add task\n3) Remove task\nType the index number of the function you want to use: ");
        choice = sc.nextInt();
        switch(choice) {
        case 0:
        choice = 0;
        break;
        case 1:
        if (Tasks.size() == 1) {
          System.out.println("No tasks");
        } else {
         for (String i : Tasks) {
           System.out.println(i);
         }
        }
        break;
        case 2:
        String line = sc.nextLine();
        System.out.print("Type your task: ");
        line = sc.nextLine();
        Tasks.add(Tasks.size() + ". " + line);
        System.out.println("Succesfully added the task: " + line);
        break;
        case 3:
        if (Tasks.size() == 1) {
          System.out.println("No task to remove");
        } else { 
            for (String i : Tasks) {
                System.out.println(i);
            }
        System.out.print("Type the index number of the task you want to remove: ");
        int remove = sc.nextInt();
        System.out.println("Successfully removed the task: " + Tasks.get(remove));
        Tasks.remove(remove);
        }
        break;
        default:
        System.out.println("Type a vaild choice number");
      }
    } while(choice != 0);
 }
}
