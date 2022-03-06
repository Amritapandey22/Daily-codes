class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if( !root ) return 0;
        queue<pair<TreeNode*, long long unsigned int> > q;
        q.push({root, 1 });
        long long unsigned int ans = 0;
        while(!q.empty() ){
            int size = q.size();
            if (size == 1){
                q.push({q.front().first,1});
                q.pop();
            }
            ans = max( q.back().second - q.front().second + 1, ans);
        
            while( size-->0 ){
                auto node = q.front().first;
                auto idx = q.front().second;
                q.pop();
                if( node->left )
                    q.push({node->left, idx*2});
                if( node->right )
                    q.push({node->right, idx*2+1});
            }
            
        }
        return ans;
    }
};