def div3(binstr):
    s=0
    for ch in binstr:
        if ch not in '01': return False
        s = (2*s + int(ch)) % 3
    return s==0

for t in ["0","11","110","101",""]:
    print(t, div3(t))
