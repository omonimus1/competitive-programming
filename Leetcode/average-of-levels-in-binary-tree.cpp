//https://leetcode.com/problems/average-of-levels-in-binary-tree/submissions/
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>solution; 
        
        if(root == NULL)
            return solution; 
        
        queue<TreeNode*>q; 
         q.push(root); 
        double number_nodes, sum_level; 
        while(!q.empty())
        {
            vector<int>level;
            int size = q.size(); 
            number_nodes = 0.0;
            sum_level = 0.0; 
            while(size--)
            {
                TreeNode *temp = q.front();
                q.pop(); 
                number_nodes+=1;
                sum_level += temp->val; 
                
                if(temp->left != NULL)
                    q.push(temp->left);
                if(temp -> right != NULL)
                    q.push(temp->right); 
            }
            solution.push_back((double(sum_level/number_nodes)));
        }
        
        return solution; 
        
    }
};