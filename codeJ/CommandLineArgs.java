public class CommandLineArgs {
    public static void main(String[] args) {
        // Checking if arguments are provided
        if (args.length == 0) {
            System.out.println("No command-line arguments provided.");
        } else {
            System.out.println("Command-line arguments:");
            // Looping through and printing each argument
            for (String arg : args) {
                System.out.println(arg);
            }
        }
    }
}
