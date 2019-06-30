import java.util.*;

class ArrayListDemo{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList a=new ArrayList();
        //ArrayList<Integer> a=new ArrayList<Integer>();
        //int initialCapacity=16;
        //ArrayList l=new ArrayList(int initialCapacity);
        for(int i=0;i<n;i++){
                int t=sc.nextInt();
                a.add(t);
        }


        ArrayList l=new ArrayList();
        l.add("A");
        l.add("B");
        l.add(0,"C");

        
        System.out.println(a);
        Collections.sort(a);
        System.out.println(a);

        a.addAll(l);
        System.out.println(a);

        a.remove(3);
        a.remove(a.indexOf("A"));
        System.out.println(a);

        ListIterator ltr=a.listIterator();
        while(ltr.hasNext()){
            Object temp=ltr.next();
            if(temp.equals(1)){
                System.out.println("changing 1 to 11");
                ltr.set(11);
            }
            System.out.println(temp);
        }
        System.out.println(a);

    }
}
