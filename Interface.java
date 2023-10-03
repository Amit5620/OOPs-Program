// What are Interfaces in Java? 

// An Interface in Java programming language is defined as an abstract type used to specify the behavior of a class. An interface in Java is a blueprint of a behavior. A Java interface contains static constants and abstract methods.

// The interface in Java is a mechanism to achieve abstraction. There can be only abstract methods in the Java interface, not the method body. It is used to achieve abstraction and multiple inheritances in Java using Interface. In other words, you can say that interfaces can have abstract methods and variables. It cannot have a method body. Java Interface also represents the IS-A relationship.

// When we decide on a type of entity by its behavior and not via attribute we should define it as an interface.

// Java program to demonstrate working of
// interface
 
 
// A simple interface
interface In1 {
   
    // public, static and final
    final int a = 10;
 
    // public and abstract
    void display();
}
 
// A class that implements the interface.
class TestClass implements In1 {
   
    // Implementing the capabilities of
    // interface.
    public void display(){
      System.out.println("Geek");
    }
 
    // Driver Code
    public static void main(String[] args)
    {
        TestClass t = new TestClass();
        t.display();
        System.out.println(a);
    }
}