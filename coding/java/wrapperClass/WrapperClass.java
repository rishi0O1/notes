package coding.java.wrapperClass;

// here it means like subset of primitive type 
public class WrapperClass {
    // Integer a = 12 ;    
    // Integer b = 12 ;
    // we have same object reference in a nd b as values are same 

    // Integer a = 12 ;    
    // Integer b = 13 ;
    // we dont have same object reference in a nd b as values are same 
    public static void main(String[] args) {
        Integer a = 12 ;    
        Integer b = 12 ;    // here Integer is a class and b is object so it should pass by reference 
        
        swap(a, b);
        System.out.println(" a " + a);  // not swapping the integer 
        System.out.println(" b " + b); // why ? : as Integer class is final 

        // System.out.println(b.toString()); // a.toString() not available 
        
        System.out.println(a == b);
    }

    static void swap(Integer a , Integer b){
        Integer temp = a ;
        a = b ;
        b = temp ;
    }
}
