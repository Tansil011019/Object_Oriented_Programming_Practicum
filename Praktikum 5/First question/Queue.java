import java.util.ArrayList;

public class Queue <T> {

  private ArrayList <T> data;

  private int lastElmIdx, size; 

  private final static int DEFAULT_QUEUE_SIZE = 500;



//Instantiate dengan size default

  public Queue(){
    this.data = new ArrayList<T>(DEFAULT_QUEUE_SIZE);
    this.size = DEFAULT_QUEUE_SIZE;
  }

//Instantiate dengan size = n

  public Queue(int n){
    this.data = new ArrayList<T>(n);
    this.size = n;
    this.lastElmIdx = -1;
  }

//Copy queue

  public Queue(final Queue q){
    this.data = new ArrayList<T>(q.size);
    this.data = q.data;
    this.lastElmIdx = q.lastElmIdx;
    this.size = q.size;
  }

  public void push(T t){
    this.data.add(t);
    this.lastElmIdx += 1;
  }

  public T pop(){
    T temp = this.data.remove(0);
    this.lastElmIdx -=1;
    return temp;
  }

  public boolean isEmpty(){
    return this.data.size() == 0;
  }

  public boolean isFull(){  
    return this.data.size() == this.size;
  }
}