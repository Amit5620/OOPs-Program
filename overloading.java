// Write 2 seperate programs to show the use of method overloading and method overriding

class InnerA {

    int area(int l, int b){
        int area = l*b;
        return area;
    }

    int volume(int l, int b, int h){
        int volume = l*b*h;
        return volume;
    }
    
}

class overloading {
    public static void main(String[] args) {
        InnerA obj = new InnerA();
        System.out.println("The area of given data is: " +obj.area(12, 10));
        System.out.println("The volume of the given data is: " +obj.volume(12, 10, 32));
    }
}
