import java.util.*;
class StackDemo{
    public static void main(String[] args) {
        Stack s=new Stack();
        for(int i=0;i<4;i++)
            s.push(i);
        System.out.println(s.peek());
        System.out.println(s.pop());
        System.out.println(s);
        System.out.println(s.empty());
        System.out.println(s.search(2));
    }
}