
public class IteratorPatternDemo 
{
	
	public static void main(String[] args) 
	{
	      CollectionofNames People = new CollectionofNames();
	      
	      for(Iterator it = People.getIterator(); it.hasNext();)
	      {
	          String name = (String)it.next();
	          System.out.println("Name : " + name);
	       } 	
	      
	}
}
