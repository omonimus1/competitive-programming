# https://leetcode.com/problems/valid-parentheses/description/
class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for character in s:
            if character in ('(', '{', '['):
                stack.append(character)
            else: 
                # No opening bracket, stack is empty, early return as it is not balanced in order.
                if not stack: return False 
                # we assume that just ({[]}) character exists anc check directly for the closing one
                # get the last element of the stack 
                last = stack[-1] # get the last element added to the stack.
                print(last)
                if (last == "{" and character != "}") or  (last == "[" and character != "]")  or (last == "(" and character != ")"):
                    return False # there was a match
                else: 
                    stack.pop() # remove the element from the stack, there was a match!
        return not stack # If the stack is empty, it is balanced, otherwise is false.
