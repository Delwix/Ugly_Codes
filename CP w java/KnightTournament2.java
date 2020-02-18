import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class ArraySt {

    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        String[] L = in.readLine().split("\\s");
        int n = Integer.parseInt(L[0]);
        int m = Integer.parseInt(L[1]);
        int[] T = new int[n];
        int r1 = 0;
        int l1 = 0;
        for(int i=0;i<m;i++){
            String[] line = in.readLine().split("\\s");
            int l = Integer.parseInt(line[0]);
            int r = Integer.parseInt(line[1]);
            int x = Integer.parseInt(line[2]);
            if(r1<r && r1>l){
                l = r1;
                r1 = r;
            }
            else {
                if(l1<r && l1>l){
                    r = l1;
                    l1 = l;
                }
            }
            for(int j =l; j<r+1;j++){
                if((j != x) && (T[j-1] == 0)){
                    T[j-1] = x;
                }
            }
            if(r1<r && l1>l) {
                r1 = r;
                l1 = l;
            }
        }
        for(int i = 0;i<n;i++){
            out.print(T[i] + " ");
        }
        out.close();
    }
}
