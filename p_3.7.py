from collections import defaultdict
def left_factor(rules):  # rules: dict A -> list of strings (tokens joined by space)
  out=defaultdict(list); new_rules={}
  for A,alts in rules.items():
    alts=[tuple(a.split()) for a in alts]
    alts.sort()
    i=0; bucket=[]
    while i<len(alts):
      pre=[alts[i]]
      while i+1<len(alts) and alts[i+1][:1]==alts[i][:1]:
        pre.append(alts[i+1]); i+=1
      if len(pre)==1:
        out[A].append(' '.join(pre[0]))
      else:
        X = f"{A}'"
        k=1
        while X in rules or X in out or X in new_rules: X=f"{A}'{k}"; k+=1
        out[A].append(pre[0][0]+" "+X)
        new_rules[X]=[' '.join(p[1:]) if len(p)>1 else 'ε' for p in pre]
      i+=1
  out.update(new_rules)
  return out

g={'S':['if E then S else S','if E then S','a']}
print(left_factor(g))
