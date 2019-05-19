//剑指offer：重建二叉树 (reConstBiTree)
/* 
输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。
假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
例如输入前序遍历序列{1,2,4,7,3,5,6,8}和
中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。*/
TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin){
	if(pre.size()==0||vin.size()==0)	return NULL;
	vector<int> prea,preb,vina,vinb;
	TreeNode* Root=new TreeNode(pre[0]);
	int i;
	for(i=0;i<vin.size();i++){
		if(vin[i]==pre[0])	
		break;	
	} 
	for(int j=0;j<i;j++){
		prea.push_back(pre[j+1]);
		vina.push_back(vin[j]);
	}
	for(int j=i+1;j<vin.size();j++){
		preb.push_back(pre[j]);
		vinb.push_back(vin[j]);
	}
	Root->left=reConstructBinaryTree(prea,vina);
	Root->right=reConstructBinaryTree(preb,vinb);
	return Root;
} 
