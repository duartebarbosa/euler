
class prob10 {

	static long odd(long x){
		if((x % 2) == 0)
			return (x + 1);
		else
			return x;
	}

	static long prime_gen(long start){

		int k;
		boolean found = true;
	
		if(start == 2)
			return 2;

		for(odd(start); ; start += 2, found = true){		// all even numbers are not prime
			for(k = 2; k < start; ++k)
				if((start % k) == 0)
					found = false;
			if(found)
				break;
		}

		return start;
	}

	public static void main(String[] args){
		long tmp = 0l, aux = 2l;

		for(; aux < 11; aux = prime_gen(++aux)){
			tmp += aux;
			System.out.println("aux : " + aux + ", tmp : " + tmp + "\n");
		}

		System.out.println("Result : " + tmp + "\n");

	}

}


