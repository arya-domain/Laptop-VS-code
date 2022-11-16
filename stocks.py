

!pip install yfinance
!pip install nsetools

import yfinance as yf
from nsetools import  Nse
import pandas as pd


stk = yf.Ticker("TATASTEEL.NS")

#balancesheet
fin = stk.balance_sheet

#variable for rating 
c = 0 
t = 0

print (stk.recommendations)

fin

#plotting balacesheet for total assets
import matplotlib.pyplot as plt
import numpy as np
x =fin.columns.tolist()
y = fin.loc['Total Current Assets']
colors = ['r', 'y', 'g', 'c']
plt.pie(y, labels = x, colors=colors, 
        startangle=90,  explode = (0, 0, 0.1, 0),
        radius = 2, autopct = '%1.1f%%')

plt.plot(y, linestyle = 'dotted')

# rating 

y = fin.loc['Total Current Assets']
y = y.tolist()
if (y[0]> y[-1]):
  c= c + 1
t = t + 1
if ((y[0]) > 1.5*(y[-1])) :
  c= c + 1
t = t + 1

#plotting balacesheet for Total Current Liabilities
import matplotlib.pyplot as plt
import numpy as np
x =fin.columns.tolist()
y = fin.loc['Total Current Liabilities']
colors = ['r', 'y', 'g', 'c']
plt.pie(y, labels = x, colors=colors, 
        startangle=90,  explode = (0, 0, 0.1, 0),
        radius = 2, autopct = '%1.1f%%')
plt.plot(y, linestyle = 'dotted')

plt.plot(y, linestyle = 'dotted')

# rating 

y = fin.loc['Total Current Liabilities']
y = y.tolist()
if (y[0]< y[-1]):
  c= c + 1
t = t + 1

#Equity graph
x = fin.columns.tolist()
x.reverse()
y = fin.loc['Total Assets'] - fin.loc['Total Liab']
y = y.tolist()
y.reverse()
plt.plot(x,y, linestyle = 'dotted')
y

# rating 

y = fin.loc['Total Assets'] - fin.loc['Total Liab']
y = y.tolist()

if (y[0]> y[-1]):
  c= c + 1
t = t + 1
if ((y[0]) > 1.5*(y[-1])) :
  c= c + 1
t = t + 1
print (c, t)

# Dividend graph
y = stk.dividends.tolist()
plt.plot(y)

#rating dividend

y = stk.dividends.tolist()
y.reverse()
if (y[0]> y[-1]):
  c= c + 1
t = t + 1
if ((y[0]) > 1.5*(y[-1])) :
  c= c + 1
t = t + 1
print (c, t)

earn = stk.cashflow
earn.loc['Net Income']

f = (c/t) * 100
f