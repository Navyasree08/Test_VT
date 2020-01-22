fhand = open('tttest.txt')
for line in fhand:
	line = line.rstrip()
	if line.find('ShIvA') == -1:  continue
	print(line)
