



# pip install flask
# python rp.py
# curl http://localhost:8000/


# you cannot do this with GitHub Pages.
# GitHub Pages only serves static files (HTML, CSS, JS, images, etc.) 
# and does not support server-side code (like PHP, Python, Node.js). 
# This means you cannot generate a random password on the server 
# for curl requests using GitHub Pages.

from flask import Flask, Response




import random
import string

app = Flask(__name__)

def random_password(length=12):
    chars = string.ascii_letters + string.digits + '!@#$%^&*()'
    return ''.join(random.choice(chars) for _ in range(length))

@app.route('/')
def password():
    return Response(random_password(), mimetype='text/plain')

if __name__ == '__main__':
    app.run(port=8000)