import carbonsh
import asyncio
def carbonImg(code):
    # code = "const test = 'test';\nlet x = 0.1 + 0.2;\nconsole.log(test, x)"

    config = carbonsh.Config(language=carbonsh.languages.PYTHON)

    # returns >>> 'https://carbon.now.sh/?bg=rgba(...'
    carbon_url = carbonsh.code_to_url(code, config)

    loop = asyncio.get_event_loop()

    # saves the image as carbon.png where expected
    loop.run_until_complete(carbonsh.url_to_file(carbon_url, '/home/diamond/Documents/MyProjects/PythonData/python Practice/telagramBot/'))

    # loop.run_until_complete(carbonsh.code_to_file(code,config,'/home/diamond/Documents/MyProjects/PythonData/python Practice/telagramBot/'))

# carbonImg("Aadesh lokhande")