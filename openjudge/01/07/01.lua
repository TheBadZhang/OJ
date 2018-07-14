str = io.read ("*l")
-- str = "12asd34"
c = 0

for a = 1, string.len (str) do
	-- d = string.byte (str:sub (a,a))
	d = str:sub (a,a)
	if d >= '0' and d <= '9' then
		c = c + 1
	end
end

print (c)

