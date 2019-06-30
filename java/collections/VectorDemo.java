import java.util.*;
class VectorDemo{
    public static void main(String[] args) {
        
        Vector v=new Vector();
        for( char i='A' ; i<'H'; i++){
            v.addElement(i);
        }

        System.out.println(v);

        v.removeElement('B');

        System.out.println(v.elementAt(3));
        System.out.println("First is "+v.firstElement() + " Last is "+ v.lastElement());

        System.out.println("Size is "+v.size() + " Capacity is "+ v.capacity());

        for(int i=0;i<v.size();i++){
            
            if((v.elementAt(i)).equals('D')){
                v.set(i,'z');
            }
            System.out.println(v.elementAt(i));
        }
    }
}