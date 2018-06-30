a, b, c = io.read ("*n", "*n", "*n")

d = 2
while true do
	a1 = a % d
	b1 = b % d
	c1 = c % d
	if a1 == b1 and a1 == c1 and b1 == c1 then
		print (d)
		break
	end
	d = d + 1
end
