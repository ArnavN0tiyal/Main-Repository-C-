import java.util.Scanner;
import java.util.ArrayList;
public class Todo_Manager {
    static int choice;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> Tasks = new ArrayList<String>();
        Tasks.add("Tasks:");
        System.out.println("Welcome to your todo manager");
        int fact = 1 + (int)(Math.random()* 3);
        int secret = 1 + (int)(Math.random()* 999999999);
        if (fact == 1) {
            System.out.println("Fact: I don't know how to use iterators");
        } else if (fact == 2) {
            System.out.println("Fact: I tried making a priority system. It didn't work :(");
        } else if (fact == 3) {
            System.out.println("Fact: I use vscode");
        }
        if (secret > 1) {
            do {
                System.out.print("0) Exit\n1) View tasks\n2) Add task\n3) Remove task\nType the index number of the function you want to use:  ");
                choice = sc.nextInt();
                switch(choice) {
                    case 0:
                    choice = 0;
                    sc.close();
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
        } else if (secret == 999999999) {
        System.out.println("Failed to execute");
          while (1 != 0) {
            System.out.println("Kill the program");
          }
        }
    }
}