/* Read input from STDIN. Print your output to STDOUT*/

import java.io.*;
import java.util.*;
public class Solution {
   public static void main(String args[] ) throws Exception {

	   //Write code here
      Scanner scan = new Scanner(System.in);        
      int len = scan.nextInt();        
      int[] numbers = new int[len];        
      double esum= 0, osum =0;         
      int ecount = 0, ocount = 0;        
      for (int i=0 ; i<len; i++){            
         numbers[i] = scan.nextInt();        
      }        
      for(int i=0; i<len; i++)
      {            
         if(numbers[i]% 2 == 0)
         {                
            esum= esum+ numbers[i];                
            ecount = ecount +1;            
         }            
         else
         {                
            osum = osum+ numbers[i];                
            ocount = ocount +1;            
         }        
      }        
      
      int sum = (int)(Math.round(esum/ecount) + Math.round(osum/ocount));
      System.out.print(sum);
   }
}
