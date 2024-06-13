import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class MissingNumber {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer stringTokenizer = new StringTokenizer(bufferedReader.readLine());

        int num = Integer.parseInt(stringTokenizer.nextToken());
        long sum = 0;

        String[] allVals = bufferedReader.readLine().split(" ");

        
        for (int i = 0; i < allVals.length; i++)
            sum += Long.parseLong(allVals[i]);

        System.out.println(sum);

        long requiredSum = (num * (num + 1)) / 2;

        System.out.println(requiredSum);

        System.out.println(requiredSum - sum);
    }
}