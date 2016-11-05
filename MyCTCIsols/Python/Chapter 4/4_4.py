class BinaryTree:
    def __init__(self,rootObj):
        self.key = rootObj
        self.leftChild = None
        self.rightChild = None

    def insertLeft(self,newNode):
        if self.leftChild == None:
            self.leftChild = BinaryTree(newNode)
        else:
            t = BinaryTree(newNode)
            t.leftChild = self.leftChild
            self.leftChild = t

    def insertRight(self,newNode):
        if self.rightChild == None:
            self.rightChild = BinaryTree(newNode)
        else:
            t = BinaryTree(newNode)
            t.rightChild = self.rightChild
            self.rightChild = t

    def getRightChild(self):
        return self.rightChild

    def getLeftChild(self):
        return self.leftChild

    def setRootVal(self,obj):
        self.key = obj

    def getRootVal(self):
        return self.key

def height(node):
    if node is None:
        return 0
    else:
        return max(height(node.leftChild), height(node.rightChild))+1

r = BinaryTree(10)
r.insertRight(12)
r.insertLeft(9)
r.insertRight(8)
r.insertRight(5)
r.insertRight(4)
r.insertLeft(13)

if height(r.leftChild) - height(r.rightChild) < 1:
    print "Not balanced"
else:
    print "balanced"
