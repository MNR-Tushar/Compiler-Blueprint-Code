import re
code = r'int a1=5; float _b = a1 + c3; // test'
idents = re.findall(r'\b[a-zA-Z_][a-zA-Z0-9_]*\b', code)

keywords = {'int','float','char','double','if','else','for','while','return'}
idents = [x for x in idents if x not in keywords]
print(idents)
