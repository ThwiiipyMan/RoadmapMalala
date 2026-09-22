import java.util.Scanner;

public class OperCon{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = input.nextInt();
        
        if ((num >=1 && num <= 10) || (num == -1)){
            System.out.println("Good job");
        } else {
            System.out.println("Bad job");
        }
    }
}