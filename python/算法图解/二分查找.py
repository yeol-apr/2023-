def reduce(list:int,a:int):
    low=0
    high=len(list)-1
    while low <=high:
        mid=high//2
        if list[mid]==a:
            return mid+1
        elif list[mid]<a:
            high=mid
        else :
            low=mid
    else :
        return -1