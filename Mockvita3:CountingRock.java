import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
       int s,r;
        Scanner in = new Scanner(System.in);
        s = in.nextInt();
        r = in.nextInt();
        int[] ss = new int[s];
        for(int i = 0 ; i < s ; i++){
            ss[i]=in.nextInt();
        }
        int[][] sr = new int[r][3];
        for(int i = 0 ;  i<r ; i++){
            sr[i][0] = in.nextInt();
            sr[i][1] = in.nextInt();
            sr[i][2] = 0;
        }
        for(int i = 0 ;  i<r ; i++){
            for(int j = 0 ; j < s ; j++){
                if((ss[j] <= sr[i][1]) && (ss[j] >= sr[i][0])) sr[i][2]++;
            }    
        }
        for(int i = 0 ;  i<r ; i++){
            System.out.println(sr[i][2]);
        }
        
        
    }
}


