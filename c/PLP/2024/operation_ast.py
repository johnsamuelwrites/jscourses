import ast
import astpretty

code = """
def somme(a,b):
    return a + b
"""

arbre = ast.parse(code)

astpretty.pprint(arbre, indent = 4)


