void mergeSort(int arr[],int low,int mid,int high){
    int i,m,k,l,temp[50];
    
    i=low;
    l=low;
    m=mid+1;
    
    while ((l<=mid)&&(m<=high)){
        if (arr[l]=arr[m]){
            temp[i] = arr[l];
            l++;
        }else{
            temp[i] = arr[m];
            m++;
        }i++;
    }
    if (l>mid){
        for (k=m;k<=high;k++){
            temp[i]=arr[k];
            i++;
        }
    }
    for (k=low;k<=high;k++){
        arr[k]=temp[k];
    }
}
    
void partition(int arr[],int low,int high){
    int mid;
    
    if (low<high){
    
        mid = (low+high)/2;
        partition(arr,low,mid);
        partition(arr,mid+1,high);
        mergeSort(arr,low,mid,high);
    
    }
}