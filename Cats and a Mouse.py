q = int(raw_input().strip())
for a0 in xrange(q):
    x,y,z = raw_input().strip().split(' ')
    x,y,z = [int(x),int(y),int(z)]
    catA = abs(x-z)
    catB = abs(y-z)
    if (catA < catB):
        print "Cat A"
    elif (catB < catA):
        print "Cat B"
    else:
        print "Mouse C"
