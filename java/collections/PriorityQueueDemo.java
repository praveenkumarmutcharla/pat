import java.util.*;
class PriorityQueueDemo{
    public static void main(String[] args) {
        PriorityQueue q=new PriorityQueue<Integer>();
        System.out.println(q.peek());
        // System.out.println(q.element()); //RTE
        for(int i=0;i<10;i++)
            q.offer(i);
        System.out.println(q);

        System.out.println(q.poll());
        System.out.println(q);

        System.out.println(q.remove());
        System.out.println(q);

    }
}