import tokenize
from io import BytesIO

code = """
     c = a + b
"""

code_bytes = BytesIO(code.encode("utf-8")).readline

tokens = tokenize.tokenize(code_bytes)

for token in tokens:
    print(token)

