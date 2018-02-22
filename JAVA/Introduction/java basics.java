import java.io.*;

import java.util.*;

public class CandidateCode {

   public static void main(String args[] ) throws Exception {


	//Write code here


    String str;int n;float f;
     BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
          str=br.readLine();
           System.out.println(str);
        n=Integer.parseInt(br.readLine());
           System.out.println(n);
        f=Float.parseFloat(br.readLine());
         System.out.printf("%.2f", f);
  }

 }
