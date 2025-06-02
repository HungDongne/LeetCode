import pandas as pd

def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:
    salaries = employee["salary"].drop_duplicates()
    second_highest =  salaries.sort_values(ascending=False).iloc[1] if len(salaries) >= 2 else None
    return pd.DataFrame({"SecondHighestSalary": [second_highest]})