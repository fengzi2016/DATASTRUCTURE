bool isequal(List La,List Lb)
{
	La_len=ListLength(La); 
	Lb_len=ListLength(Lb);//求表长 
	if(La_len!=Lb_len)return false
	else{
		InitList(Lc);//构造空线性表Lc 
		for(k=1;k<= La_len,found;k++){//生成线性表La的“复制品” Lc 
			GetElem(Lb,k,e);
			listInsert(Lc,k,e);
		}
		found=true;
		for(k=1;k<=Lb_len,found;k++){
			GetElem(Lb,k,e);//取Lb中第k个数据元素 
			i=LocateElem(Lc,e);//在Lc中查询 
			if(i==0) found = false;//La中不存在和该元素相同的元素 
			else ListDelete(Lc,i,e);//从Lc中删除该数据元素 
		}
		if(found&&ListEmpty(Lc))return true;
		else return false;
		DestroyList(Lc);
	}
}