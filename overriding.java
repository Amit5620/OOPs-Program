class Animal {
   public void displayInfo() {
      System.out.println("I am an animal.");
   }
}
//extend key word is used
class Dog extends Animal {
   @Override
   public void displayInfo() {
      System.out.println("I am a dog.");
   }
}

class Main {
   public static void main(String[] args) {
      Dog d1 = new Dog();
      d1.displayInfo();
   }
}
