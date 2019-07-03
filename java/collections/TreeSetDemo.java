import java.util.*;
class TreeSetDemo{
    public static void main(String[] args) {
        TreeSet t=new TreeSet();

        for(int i=8;i>0;i--)
            t.add(i);
        
        System.out.println(t);
        
        // t.add("G"); // ClassCastException
        // t.add(null); // NullPointerException

        TreeSet s=new TreeSet(new MyComparator());
        
        s.add(new StringBuffer("A"));
        s.add(new StringBuffer("D"));
        s.add(new StringBuffer("Z"));
        s.add(new StringBuffer("U"));

        System.out.println(s);

    }
}

class MyComparator implements Comparator{
    public int compare(Object obj1,Object obj2){
        String s1= obj1.toString();
        String s2=obj2.toString();

        return s2.compareTo(s1);
        // return -s1.compareTo(s2);
        // return +1; // insertion order
        // return -1; // reverse of insertion order
        // return 0 // nothing will added
        
    }
}

