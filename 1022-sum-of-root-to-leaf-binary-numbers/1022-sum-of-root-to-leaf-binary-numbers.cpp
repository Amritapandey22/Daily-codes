class Solution {
public:
    int sum =0;
    int getint(string num,int sz){
        int ans = 0;
        int c=1;
        // cout<<num<<" ";
        for(int i=sz-1;i>=0;i--){
            if(num[i]=='1'){
                ans+=c;
            }
            c*=2;
        }
        
        return ans;
    }
    void getnumfromstr(string osf){
        int n = osf.length();
        int num = getint(osf ,n);
        sum += num;
    }
    void getstrnum(TreeNode* root,string osf){
        if(root == nullptr)return;
        if(root->left == nullptr and root->right == nullptr){
            osf += to_string(root->val);
            getnumfromstr(osf);
        }
        osf += to_string(root->val);
        getstrnum(root->left,osf);
        getstrnum(root->right,osf);
        
        
    }
    int sumRootToLeaf(TreeNode* root) {
        getstrnum(root,"");
        return sum;
    }
};