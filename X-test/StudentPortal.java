import java.util.Scanner;
import java.io.File;
import java.io.FileWriter;
import java.io.FileReader;
import java.io.IOException;

class Profile {
    int id;
    String name;
    String dateOfBirth;
    String fatherName;
    String motherName;
    String designation;
    String department;
    String email;
    String phone;
    String address;
    String bloodGroup;
    String religion;
}

class Password {
    int id;
    String password;
}

class StudentWaiver {
    int id;
    float givenWaiver;
    float requiredSGPA;
}

class StudentResult {
    int id;
    float sgpa;
    String subject;
    float averageQuiz, quiz1, quiz2, quiz3;
    float assignment;
    float presentation;
    float attendance;
    float midterm;
    float finalExam;
    float total;
    float gradePoint;
    float labPerformance;
    float labReport;
    float proposal;
}

public class StudentPortal {
    static Profile student = new Profile();
    static Password pass = new Password();
    static StudentWaiver waiver = new StudentWaiver();
    static StudentResult result = new StudentResult();
    static StudentResult mark = new StudentResult();

    public static void main(String[] args) {
        while (true) {
            studentLogin();
        }
    }

    static void studentPaymentLedger(int id) {
        clearConsole();
        System.out.println("\n\n|| Student Portal ||\n\n");
        System.out.println("|| Payment Ledger ||\n\n\n");
        System.out.println("ID: " + id + "\n\n");

        float registrationFee = 25000;
        float tuitionFee = 65000;
        float totalFee = registrationFee + tuitionFee;
        float givenWaiver = 0;
        float requiredSGPA = 0, sgpa = 0;

        try (Scanner scanner = new Scanner(new File("Student Result.txt"));
             Scanner waiverScanner = new Scanner(new File("Student Waiver.txt"))) {

            while (scanner.hasNext()) {
                result.id = scanner.nextInt();
                result.sgpa = scanner.nextFloat();

                if (id == result.id) {
                    sgpa = result.sgpa;
                    System.out.printf("SGPA: %.2f\n\n\n", sgpa);
                    break;
                }
            }

            while (waiverScanner.hasNext()) {
                waiver.id = waiverScanner.nextInt();
                waiver.givenWaiver = waiverScanner.nextFloat();
                waiver.requiredSGPA = waiverScanner.nextFloat();

                if (id == waiver.id) {
                    givenWaiver = waiver.givenWaiver;
                    requiredSGPA = waiver.requiredSGPA;
                    break;
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        System.out.printf("Registration & Tuition Fee: %.2fTk\n\n", totalFee);

        if (sgpa < requiredSGPA) {
            System.out.println("Waiver: 00Tk\n\n");
            System.out.printf("Payable: %.2fTk\n\n", totalFee);
        } else {
            givenWaiver = tuitionFee * givenWaiver;
            totalFee = totalFee - givenWaiver;
            System.out.printf("Waiver: %.2fTk\n\n", givenWaiver);
            System.out.printf("Payable: %.2fTk\n\n", totalFee);
        }

        System.out.print("\n\nPress Enter to continue...");
        new Scanner(System.in).nextLine();
    }

    static void studentResult(int id) {
        // Your code for student result in Java
        // Implement similar file reading and processing logic as in studentPaymentLedger
    }

    static void studentPasswordChange(int id) {
        clearConsole();
        System.out.println("\n\n|| Student Portal ||\n\n");
        System.out.println("|| Password Change ||\n\n\n");

        try (Scanner scanner = new Scanner(new File("Student Password.txt"))) {
            while (scanner.hasNext()) {
                pass.id = scanner.nextInt();
                pass.password = scanner.next();

                if (id == pass.id) {
                    System.out.println("ID: " + pass.id);
                    System.out.print("Enter New Password: ");
                    pass.password = new Scanner(System.in).nextLine();

                    try (FileWriter writer = new FileWriter("Student Password.txt", true)) {
                        writer.write(id + " " + pass.password + "\n");
                    } catch (IOException e) {
                        e.printStackTrace();
                    }

                    System.out.println("\n\nPassword Changed Successfully\n");
                    break;
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        System.out.print("\n\nPress Enter to continue...");
        new Scanner(System.in).nextLine();
    }

    static void studentProfileUpdate(int id) {
        clearConsole();
        System.out.println("\n\n|| Student Portal ||\n\n");
        System.out.println("|| Profile Update ||\n\n\n");

        int found = 0;

        try (Scanner scanner = new Scanner(new File("Student Record.txt"));
             FileWriter writer = new FileWriter("Student Record.txt", true)) {

            while (scanner.hasNext()) {
                student.id = scanner.nextInt();
                student.name = scanner.next();
                student.dateOfBirth = scanner.next();
                student.fatherName = scanner.next();
                student.motherName = scanner.next();
                student.department = scanner.next();
                student.email = scanner.next();
                student.phone = scanner.next();
                student.address = scanner.next();
                student.bloodGroup = scanner.next();
                student.religion = scanner.next();

                if (id == student.id) {
                    System.out.println("ID: " + student.id);
                    System.out.print("Name: ");
                    student.name = new Scanner(System.in).nextLine();
                    System.out.print("Date of Birth: ");
                    student.dateOfBirth = new Scanner(System.in).nextLine();
                    System.out.print("Father's Name: ");
                    student.fatherName = new Scanner(System.in).nextLine();
                    System.out.print("Mother's Name: ");
                    student.motherName = new Scanner(System.in).nextLine();
                    System.out.print("Department: ");
                    student.department = new Scanner(System.in).nextLine();
                    System.out.print("E-mail: ");
                    student.email = new Scanner(System.in).nextLine();
                    System.out.print("Contact Number: ");
                    student.phone = new Scanner(System.in).nextLine();
                    System.out.print("Address: ");
                    student.address = new Scanner(System.in).nextLine();
                    System.out.print("Blood Group: ");
                    student.bloodGroup = new Scanner(System.in).nextLine();
                    System.out.print("Religion: ");
                    student.religion = new Scanner(System.in).nextLine();

                    writer.write(student.id + " " + student.name + " " + student.dateOfBirth + " " +
                            student.fatherName + " " + student.motherName + " " + student.department + " " +
                            student.email + " " + student.phone + " " + student.address + " " + student.bloodGroup +
                            " " + student.religion + "\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0) {
                System.out.println("Please update your profile\n");
            } else {
                System.out.println("\n\nProfile Updated Successfully");
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        System.out.print("\n\nPress Enter to continue...");
        new Scanner(System.in).nextLine();
    }

    static void studentProfile(int id) {
        clearConsole();
        System.out.println("\n\n|| Student Portal ||\n\n");
        System.out.println("|| Profile ||\n\n\n");

        int found = 0;

        try (Scanner scanner = new Scanner(new File("Student Record.txt"))) {
            while (scanner.hasNext()) {
                student.id = scanner.nextInt();
                student.name = scanner.next();
                student.dateOfBirth = scanner.next();
                student.fatherName = scanner.next();
                student.motherName = scanner.next();
                student.department = scanner.next();
                student.email = scanner.next();
                student.phone = scanner.next();
                student.address = scanner.next();
                student.bloodGroup = scanner.next();
                student.religion = scanner.next();

                if (id == student.id) {
                    found = 1;
                    break;
                }
            }

            if (found == 1) {
                System.out.println("ID: " + student.id);
                System.out.println("Name: " + student.name);
                System.out.println("Date of Birth: " + student.dateOfBirth);
                System.out.println("Father's Name: " + student.fatherName);
                System.out.println("Mother's Name: " + student.motherName);
                System.out.println("Department: " + student.department);
                System.out.println("E-mail: " + student.email);
                System.out.println("Contact Number: " + student.phone);
                System.out.println("Address: " + student.address);
                System.out.println("Blood Group: " + student.bloodGroup);
                System.out.println("Religion: " + student.religion);
            } else {
                System.out.println("Please update your profile\n");
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        System.out.print("\n\nPress Enter to continue...");
        new Scanner(System.in).nextLine();
    }

    static void studentDashboard(int id) {
        while (true) {
            clearConsole();
            System.out.println("\n\n|| Student Portal ||\n\n\n");
            System.out.println("ID : " + id + "\n\n");
            System.out.println("1. Profile");
            System.out.println("2. Profile Update");
            System.out.println("3. Password Change");
            System.out.println("4. Result");
            System.out.println("5. Payment Ledger");
            System.out.println("6. Logout\n\n");
            System.out.print("Select an option: ");

            try (Scanner scanner = new Scanner(System.in)) {
                int option = scanner.nextInt();

                if (option == 1) {
                    studentProfile(id);
                } else if (option == 2) {
                    studentProfileUpdate(id);
                } else if (option == 3) {
                    studentPasswordChange(id);
                } else if (option == 4) {
                    studentResult(id);
                } else if (option == 5) {
                    studentPaymentLedger(id);
                } else if (option == 6) {
                    return;
                }
            }
        }
    }

    static void studentLogin() {
        clearConsole();
        int id;
        String password;

        System.out.println("\n\n|| Student Login ||\n\n\n");
        System.out.print("Enter Your ID: ");

        try (Scanner scanner = new Scanner(System.in)) {
            id = scanner.nextInt();
            System.out.print("Enter Your Password: ");
            password = scanner.next();
        }

        int found = 0;

        try (Scanner scanner = new Scanner(new File("Student Password.txt"))) {
            while (scanner.hasNext()) {
                pass.id = scanner.nextInt();
                pass.password = scanner.next();

                if (id == pass.id) {
                    found = 1;
                    break;
                }
            }

            if (found == 1) {
                if (password.equals(pass.password)) {
                    studentDashboard(id);
                    return;
                } else {
                    System.out.println("\n\nIncorrect Password\n");
                }
            } else {
                System.out.println("\n\nIncorrect ID\n");
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        System.out.print("\n\nPress Enter to continue...");
        new Scanner(System.in).nextLine();
    }

    static void clearConsole() {
        // Implementation to clear the console in Java (may not work in all environments)
        try {
            if (System.getProperty("os.name").contains("Windows")) {
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                System.out.print("\033[H\033[2J");
                System.out.flush();
            }
        } catch (IOException | InterruptedException e) {
            e.printStackTrace();
        }
    }
}

