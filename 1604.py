class Solution(object):
    def alertNames(self, keyName, keyTime):
        """
        :type keyName: List[str]
        :type keyTime: List[str]
        :rtype: List[str]
        """
        # def getminute(s = str):
        #     h, m = s.split(":")
        #     return int(h) * 60 + int(m)
        res = []
        times = defaultdict(list)
        for i in range(len(keyName)):
            times[keyName[i]].append(keyTime[i])
        for name, time in times.items():
            time.sort()
            for r in range(2, len(time)):
                first = time[r].split(":")
                second = time[r - 2].split(":")
                if (int(first[0]) * 60 + int(first[1]) - int(second[0]) * 60 - int(second[1]) <= 60):
                    res.append(name)
                    break
            # print(name, time)
        return sorted(res)