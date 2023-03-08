def findSmallest(arr):#找到最小值的索引值并返回
    smallest = arr[0]#存储最小值
    smallest_index = 0#存储最小值索引
    for i in range(1,len(arr)):
        if arr[i]<smallest:
            smallest = arr[i]
            smallest_index = i
    return smallest_index


def selectionSort(arr):#对数组进行排序
    newArr = []
    for i in range(len(arr)):
        smallest = findSmallest(arr)#找到最小的元素并将其加入到数组中
        newArr.append(arr.pop(smallest))#移除这个元素并返回值，添加返回的值到新列表中。
    return newArr

if __name__ == "__main__":
    print(selectionSort([3,5,6,7,8,9,0,1,2,4]))