import java.util.*;
class LinkedListDemo{
    public static void main(String[] args) {
        
        LinkedList l=new LinkedList();
        
        //LinkedList l=new LinkedList<Integer>();

        for(int i=1; i<3;i++){
            l.addFirst(i);
        }
        for(int i=5; i<7;i++){
            l.addLast(i);
        }
        
        System.out.println(l);

        l.add(1,0);
        l.add(4,3);
        System.out.println(l);

        System.out.println("First is "+l.getFirst()+ " Last is "+ l.getLast());

        System.out.println("removing 1st and last");
        l.removeFirst();
        l.removeLast();
        l.remove(2);
        System.out.println(l);


    }
}