import java.util.*;

class LinkedHashSetDemo{
    public static void main(String[] args) {
        LinkedHashSet h=new LinkedHashSet();

        h.add("A");
        h.add("B");
        h.add(10);
        h.add("Q");
        h.add(null);
        System.out.println(h);
        System.out.println(h.add("B"));
        
    }
}