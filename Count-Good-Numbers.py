class Solution:
    def countGoodNumbers(self, n: int) -> int:
        if(n==1):
            return 5
        elif(n%2==0):
            # n //2 is integer devision in python
            return pow(4,n//2,mod:=10**9+7)*pow(5,n//2,mod)%mod
        else:
            return pow(4,(n-1)//2,mod:=10**9+7)*pow(5,(n+1)//2,mod)%mod

        