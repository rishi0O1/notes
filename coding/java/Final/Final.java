package coding.java.Final;

public class Final {
    public static void main(String[] args) {
        // cannot be re-assigned to s2 
        final Student s1 = new Student();
        final Student s2 = new Student();

        // s1 = s2 ; 
        
        // constant : cannot re-assign  
        final int a = 12 ; 
        // a = 12; 
    }
}

class Student {
    int rno ;
    String name ;
    float percentage ;
}
