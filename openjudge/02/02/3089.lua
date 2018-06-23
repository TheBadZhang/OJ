-- 此程序并不能做到不知道数据量时读取定量数据
-- 否则做的会非常麻烦
function c (n)
	if n == 1 or n == 2 then return n
	else return c (n-1) + c (n-2) end
end


while true do
	a = io.read ("*n")
	print (c (a))
end
