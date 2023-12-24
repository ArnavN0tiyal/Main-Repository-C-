import java.util.*;

class Main {
  public static void main(String[] args) {
    System.out.println("Basic Calculator:");
    int infinitelooper = 1;
    int infinitelooperx = 2;
    do{
    Scanner sc = new Scanner(System.in);
     System.out.println("1) Add");
     System.out.println("2) Subtract");
     System.out.print("Type your choice: ");
     int choice = sc.nextInt();
     switch(choice) {
      case 1:
      System.out.print("Type the first number to add: ");
      double addend1 = sc.nextDouble();
      System.out.print("Type the second number: ");
      double addend2 = sc.nextDouble();
      double sum = addend1 + addend2;
      System.out.println("The sum of " + addend1 + " and " + addend2 + " is: " + sum);
      break;
      case 2:
      System.out.print("Type the minuend: ");
      double minuend = sc.nextDouble();
      System.out.print("Type the subtrahend: ");
      double subtrahend = sc.nextDouble();
      double difference = minuend - subtrahend;
      System.out.println("The difference of " + minuend + " and " + subtrahend + " is: " + difference);
    }
  }
    while(infinitelooper != infinitelooperx);
  }
}