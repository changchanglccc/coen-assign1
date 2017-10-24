#encoding: utf-8

# from flask import Flask, render_template,jsonify,request
# from flask.views import MethodView
import os
import json
#
# app = Flask(__name__)
#
# # for sentence
#
# @app.route('/')
# def index():
#     products = [
#         {
#             'number': u'1',
#             'category': u'apple'
#         },
#         {
#             'number': u'1',
#             'category': u'banana'
#         },
#         {
#             'number': u'2',
#             'category': u'beef'
#         },
#         {
#             'number': u'2',
#             'category': u'chicken'
#         },
#         {
#             'number': u'3',
#             'category': u'milk'
#         },
#         {
#             'number': u'3',
#             'category': u'yogurt'
#         }
#     ]
#
#     return render_template('index.html', products=products)
#
# @app.route('/register', methods=['POST'])
# def register():
#     print request.headers
#     print request.form
#     print request.form['name']
#     print request.form.get('name')
#     print request.form.getlist('name')
#     print request.form.get('nickname', default='little apple')
#     return 'welcome'
#
#
#
# @app.route('/', methods=['GET','POST'])
# def index_post():
#     text = request.form['text']
#     processed_text = text.upper()
#     return processed_text
#
#
#
# class GenericRequest(MethodView):
#     def get(self):
#         name = request.args.get('name', 'Damyan')
#         return 'Hello GET from %s!' % name
#
#     def post(self):
#         name = request.form.get('name', 'Damyan')
#         return 'Hello POST from %s' % name
#
# app.add_url_rule(
#     '/generic_request',
#     view_func=GenericRequest.as_view('generic_request')
# )
#
#
#
#
#
#
#
#
#
#
# # @app.route('/login', methods=['POST', 'GET'])
# # def login():
# #     error = None
# #     if request.method == 'POST':
# #         if valid_login(request.form['username'],
# #                        request.form['password']):
# #             return log_the_user_in(request.form['username'])
# #         else:
# #             error = 'Invalid username/password'
# #     # the code below is executed if the request method
# #     # was GET or the credentials were invalid
# #     return render_template('login.html', error=error)
#
#
# @app.route("/column/")
# def column():
#     data = [{"data": [49.9, 54.4], "name": "Tokyo"}, {"data": [42, 30.4], "name": "AC"}]
#     return render_template('column.html', data=data)
#
#
#     # user = {
#     #     'username': u'Jenny',
#     #     'age':25,
#     #     'gender':u'female'
#     # }
#     #
#     # websites = ['baidu.com','google.com']
#     #
#     # for k in user.keys():
#     #     print k
#     #
#     # return render_template('index.html',user=user,websites=websites)
#
# @app.route('/_add_numbers')
# def add_numbers():
#     a = request.args.get('a', 2, type=int)
#     b = request.args.get('b', 3, type=int)
#     return jsonify(result=a + b)
#
#
#
#
#
#
#
#
#
#
#
#
#
#


# wait for connect all the time...........

#
# xdata = {1: [001, 2 ,"beef", 5]}
# ydata =
# reply = []
# # python read a json file
# def renderdata():
#     filename = os.path.join(app.static_folder, 'data.json')
#     with open(filename) as data_file:
#         data = json.load(data_file)
#     return data
#
# # rely on data.json file to match and generate a json reply
# def match_json(xdata):      # when request is a json data
#     data = renderdata()
#     if xdata.values()[0][1] in data.keys():
#         dict = data.get(xdata.values()[0][1])   #eg:{"apple":["$2", "20171016/20171022", 20]}
#         reply.append(dict.values()[0][0])       # add $2
#         reply.append(dict.values()[0][1])       # add "20171016/20171022"
#     return reply
#
# def match_ProtocolBuff(ydata):  # not complete
#     data = renderdata()
#
#     return reply
#
# # jsonify
# def toJSON(list):
#     # add change a normal list to json format
#
# def toProtocolBuffer(list):
#     # add change a normal list to PB format













#
#
# if __name__ == '__main__':
#     app.run(debug=True)