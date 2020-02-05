public class bin
{
	public:
		int num;
		int res,pow,rem;
		public void bintodec()
		{

			while(num!=0)
			{
				rem = num%10;
				res = res+rem*pow;
				pow*=2;
				num = num/10;
			}
			cout<<"num is "<<res<<endl;

		}
		public static void  main(Strins args[])
		{
			bin test;
			test.num=10110110;
			test.pow=1;
			test.bintodec();

		}
}

