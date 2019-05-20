/*
剑指offer：验证二叉搜索树的后序遍历(VerifySquenceOfBST)
2019.05.20

输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
如果是则输出Yes,否则输出No。
假设输入的数组的任意两个数字都互不相同。
*/

bool VerifySquenceOfBST(vector<int> sequence){
	if(sequence.empty())  return false;
	int len=sequence.size();
	int root=sequence[len-1];
	vector<int> left,right;
	int i;
	for(i=0;i<len-1;i++){
		if(sequence[i]>root)  break;
		else left.push_back(sequence[i]);
	}
	for(;i<len-1;i++){
		if(sequence[i]<root)  return false;
		else  right.push_back(sequence[i]);
	}
	bool L=true,R=true;
	if(!left.empty())	//Careful 
		L=VerifySquenceOfBST(left);
	if(!right.empty())
		R=VerifySquenceOfBST(right);
	return L&&R;
} 
