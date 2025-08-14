from lark import Lark
grammar = r"""
?start: expr
?expr: expr "+" term   -> add
     | term
?term: term "*" factor -> mul
     | factor
?factor: NUMBER        -> num
       | ID            -> id
       | "(" expr ")"
%import common.CNAME -> ID
%import common.NUMBER
%import common.WS
%ignore WS
"""
parser = Lark(grammar, start="start")
print(parser.parse("a*(b+3)"))
