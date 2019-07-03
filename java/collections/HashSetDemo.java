import java.util.*;

class HashSetDemo{
    public static void main(String[] args) {
        HashSet h=new HashSet();

        h.add("A");
        h.add("B");
        h.add(10);
        h.add("Q");
        h.add(null);
        System.out.println(h);
        System.out.println(h.add("B"));
        
    }
}