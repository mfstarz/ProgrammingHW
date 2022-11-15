import sqlite3


db = sqlite3.connect('app.db')
cur = db.cursor()

a = cur.execute("SELECT name FROM toys WHERE price < 400 AND minAge <= 8").fetchall()
b = cur.execute("SELECT MAX(price) FROM toys").fetchone()
c = cur.execute("SELECT name, price FROM toys WHERE minAge <= 4 AND maxAge >= 10").fetchall()

print(f"названия игрушек, цена которых не превышает 400 р., и которые подходят детям 8 лет:")
for i in a:
    print(f"    {i[0]}")

print(f"\nцена самой дорогой игрушки: {b[0]}")

print(f"\nназвания и цена игрушек, которые подходят одновременно детям 4-х и 10-и лет:")
for i in c:
    print(f"    {i[0]}")

