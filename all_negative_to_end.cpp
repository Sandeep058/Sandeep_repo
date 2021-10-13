void fun(int *arr,int n){
	queue<int>pos;
        queue<int>neg;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
            pos.push(arr[i]);
            else
            neg.push(arr[i]);
        }

         for(int i=0;i<n;i++){
             while(!pos.empty()){
                 v.push_back(pos.front());
                 pos.pop();
             }
             while(!neg.empty()){
                 v.push_back(neg.front());
                 neg.pop();
             }}
        
}


    void segregateElements(int arr[],int n)
    {
        fun(arr,n);
       for(int i=0;i<n;i++)
	 {
	 	arr[i]=v[i];
	 }
	 return;
    }
