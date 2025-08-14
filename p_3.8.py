class Node:
  def __init__(self, sym, kids=None): self.sym=sym; self.kids=kids or []
def derive(expr):  # very tiny recursive-descent
  i=0
  def E():
    nonlocal i
    n=T()
    while i<len(expr) and expr[i]=='+':
      i+=1; n=Node('+',[n,T()])
    return n
  def T():
    nonlocal i
    n=F()
    while i<len(expr) and expr[i]=='*':
      i+=1; n=Node('*',[n,F()])
    return n
  def F():
    nonlocal i
    if expr[i].isalpha(): ch=expr[i]; i+=1; return Node(ch)
    if expr[i]=='(':
      i+=1; n=E(); i+=1; return n
    raise ValueError("bad")
  return E()
def print_tree(n,depth=0):
  print("  "*depth + n.sym)
  for k in n.kids: print_tree(k, depth+1)

t=derive("a*(b+c)")
print_tree(t)
