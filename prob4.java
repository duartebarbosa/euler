
class prob4 {


	public static void main(String[] args){

		long dividend = 600851475143l;
		long n = 2;
	
		while (n < dividend){
			if (dividend % n == 0){
				dividend = dividend / n;
			}
		n++;
		}
		
		System.out.println("dividend = " + dividend);
	}


}
