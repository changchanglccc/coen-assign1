#encoding: utf-8

from flask import Flask, render_template

app = Flask(__name__)

# for sentence

@app.route('/')
def index():
    books = [
        {
            'name': u'bookA',
            'author': u'A',
            'price':100
        },
        {
            'name': u'bookB',
            'author': u'B',
            'price': 200
        },
        {
            'name': u'bookC',
            'author': u'C',
            'price': 300
        },
        {
            'name': u'bookC',
            'author': u'C',
            'price': 400
        }
    ]

    return render_template('index.html',books=books)


    # user = {
    #     'username': u'Jenny',
    #     'age':25,
    #     'gender':u'female'
    # }
    #
    # websites = ['baidu.com','google.com']
    #
    # for k in user.keys():
    #     print k
    #
    # return render_template('index.html',user=user,websites=websites)

if __name__ == '__main__':
    app.run(debug=True)