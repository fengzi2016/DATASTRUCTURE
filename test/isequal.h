bool isequal(List La,List Lb)
{
	La_len=ListLength(La); 
	Lb_len=ListLength(Lb);//����� 
	if(La_len!=Lb_len)return false
	else{
		InitList(Lc);//��������Ա�Lc 
		for(k=1;k<= La_len,found;k++){//�������Ա�La�ġ�����Ʒ�� Lc 
			GetElem(Lb,k,e);
			listInsert(Lc,k,e);
		}
		found=true;
		for(k=1;k<=Lb_len,found;k++){
			GetElem(Lb,k,e);//ȡLb�е�k������Ԫ�� 
			i=LocateElem(Lc,e);//��Lc�в�ѯ 
			if(i==0) found = false;//La�в����ں͸�Ԫ����ͬ��Ԫ�� 
			else ListDelete(Lc,i,e);//��Lc��ɾ��������Ԫ�� 
		}
		if(found&&ListEmpty(Lc))return true;
		else return false;
		DestroyList(Lc);
	}
}