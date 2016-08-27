##
## Run: git log --author="DeepBlue14" --pretty=tformat: --numstat > counter_log.txt
## Then run this file


my_sum = 0

with open("counter_log.txt") as f:
    content = f.readlines()


for i in content:
    #print(i)
    no_ws = i.rstrip()
    if no_ws:
        last_char = no_ws[-1]
        #print(last_char)
        if last_char == 'h' or last_char == 'p':
            num_str = no_ws.partition('\t')[0]
            #print(num_str)
            my_sum += int(num_str)
            num_str2 = no_ws.partition(' ')[1]
            #my_sum += int(num_str2)
            print num_str2
            
print "Result: ", my_sum
