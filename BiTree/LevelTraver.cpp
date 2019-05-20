/*
剑指offer：层序遍历(LevelTraver) 
2019.05.20

从上往下打印出二叉树的每个节点，
同层节点从左至右打印。
*/

vector<int> PrintFromTopToBottom(TreeNode* root){
	vector<int> res;
	if(root==NULL)	return res;
	queue<TreeNode*> Q;
	Q.push(root);
	while(!Q.empty()){
		TreeNode* cur=Q.front();
		Q.pop();
		res.push_back(cur->val);
		if(cur->left)	Q.push(cur->left);
		if(cur->right)	Q.push(cur->right);
	}
	return res;
}

//Summary:LevelTraver USE QUEUE. 
