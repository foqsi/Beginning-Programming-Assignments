//sudo
/*
set found to false
set position to -1
set index to 0
    WHILE found is false and index < number of elements
        IF list[index] is equal to search value
            found = true
            position = index
        end IF
        add 1 to index
    end WHILE
    return position;
*/

//sudo for binary search
/*
set first to 0
set last to the last subscript in the array
set found to false
set position to -1
WHILE found is not true and first is less than or equal to last
    set middle to the subscript halfway between array[first] and array[last]
    IF array[middle] equals the desired value
        set found to true
        set position to middle
    ELSE IF array[middle] is greater than the desired value
        SET last to middle - 1
    ELSE
        set first to middle + 1
    end IF
end WHILE
return position
*/