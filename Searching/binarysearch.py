
def binarysearchrec(arr,l,h,k):
    if(l<=h):
        mid=(l+h)//2
        if arr[mid]==k:
            return mid
        if arr[mid]>k:
            binarysearchrec(arr,mid+1,h,k)
        if arr[mid]<k:
            binarysearchrec(arr,l,mid-1,k)



def binarysearchit(arr,l,h,k):
    if(l<h):
        while l<h:
            mid=(l+h)//2
            if arr[mid]==k:
                return mid
            elif arr[mid]>k:
                h=mid-1
            else:
                l=mid+1    
                    

arr =[10,20,30,40,50]
l=0
h=4
k=30
ans=binarysearchrec(arr,l,h,k)
print("Element is Present at index (using recursion) ",ans)
ans2=binarysearchit(arr,l,h,k)
print("Element is Present at index (iterative method)",ans2)