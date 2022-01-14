import pandas as pd

df = pd.read_json('C:/New folder/myproject/data.json')
print("before",df.head(10))

x = df["Calories"].mean()

df["Calories"].fillna(x, inplace = True)
print("after",df.head(10))