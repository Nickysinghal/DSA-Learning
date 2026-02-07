class Solution:
    def reverseWords(self, s: str) -> str:
        n = s.split()
        n = n[::-1]
        return " ".join(n)
    
if __name__=="__main__":
    obj = Solution()                      # create object
    result = obj.reverseWords("Hello World from Python")
    print(result) 