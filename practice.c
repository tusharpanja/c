import java.util.Scanner;

public class EmployeeSalaryCalculator {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the Employee Name: ");
        String employeeName = scanner.nextLine();

        System.out.print("Enter the percentage of salary (x): ");
        double percentageOfSalary = scanner.nextDouble();

        System.out.print("Enter the Years of Experience: ");
        int yearsOfExperience = scanner.nextInt();

        if (yearsOfExperience <= 0 || yearsOfExperience >= 15) {
            System.out.println("<" + yearsOfExperience + "> is an invalid year of experience");
            return;
        }

        double perMonthSalary = 12000 + (2000 * yearsOfExperience);
        double dayShiftSalary = perMonthSalary * 6;
        double nightShiftSalary = (((perMonthSalary * percentageOfSalary) / 100) + perMonthSalary) * 6;

        if (nightShiftSalary <= 0 || nightShiftSalary >= 20) {
            System.out.println("<" + nightShiftSalary + "> is an invalid night shift salary");
        } else {
            double annualIncome = dayShiftSalary + nightShiftSalary;

            System.out.println("\nEmployee: " + employeeName);
            System.out.println("Annual Income: " + annualIncome);
        }

        scanner.close();
    }
}
