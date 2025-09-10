import random
import string

Characters =string.digits + string.ascii_letters + string.punctuation

Generator = (random.choices(Characters, k=8))

