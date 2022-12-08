//sudo
/*
FOR maxElement = each subscript in the array, from the last to the first
    FOR index = 0 to maxElement - 1
        IF array[index] > array[index + 1]
            swap array[index] with array[index + 1]
        end IF
    end FOR
end FOR
*/

//selection sorting
/*
FOR start = each array subscript, from the first to the next-to-last
    minIndex = start
    minValue = array[start]
    FOR index = start + 1 To size -1
        IF array[index] < minValue
            minValue = array[index]
            minIndex = index
        end IF
    end FOR
    swap array[minIndex] with array[start]
end FOR
*/