import java.util.*;
class PriorityQueueDemo2{
    public static void main(String[] args) {
        PriorityQueue q=new PriorityQueue<String>(16,new MyComparator());
        System.out.println(q.peek());
        // System.out.println(q.element()); //RTE
       
        q.offer("A");
        q.offer("J");
        q.offer("Z");
        q.offer("T");
        q.offer("C");
        System.out.println(q);

        System.out.println(q.poll());
        System.out.println(q);

        System.out.println(q.remove());
        System.out.println(q);

    }
}
class MyComparator implements Comparator{
    public int compare(Object obj1,Object obj2){
        String s1= obj1.toString();
        String s2=obj2.toString();

        return s2.compareTo(s1);
    }
}