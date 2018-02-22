import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class CandidateCode {
     public static String stringsRepetition(String input1,int input2)
    {
	    //Write code here
	    
	    for(int i=0;i<input2-1;i++)
	     input1=input1.concat(input1);
	     return input1;
    }
  public static void main(String[] args) throws IOException{
        Scanner in = new Scanner(System.in);
        String output;
        String ip1 = in.nextLine().trim();
        int ip2 = Integer.parseInt(in.nextLine().trim());
        output = stringsRepetition(ip1,ip2);
        System.out.println(String.valueOf(output));
    }
}
