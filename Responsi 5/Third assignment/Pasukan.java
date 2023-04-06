import java.util.*;

class Pasukan {
    // attribute
    private List<Integer> intList;
    private int n;
    
    // constructor
    public Pasukan(List<Integer> list, int n){
        this.intList = list;
        this.n = n;
    }

    // method
    public void reset(){
        this.intList.clear();
        for (int i = 0; i< this.n; i++){
            this.intList.add(0);
        }
    }

    public long get(int idx){
        this.reset();
        long startTime = Util.getTime();
        intList.get(idx);
        long finishTime = Util.getTime();
        return finishTime - startTime;
    }

    public long del(int idx, int t){
        this.reset();
        long startTime = Util.getTime();
        for(int i= 0; i< t; i++){
            this.intList.remove(idx);
        }
        long finishTime = Util.getTime();
        return finishTime - startTime;
    }
}
