class Fib:
    def __init__(self):
        self.a = 0
        self.b = 1
    
    def __iter__(self):
        # 应该返回一个可迭代对象
        print('call iter')
        return self
    
    def __next__(self):
        # 有__next__()方法的对象，是可迭代的
        # 内建next()就是调的__next__()
        print('call next')
        if self.a < 100:
            self.a, self.b = self.b, self.a+self.b
            print(self.a)
            return self.a
        else:
            raise StopIteration()

# 调用__iter__()一次，返回一个可迭代对象
# 一直调用next()，直到StopIteration
for i in Fib():
    pass