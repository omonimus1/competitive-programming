// https://leetcode.com/problems/average-of-levels-in-binary-tree/submissions/
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>solution;

        if(root == NULL)
            return solution;
        
        queue<TreeNode*> q; 
        q.push(root);
       
        TreeNode* node;
        while(!q.empty())
        {
            int size = q.size();
            vector<double>s;       
            while(size--)
            {
                node = q.front();
                q.pop();
                s.push_back(double(node->val));
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
            }
            
            double sum =0; 
            for(int i =0; i < s.size(); i++) sum += s[i];
            //solution.push_back(double(sum/s.size()));
            solution.push_back(double(sum)/ double(s.size()));
        }
                               
        return solution; 
    }
};