class Couple <K,V>{
    private K key;
    private V value;
    public Couple (K key, V value){
        this.key = key;
        this.value = value;
    }
    public K getKey(){
        return this.key;
    }
    public V getVal(){
        return this.value;
    }
    public void setKey(K key) {
        this.key = key;
    } 
    public void setVal(V value) {
        this.value = value;
    } 
    public <K, V> boolean isEqual(Couple <K, V> C){
        return this.key == C.key && this.value == C.value;
    }
    public <K, V> int nearEQ(Couple <K, V> C){
        if (this.isEqual(C)){
            return 3;
        }else if (this.key == C.key && this.value != C.value){
            return 1;
        }else if (this.key != C.key && this.value == C.value){
            return 2;
        }else if (!this.isEqual(C)){
            return 0;
        }else{
            return -1;
        }
    }
}