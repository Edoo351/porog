import java.util.Scanner;
class SLL<E> {
   private SLLNode<E> first;

   public SLL() {
       // Construct an empty SLL
       this.first = null;
   }

   public void deleteList() {
       first = null;
   }

   public int size() {
       int listSize = 0;
       SLLNode<E> tmp = first;
       while(tmp != null) {
           listSize++;
           tmp = tmp.succ;
       }
       return listSize;
   }

   @Override
   public String toString() {
       String ret = "";
       if (first != null) {
           SLLNode<E> tmp = first;
           ret += tmp.element;
           while (tmp.succ != null) {
               tmp = tmp.succ;
               ret += "->" + tmp.element;
           }
       } else
           ret = "Prazna lista!!!";
       return ret;
   }

   public void insertFirst(E o) {
       SLLNode<E> ins = new SLLNode<>(o, null);
       ins.succ = first;
       first = ins;
   }

   public void insertAfter(E o, SLLNode<E> node) {
       if (node != null) {
           SLLNode<E> ins = new SLLNode<>(o, node.succ);
           node.succ = ins;
       } else {
           System.out.println("Dadenot jazol e null");
       }
   }

   public void insertBefore(E o, SLLNode<E> before) {
       if (first != null) {
           SLLNode<E> tmp = first;
           if (first == before) {
               this.insertFirst(o);
               return;
           }
           while (tmp.succ != before && tmp.succ != null)
               tmp = tmp.succ;
           if (tmp.succ == before) {
               tmp.succ = new SLLNode<>(o, before);
           } else {
               System.out.println("Elementot ne postoi vo listata");
           }
       } else {
           System.out.println("Listata e prazna");
       }
   }

   public void insertLast(E o) {
       if (first != null) {
           SLLNode<E> tmp = first;
           while (tmp.succ != null)
               tmp = tmp.succ;
           tmp.succ = new SLLNode<>(o, null);
       } else {
           insertFirst(o);
       }
   }

   public E deleteFirst() {
       if (first != null) {
           SLLNode<E> tmp = first;
           first = first.succ;
           return tmp.element;
       } else {
           System.out.println("Listata e prazna");
           return null;
       }
   }

   public E delete(SLLNode<E> node) {
       if (first != null) {
           SLLNode<E> tmp = first;
           if (first == node) {
               return this.deleteFirst();
           }
           while (tmp.succ != node && tmp.succ.succ != null)
               tmp = tmp.succ;
           if (tmp.succ == node) {
               tmp.succ = tmp.succ.succ;
               return node.element;
           } else {
               System.out.println("Elementot ne postoi vo listata");
               return null;
           }
       } else {
           System.out.println("Listata e prazna");
           return null;
       }
   }

   public SLLNode<E> getFirst() {
       return first;
   }

   public SLLNode<E> find(E o) {
       if (first != null) {
           SLLNode<E> tmp = first;
           while (!tmp.element.equals(o) && tmp.succ != null)
               tmp = tmp.succ;
           if (tmp.element.equals(o)) {
               return tmp;
           } else {
               System.out.println("Elementot ne postoi vo listata");
           }
       } else {
           System.out.println("Listata e prazna");
       }
       return null;
   }

   public void merge(SLL<E> in) {
       if (first != null) {
           SLLNode<E> tmp = first;
           while (tmp.succ != null)
               tmp = tmp.succ;
           tmp.succ = in.getFirst();
       } else {
           first = in.getFirst();
       }
   }

   public void mirror() {
       if (first != null) {
           SLLNode<E> tmp = first;
           SLLNode<E> newsucc = null;
           SLLNode<E> next;

           while (tmp != null) {
               next = tmp.succ;
               tmp.succ = newsucc;
               newsucc = tmp;
               tmp = next;
           }
           first = newsucc;
       }
   }
}
class SLLNode<E> {
   protected E element;
   protected SLLNode<E> succ;

   public SLLNode(E elem, SLLNode<E> succ) {
       this.element = elem;
       this.succ = succ;
   }
}
class Sll1 {
   public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       SLL<String> sll = new SLL<>();
       int n = sc.nextInt();
       sc.nextLine();
       for (int i = 0; i < n; i++) {
           sll.insertLast(sc.nextLine());
       }
       int L = sc.nextInt();
       System.out.print(sll);
       System.out.println();
       checkAndfirst(sll,L);
   }
   public static void checkAndfirst(SLL<String> sll, int L) {
       SLLNode<String> temp = sll.getFirst();
       boolean found = false;
       int counter = 0;
       while (temp != null) {
           if (temp.element.length()==L) {
               counter++;
           }
           temp = temp.succ;
       }
       int counter1=0;
       SLLNode<String> temp1 = sll.getFirst();
       while (temp1 != null) {
           if (temp1.element.length()==L) {
               counter1++;
           }
           if (counter1==counter) {
               sll.insertFirst(temp1.element);
               sll.delete(temp1);
               break;
           }
           temp1 = temp1.succ;
       }

       System.out.println(sll);
   }
}
