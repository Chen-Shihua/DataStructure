/*
剑指offer：二叉树的镜像(mirror)
2019.05.20

操作给定的二叉树，将其变换为源二叉树的镜像。
*/

void Mirror(TreeNode* pRoot){
	if(pRoot==NULL)	return;
	stack<TreeNode*> S;
	S.push(pRoot);
	while(!S.empty()){
		TreeNode* cur=S.top();
		S.pop();
		swap(cur->left,cur->right);
		if(cur->left)	S.push(cur->left);
		if(cur->right)	S.push(cur->right);
	}
} 

 
//Summary:Mirror USE STACK. 
