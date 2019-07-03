import java.util.*;
class ComparatorTreeSetDemo{
    public static void main(String[] args) {
        TreeSet t=new TreeSet(new MyComparator());

        t.add(new StringBuffer("Apple"));
        t.add(new StringBuffer("Doll"));
        t.add("search");
        t.add(new StringBuffer("Zebra"));
        t.add("mail");
        t.add(new StringBuffer("Unix"));

        System.out.println(t);
    }
}
 
class MyComparator implements Comparator{
    public int compare(Object obj1,Object obj2) {
        String s1= obj1.toString();
        String s2=obj2.toString();

        int l1=s1.length();
        int l2=s2.length();

        if(l1>l2){
            return 1;
        }
        if(l1<l2){
            return -1;
        }
        else{
            return s1.compareTo(s2);
        }

        
    }
}