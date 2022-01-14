//20180424
package DateDemo;

import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

public class Test 
{
    public static void main(String[] args)
    {
        Date dt=new Date();
        System.out.println(dt);
        //System.out.println(dt.getYear());
        DateFormat df=new SimpleDateFormat("dd-MM-yyyy hh:mm:ss");
        System.out.println(df.format(dt));
        
        Calendar cal=Calendar.getInstance();
        System.out.println(cal.get(Calendar.MILLISECOND));
        
    }
}