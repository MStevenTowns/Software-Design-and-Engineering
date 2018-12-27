
public class CollectionofNames implements Container 
{

	 public String name[]={"Bob", "Jim","Kyle","Eric","Joe"}; 
	
	 public int age[]={26, 25,24,25,23}; 
		
	 public String address[]={"New Orleans", "Ruston","Shreveport","Monroe","Avondale"}; 
	 
	 public String designation[]={"Java Programmer and Content Writer", "CEO","Programmer and Web Designer","Manager",".Net Trainer"};
		
	
	@Override
	public Iterator getIterator() 
	{
		
		return new CollectionofNamesIterate() ;
	}
	
	
	private class CollectionofNamesIterate implements Iterator
	{
		
		int i;

		@Override
		public boolean hasNext() 
		{
			if (i<name.length){
				return true;
			}
			return false;
		}

		@Override
		public Object next() 
		{
			if(this.hasNext())
			{
	            return name[i++];
			}
		    return null;	
		}
	
	}
}


