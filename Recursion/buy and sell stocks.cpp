void helper(vector<int>& prices,int n,int &min,int &max,int i)
{
    if(i==n)
    {
        return;
    }
            if(min>prices[i])
            {
                min=prices[i];
            }
            int totalProfit=prices[i]-min; // fir ek time pe jab smallest mil jaega to usi se sub hoga na
            if(max<totalProfit)
            {
                max=totalProfit;
            }
            helper(prices,n,min,max,i+1);
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min=INT_MAX;
        int max=INT_MIN;
        int i=0;
        helper(prices,n,min,max,i);
        return max;
    }
