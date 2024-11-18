import java.util.Scanner;

public class AddThreeNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num1, num2, num3, sum;

        System.out.println("Enter the first number: ");
        num1 = scanner.nextInt();

        System.out.println("Enter the second number: ");
        num2 = scanner.nextInt();

        System.out.println("Enter the third number: ");
        num3 = scanner.nextInt();

        sum = num1 + num2 + num3;

        System.out.println("Sum of the three numbers: " + sum);

        scanner.close();
    }
}