import re
tok_spec = [
    ('NUMBER', r'\d+(\.\d+)?'),
    ('ID',     r'[A-Za-z_]\w*'),
    ('OP',     r'[\+\-\*/=]'),
    ('LP',     r'\('), ('RP', r'\)'),
    ('SKIP',   r'[ \t]+'), ('MISMATCH', r'.')
]
master = re.compile('|'.join(f'(?P<{n}>{p})' for n,p in tok_spec))
def lex(s):
    for m in master.finditer(s):
        kind = m.lastgroup; val = m.group()
        if kind=='SKIP': continue
        if kind=='MISMATCH': raise ValueError(f'Bad char {val}')
        yield (kind, val)
print(list(lex("x = a*3 + (b-5)/2")))
