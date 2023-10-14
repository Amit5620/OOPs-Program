abstract class Car  
{   
   abstract void start();  
   public void stop()  
   {  
      System.out.println("The car engine is not started.");  
   }  
}  
public class Owner extends Car  
{  
   void start()  
   {  
       System.out.println("The car engine has been started.");  
   }  
   public static void main(String[] args)  
   {  
      Owner obj = new Owner();  
      obj.start();    
      obj.stop();  
   }  
}  
