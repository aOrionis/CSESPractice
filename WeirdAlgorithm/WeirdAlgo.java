import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class WeirdAlgo {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer stringTokenizer = new StringTokenizer(bufferedReader.readLine());
        
        long num = Integer.parseInt(stringTokenizer.nextToken());
        StringBuilder answer = new StringBuilder();

        answer.append(num).append(" ");
        while (num != 1) {
            if (num % 2 == 0)
                num /= 2;
            else
                num = num * 3 + 1;
            answer.append(num).append(" ");
        }

        System.out.println(answer);
    }
}