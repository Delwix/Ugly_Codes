import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

//Timeout
public class KnightTournament {

    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);
    public static int search(int[][] D,int p,int ln){
        int k = p+1;
        for(int i=0;i<ln;i++){
            if ((k >= D[i][0]) && (k<= D[i][1]) && (k != D[i][2])){
                return(D[i][2]);
            }
        }
        return(0);
}
    public static void main(String[] args) throws IOException {
        String[] L = in.readLine().split("\\s");
        int n = (int) Long.parseLong(L[0]);
        int m = (int) Long.parseLong(L[1]);
        int[][] D = new int[m][3];
        for(int i=0;i<m;i++){
            String[] line = in.readLine().split("\\s");
            D[i][0] = (int) Long.parseLong(line[0]);
            D[i][1] = (int) Long.parseLong(line[1]);
            D[i][2] = (int) Long.parseLong(line[2]);
        }
        for(int i=0;i<n;i++){
            int x = search(D,i,m);
            out.print(x);
            out.print(" ");
        }
        out.close();
    }
}
