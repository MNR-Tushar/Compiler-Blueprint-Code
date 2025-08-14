# CNF grammar example: S->AB|BC; A->BA|a; B->CC|b; C->AB|a
from collections import defaultdict
G = {
 'S': [('A','B'),('B','C')],
 'A': [('B','A'),('a',)],
 'B': [('C','C'),('b',)],
 'C': [('A','B'),('a',)]
}
def cyk(w):
  n=len(w); P=[[set() for _ in range(n)] for _ in range(n)]
  for i,ch in enumerate(w):
    for A,prods in G.items():
      for p in prods:
        if len(p)==1 and p[0]==ch: P[i][i].add(A)
  for l in range(2,n+1):
    for i in range(n-l+1):
      j=i+l-1
      for k in range(i,j):
        for A,prods in G.items():
          for X,Y in [p for p in prods if len(p)==2]:
            if X in P[i][k] and Y in P[k+1][j]: P[i][j].add(A)
  return 'S' in P[0][n-1]
print(cyk("ba"))  # demo
