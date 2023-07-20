int countRev (string s)
{
    // your code here
    stack<char>st;
    if(s.size()&1) return -1;
    int ans=0;
    for(char ch:s){
        if(ch == '{'){
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top()=='{'){
                st.pop();
                
            }
            else{
                st.push(ch);
            }
        }
        
    }
    // if stack is not empty
    while(!st.empty()){
        char a=st.top();
        st.pop();
        char b=st.top();
        st.pop();
        if(a==b){
            ans=ans+1;
        }
        else{
            ans=ans+2;
        }
    }
    
    return ans;
}
