class A
{
    public static void main(String[] args)
    {
        int a=25,b=-8;

		System.out.println("Hu ha");
		/*if(System.out.print(5+2)) 
		Sop in Java returns nothing. scanf, printf in C, cout, cin in C++ did
        {
            
        }
        */
        System.out.println("sum="+10+20);// 10,20 are taken as string, it gets merged 
        System.out.println("sum="+(10+20));//brackets
		System.out.println("sum="+a+b);// a,b are taken as string, it gets merged 
        System.out.println("sum="+(a+b));//brackets
    }
}