def isValid(s):
   stack = []
   brackets = {')': '('; '}': '{', ']': '['}

   for char in s :
      if char in '([{':
         stack.append(char)
      elif char in ')]}':
         if not stack or stack[-1] != brackets[char]:
            return False
         stack.pop()

   return not stack
