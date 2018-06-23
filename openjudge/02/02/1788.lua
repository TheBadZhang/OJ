
l = {1, 2}

for a = 3, 1000000, 1 do
	l [a] = (2 * l [a-1] + l [a-2]) % 32767;
end

n = io.read ("*n")

for a = 1, n, 1 do
	b = io.read ("*n")
	print (l [b])
end