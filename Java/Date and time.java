//20180424
package Date;

import java.sql.Date;
import java.text.DateFormat;
import java.text.SimpleDateFormat;

public class SqlTest 
{
    public static void main(String[] args)
    {
        long f=System.currentTimeMillis();
        System.out.println(f);
        Date dt=new Date(f);
        System.out.println(dt);
        DateFormat df=new SimpleDateFormat("dd-MM-yyyy hh:mm:ss");
        System.out.println(df.format(dt));
    }
}