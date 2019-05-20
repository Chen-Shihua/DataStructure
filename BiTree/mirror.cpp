/*
��ָoffer���������ľ���(mirror)
2019.05.20

���������Ķ�����������任ΪԴ�������ľ���
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
