a = ["AND","FALSE","IF","IFERROR","IFNA","IFS","NOT","OR","SWITCH","TRUE","XOR","DATE","DATEDIF","DATEVALUE","DAY","DAYS","DAYS360","EDATE","EOMONTH","HOUR","ISOWEEKNUM","MINUTE","MONTH","NETWORKDAYS","NETWORKDAYS.INTL","NOW","SECOND","TIME","TIMEVALUE","TODAY","WEEKDAY","WEEKNUM","WORKDAY","WORKDAY.INTL","YEAR","YEARFRAC","ADDRESS","AREAS","CHOOSE","COLUMN","COLUMNS","FIELDVALUE","FORMULATEXT","GETPIVOTDATA","HLOOKUP","HYPERLINK","INDEX","INDIRECT","LOOKUP","MATCH","OFFSET","ROW","ROWS","TRANSPOSE","VLOOKUP","CHAR","CLEAN","CODE","CONCAT","CONCATENATE","DOLLAR","EXACT","FIND","FIXED","LEFT","LEN","LOWER","MID","NUMBERVALUE","PROPER","REPLACE","REPT","RIGHT","SEARCH","SUBSTITUTE","TEXT","TEXTJOIN","TRIM","UNICHAR","UNICODE","UPPER","VALUE","ARRAYTOTEXT","BYCOL","BYROW","CHOOSECOLS","CHOOSEROWS","DROP","EXPAND","FILTER","HSTACK","ISOMITTED","LAMBDA","LET","MAKEARRAY","MAP","RANDARRAY","REDUCE","SCAN","SEQUENCE","SORT","SORTBY","STOCKHISTORY","TAKE","TEXTAFTER","TEXTBEFORE","TEXTSPLIT","TOCOL","TOROW","UNIQUE","VALUETOTEXT","VSTACK","WRAPCOLS","WRAPROWS","XLOOKUP","XMATCH","BIN2DEC","BIN2HEX","BIN2OCT","BITAND","BITLSHIFT","BITOR","BITRSHIFT","BITXOR","COMPLEX","CONVERT","DEC2BIN","DEC2HEX","DEC2OCT","DELTA","HEX2BIN","HEX2DEC","HEX2OCT","IMABS","IMAGINARY","IMPOWER","IMPRODUCT","IMREAL","IMSUB","IMSUM","ACCRINT","ACCRINTM","AMORDEGRC","AMORLINC","COUPDAYBS","COUPDAYS","COUPDAYSNC","COUPNCD","COUPNUM","COUPPCD","CUMIPMT","CUMPRINC","DB","DDB","DISC","DOLLARDE","DOLLARFR","DURATION","EFFECT","FV","FVSCHEDULE","INTRATE","IPMT","IRR","ISPMT","MDURATION","MIRR","NOMINAL","NPER","NPV","ODDFPRICE","ODDFYIELD","ODDLPRICE","ODDLYIELD","PDURATION","PMT","PPMT","PRICE","PRICEDISC","PRICEMAT","PV","RATE","RECEIVED","RRI","SLN","SYD","TBILLEQ","TBILLPRICE","TBILLYIELD","VDB","XIRR","XNPV","YIELD","YIELDDISC","YIELDMAT","CELL","ERROR.TYPE","INFO","ISBLANK","ISERR","ISERROR","ISEVEN","ISFORMULA","ISLOGICAL","ISNA","ISNONTEXT","ISNUMBER","ISODD","ISREF","ISTEXT","N","NA","SHEET","SHEETS","T","TYPE","ABS","AGGREGATE","ARABIC","BASE","CEILING","CEILING.MATH","CEILING.PRECISE","COMBIN","COMBINA","DECIMAL","EVEN","EXP","FACT","FACTDOUBLE","FLOOR","FLOOR.MATH","FLOOR.PRECISE","GCD","INT","LCM","LN","LOG","LOG10","MDETERM","MINVERSE","MMULT","MOD","MROUND","MUNIT","ODD","PI","POWER","PRODUCT","QUOTIENT","RAND","RANDBETWEEN","ROMAN","ROUND","ROUNDDOWN","ROUNDUP","SIGN","SQRT","SUBTOTAL","SUM","SUMIF","SUMIFS","SUMPRODUCT","SUMSQ","SUMX2MY2","SUMX2PY2","SUMXMY2","TRUNC","ACOS","ASIN","ATAN","ATAN2","COS","COSH","COT","CSC","DEGREES","RADIANS","SEC","SIN","SINH","TAN","AVEDEV","AVERAGE","AVERAGEA","AVERAGEIF","AVERAGEIFS","BINOM.DIST","BINOMDIST","COUNT","COUNTA","COUNTBLANK","COUNTIF","COUNTIFS","DEVSQ","FORECAST","FORECAST.ETS","FORECAST.ETS.CONFINT","FORECAST.ETS.SEASONALITY","FORECAST.ETS.STAT","FORECAST.LINEAR","FREQUENCY","GEOMEAN","HARMEAN","INTERCEPT","LARGE","LINEST","MAX","MAXA","MAXIFS","MEDIAN","MIN","MINA","MINIFS","MODE","MODE.MULT","MODE.SNGL","NORM.DIST","NORM.INV","NORM.S.DIST","NORM.S.INV","PERCENTILE","PERCENTILE.EXC","PERCENTILE.INC","PERCENTRANK","PERCENTRANK.EXC","PERCENTRANK.INC","PERMUT","PERMUTATIONA","QUARTILE","QUARTILE.EXC","QUARTILE.INC","RANK","RANK.AVG","RANK.EQ","SKEW","SKEW.P","SLOPE","SMALL","STANDARDIZE","STDEV","STDEV.P","STDEV.S","STDEVA","STDEVP","STDEVPA","TRIMMEAN","VAR","VAR.P","VAR.S","VARA","VARP","VARPA","ENCODEURL","FILTERXML","WEBSERVI","DAVERAGE","DCOUNT","DCOUNTA","DGET","DMAX","DMIN","DPRODUCT","DSTDEV","DSTDEVP","DSUM","DVAR","DVARP"]

# asd = ["ERROR.TYPE","EXP","LN","PI","SIGN","ACOS","ASIN","ATAN","COT","CSC","RADIANS","SEC","TAN","NORM.DIST","WEBSERVI"]

for i in a:
    try:
        
        file = open(f"Data001/{i}.txt","r")
        data = file.read()
        file.close()

        data = data.split("Summary")[1]
        data = data.split("Usage notes")[0]

        file = open(f"Data002/{i}.txt","w")
        file.write("Summary" + data)
        file.close()


        print(i)
    except:
        print(f"******************{i}***************")
        file = open(f"Error.txt","a")
        file.write(i+"\n")
        file.close()