class Solution:
    def countGoodArrays(self, n: int, m: int, k: int) -> int:
        #python looks so fucking coooooooooooooooool
        #every problem you have to modules the final result with mod and you have pow 
        #USE PYTHON (Kosom cpp it doesn't have nCr !!!!)
        return ( comb(n-1,k) * m *  pow(m-1,n-1-k,mod:=10**9+7) ) % mod
        