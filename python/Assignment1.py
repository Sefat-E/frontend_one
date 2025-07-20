def balanced_strings(S):
    count_L = 0
    count_R = 0
    result = []
    split_string = ''

    for st in S:
        split_string += st
        if st == 'L':
            count_L += 1
        else:
            count_R += 1

        if count_L == count_R:
            result.append(split_string)
            count_L = 0
            count_R = 0
            split_string = ''


    print(len(result))
    for results in result:
        print(results)
S = input().strip()
balanced_strings(S)