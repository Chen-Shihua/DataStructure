/*
��ָoffer���Ƿ������� (SubTree) 
2019.05.20

�������ö�����A��B���ж�B�ǲ���A���ӽṹ��
��ps������Լ��������������һ�������ӽṹ��
*/ 

bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
{
    bool result = false;
    if(pRoot1 != NULL && pRoot2 != NULL)
    {
        if(pRoot1->val == pRoot2->val)
            result = IsSubtree(pRoot1, pRoot2);
        if(!result)
            result = HasSubtree(pRoot1->left, pRoot2);
        if(!result)
            result = HasSubtree(pRoot1->right, pRoot2);
    }
    return result;
}

bool IsSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
{
    if(pRoot2 == NULL)	return true;
    if(pRoot1 == NULL)	return false;
    if(pRoot1->val != pRoot2->val)	return false;
    return IsSubtree(pRoot1->left, pRoot2->left) &&
        IsSubtree(pRoot1->right, pRoot2->right);
}


