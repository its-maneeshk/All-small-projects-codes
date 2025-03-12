public class ForEachLoop {
    public static void main(String[] args) {
        String[] students = {"Ram","Shyam","Hari","Gita","Ashwathama"};

        System.out.println("Size: " + students.length);
        System.out.println("Student at second position " + students[1]);

        for(String student : students) {
            System.out.println(student);
        }

    }
}
