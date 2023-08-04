	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    // code here
	    vector<int>v;
	    int carry=0;
	    int i=a.size()-1;
	    int j=b.size()-1;
	    
	     while(i>=0 && j>=0){
	         int x=a[i]+b[j]+carry;
	         int digit=x%10;
	         v.push_back(digit);
	          carry=x/10;
	         i--;
	         j--;
	         
	         
	     }
	        while(i>=0){
	         int x=a[i]+0+carry;
	         int digit=x%10;
	         v.push_back(digit);
	         carry=x/10;
	         i--;
	         
	         
	     }
	        while( j>=0){
	         int x=0+b[j]+carry;
	         int digit=x%10;
	         v.push_back(digit);
	          carry=x/10;
	         
	         j--;
	         
	         
	     }
	     if(carry){
	         v.push_back(carry);
	     }
	     
	     reverse(v.begin(),v.end());
	     return v;
	}
