package coding.java.OOPS;

// static method can access only static data e.g main 

public class Static {
    public static void main(String[] args) {
        Student1 s1 = new Student1();
        Student1 s2 = new Student1();
        System.out.println(s1.name);
        s1.name = "rishij";
        System.out.println(Student1.population);
    }
}

class Student1 {
    int rno;
    String name;
    float percentage;
    static int population;

    Student1() {
        this.rno = 1;
        this.name = "rishij";
        this.percentage = 100;
        Student1.population += 1;
    }
}
