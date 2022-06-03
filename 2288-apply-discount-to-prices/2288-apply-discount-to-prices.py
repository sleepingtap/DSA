class Solution:
    def discountPrices(self, sentence: str, discount: int) -> str:
        words=sentence.split()
        res=[]
        for i in words:
            if i[0]!='$' or i[1:].isnumeric()==False:
                res.append(i)
            else:
                price=int(i[1:])
                res.append("${:.2f}".format(price-((price*discount)/100)))
        return " ".join(res)                 
            
        