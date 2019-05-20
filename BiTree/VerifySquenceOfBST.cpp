/*
��ָoffer����֤�����������ĺ������(VerifySquenceOfBST)
2019.05.20

����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ����
����������Yes,�������No��
�������������������������ֶ�������ͬ��
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
