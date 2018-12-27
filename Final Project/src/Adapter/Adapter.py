class BasketBall:
    def __init__(self):
        self.hasHole=False
    def pop(self):
        self.hasHole=True
        print("popped ball")
    def patch(self):
        self.hasHole=False
        print("fixed ball")
    
class Box:
    def __init__(self):
        self.crushed=False
    def crush(self):
        self.crushed=True
        print("crushed box")
    def fix(self):
        self.crushed=False
        print("fixed box")
        
class BoxClassAdapter(Box):
    def __init__(self):
        Box.__init__(self)
    def pop(self):
        return self.crush()
    def patch(self):
        return self.fix()

BoxClassAdapter().pop()
