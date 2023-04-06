import java.util.HashSet;

public class GameKata {
    public static void run(String[] tito, String[] wiwid) {
        HashSet<String> set = new HashSet<String>();
        for (String titoWord : tito){
            for(String wiwidWord : wiwid){
                if(titoWord.equals(wiwidWord)){
                    set.add(titoWord);
                }
            }
        }
        for(String element: set){
            System.out.println(element);
        }
    }
    // public static void main(String[] args){
    //     String[] tito = {"Imba", "Adalah", "Dia"};
    //     String[] wiwid = {"Imba", "Adalah", "Imba", "Adalah"};
    //     run(tito, wiwid);
    // }
}