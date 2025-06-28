import requests
import random
from bs4 import BeautifulSoup 
import datetime


url = "https://pixelford.com/blog/"
random_num = random.randint(1,999999)
response = requests.get(url, headers = {'user-agent' : f'Hello{random_num}'})
html = response.content

soup = BeautifulSoup(html, 'html.parser')
blogs = soup.find_all('article', class_="type-post")

for blog in blogs:
    title = blog.find('a', class_="entry-title-link").get_text()

    blog_datetime_string = blog.find('time', class_="entry-time").get('datetime')
    blog_datetime = datetime.datetime.fromisoformat(blog_datetime_string)
    pretty_date = blog_datetime.strftime("%b %d %Y")
    print(f'{pretty_date} - {title}')




