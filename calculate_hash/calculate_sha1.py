import hashlib
from os import path
import sys

if __name__ == '__main__':
    argv = sys.argv
    file = path.join(path.dirname(__file__),argv[1])
    with open(file, 'rb') as f:
        print(hashlib.sha1(f.read()).hexdigest())
    

