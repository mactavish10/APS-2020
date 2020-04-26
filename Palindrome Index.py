def isPalindrome(s):
    for idx in xrange(len(s)//2):
        if s[idx] != s[len(s)-idx-1]:
            return False
    return True
 
def palindromeIndex(s):
    for idx in xrange((len(s)+1)//2):
        if s[idx] != s[len(s)-idx-1]:
            if isPalindrome(s[:idx]+s[idx+1:]):
                return idx
            else:
                return len(s)-idx-1
    return -1
 
 
def main():
    t = input()
    for _ in xrange(t):
        s = raw_input()
        print palindromeIndex(s)
     
if __name__ == '__main__':
    main()
