// Haley Melson 
// Asg 4, rope python

class Rope:
    def __init__(self, node = ""):
        self.left = None
        self.right = None
        self.node = node

    def weight(self):
        if self.left:
            return len(self.left.node)
        else:
            return len(self.node)

    def index(self, i):
        if self.left and i < self.weight():
            return self.left.index(i)
        elif self.right:
            return self.right.index(i-self.weight())
        else:
            return self.node[i]

    def concat(self, s2):
        newnode = Rope()
        newnode.left = self
        newnode.right = s2
        return newnode

    def split(self, i):
        if self.left and i < self.weight():
            left = self.left.split(i)
            newnode = Rope()
            newnode.left = left
            newnode.right = self.right
            return newnode
        elif self.right:
            right = self.right.split(i - self.weight())
            newnode = Rope()
            newnode.left = self.left
            newnode.right = right
            return newnode
        
    def insert(self, i, s):
        if i < self.weight():
            if self.left:
                self.left.insert(i, s)
        newrope = Rope(s)
        left = self.split(i)
        self.concat(newrope).concat(left)

    def delete(self, start, length):
        right = self.split(start + length)
        left = self.split(start)
        return left.concat(right)

    def subrope(self, i, j):
        if i < 0 or j < i or j > self.weight():
            raise ValueError("invalid")
        return self.split(j).split(i)[1]



        