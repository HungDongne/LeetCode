class Solution:
    def maxBottlesDrunk(self, numBottles: int, numExchange: int) -> int:
        res = numBottles
        while numBottles // numExchange != 0:
            res += 1
            numBottles = numBottles - numExchange + 1
            numExchange += 1
        return res
