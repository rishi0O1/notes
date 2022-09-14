package coding.java.OOPS;

public class Student {

    public static void main(String[] args) {
        StudentTemplate s1 = new StudentTemplate(); // dynamic memmory allocation , object ko bhi initializa krna hai mandatory 
        
        // shallow copy
        StudentTemplate s2 = s1 ;   // heap mem mai object hai dono ek he ko refer krre , sane signature hai 
        System.out.println(s2); // coding.java.OOPS.StudentTemplate@1db9742
        System.out.println(s2); // coding.java.OOPS.StudentTemplate@1db9742

      
    }
}


class StudentTemplate {
    int rno ;
    String name ;
    float percentage ;

    // StudentTemplate(){
    //     rno = 1 ;
    //     name = "rishij" ;
    //     percentage = 100 ;
    // }

    @Override
    protected void finalize() throws Throwable {
        super.finalize();
        System.out.println("dectrutor called ");
    }
}
