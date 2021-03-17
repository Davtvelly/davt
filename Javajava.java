
class Outerclass
{
	int marks = 30;
	public void print()
	{
		System.out.println("marks are less");
	}
	class Innerclass
	{
		String grade = "A";
		
		public void show()
		{
			System.out.println("you are intelligent");
		}
	}
}
class Mymainclass
{
	
	public static void main(String[] args)
	{
		Outerclass myouter = new Outerclass();
		Outerclass.Innerclass myinner = Outerclass.new Innerclass();
		
		System.out.println(myinner.grade);
		myinner.show();
		System.out.println(myouter.marks);
		myouter.print();
	}
}

		
		
		
