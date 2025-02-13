# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        diameter = 0
        def height(node):
            if not node:
                return 0
                
            nonlocal diameter
            lHeight = height(node.left)
            rHeight = height(node.right)

            diameter = max(diameter, lHeight + rHeight)

            return 1 + max(lHeight, rHeight)
        
        node = root
        height(node)

        return diameter