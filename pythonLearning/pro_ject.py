# import requests
# response = requests.get('https://movie.douban.com/top250')
#print(response.status_code)
# if response.ok:
#     #print(response.text)
#    # 打开文件时指定编码为 utf-8
#     with open('output.html', 'w', encoding='utf-8') as file:
#         file.write(response.text)
# else:
#     print('error')




# from bs4 import BeautifulSoup as bs

# import requests
# headers = {
#     'User-Agent': "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/131.0.0.0 Safari/537.36"
# }
# response = requests.get('https://movie.douban.com/top250',headers=headers)
# contesxt = response.text
# soup = bs(contesxt, 'html.parser')#解析器,解析网页为树状
# all_movies = soup.findAll('ol', 'span','class="title"')
# for move in all_movies:
#     print(move.text)

# from urllib.request import urlopen
# from urllib.error import HTTPError
# from bs4 import BeautifulSoup
# def getTitle(url):
#     try:
#         html = urlopen(url)
#     except HTTPError as e:
#         return None
    
#     try:
#         bsOnj = BeautifulSoup(html.read())
#         title = bsOnj.body.h1
#     except AttributeError as e:
#         return None
#     else:
#         return title
    
# title = getTitle("https://movie.douban.com/top250")
# if title == None:
#     print("Title could not be found")
# else:
#     print(title)



# from urllib.request import urlopen
# from bs4 import BeautifulSoup as bf
# html = urlopen("http://www.pythonscraping.com/pages/warandpeace.html")
# bsObj = bf(html)
# nameList = bsObj.findAll(id = "text")
# print(nameList.get_text)



# from urllib.request import urlopen
# from bs4 import BeautifulSoup

# html = urlopen("http://www.pythonscraping.com/pages/page3.html")
# bsObj = BeautifulSoup(html)

#处理子标签和其他后代标签
# for child in bsObj.find("table", {"id": "giftList"}).children:
#     print(child)

#处理兄弟标签
# for sibling in bsObj.find("table", {"id": "giftList"}).tr.next_siblings:

#
# print(bsObj.fint("img",{"src":"../img/gifts/img1.jpg"
#                         }).parent.previous_sibling.git_text())


# #正则表达式
# from urllib.request import urlopen
# from bs4 import BeautifulSoup
# import re

# html = urlopen("http://www.pythonscraping.com/pages/page3.html")
# bsObj = BeautifulSoup(html)
# images = bsObj.findAll("img",{"src":re.compile("\.\.\/img\/gifts/img.*\.jpg")})
# for image in images:
#  print(image["src"])


##获得链接
# from urllib.request import urlopen
# from bs4 import BeautifulSoup
# import re

# html = urlopen("http://en.wikipedia.org/wiki/Kevin_Bacon")
# bsObj = BeautifulSoup(html)
# for link in bsObj.find("div", {"id":"bodyContent"}).findAll("a",
#                     href=re.compile("^(/wiki/)((?!:).)*$")):
#     if 'href' in link.attrs:
#         print(link.attrs['href'])


'''一个函数 getLinks，可以用维基百科词条 /wiki/< 词条名称 > 形式的 URL 链接作为参数，
然后以同样的形式返回一个列表，里面包含所有的词条 URL 链接。
• 一个主函数，以某个起始词条为参数调用 getLinks，再从返回的 URL 列表里随机选择
一个词条链接，再调用 getLinks，直到我们主动停止，或者在新的页面上没有词条链接
了，程序才停止运行。'''

# from urllib.request import urlopen
# from bs4 import BeautifulSoup
# import datetime
# import random
# import re

# random.seed(datetime.datetime.now())
# def getlinks(articleUrl):
#     html = urlopen("http://en.wikipedia.org"+articleUrl)
#     bsObj = BeautifulSoup(html)
#     return bsObj.find("div", {"id":"bodyContent"}).findAll("a",
#                     href=re.compile("^(/wiki/)((?!:).)*$"))


# links = getlinks("/wiki/Kevin_Bacon")
# while len(links) > 0:
#     newArticle = links[random.randint(0, len(links)-1)].attrs["href"]
#     print(newArticle)
#     links = getlinks(newArticle)



from urllib.request import urlopen
from bs4 import BeautifulSoup
import re
import datetime
import random

pages = set()
random.seed(datetime.datetime.now())

#获取页面所有内链的列表
def getInternalLinks(bsObj, includeUrl):
    internalLinks = []
    #找出所有以"/"开头的链接
    for link in bsObj.findAll("a", href=re.compile("^(/|.*"+includeUrl+")")):
        if link.attrs['href'] not in internalLinks:
            internalLinks.append(link.attrs['href'])
    return internalLinks

    #获取页面所有外链的列表
    def getExternalLinks(bsObj, excludeUrl):
        externalLinks = []
        #找出所有以"http"或"www"开头且不包含当前URL的链接
        for link in bsObj.findAll("a", href=re.compile("^(http|www)((?!"+excludeUrl+").)*$")):
            if link.attrs['href'] not in externalLinks:
                externalLinks.append(link.attrs['href'])


            


