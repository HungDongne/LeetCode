from typing import List


class Solution:
    def spellchecker(self, wordlist: List[str], queries: List[str]) -> List[str]:
        wordlist_lowered = {}
        wordlist_encoded = {}

        def encode(s):
            return "".join("*" if c in "aeiou" else c for c in s)

        for word in wordlist:
            wl = word.lower()
            we = encode(wl)
            if wl not in wordlist_lowered:
                wordlist_lowered[wl] = word
            if we not in wordlist_encoded:
                wordlist_encoded[we] = word
        res = []
        for query in queries:
            ql = query.lower()
            qe = encode(ql)
            # print(f"Checking: {query, ql, qe}")

            if query in wordlist:
                res.append(query)
                continue
                # print(1)
            if ql in wordlist_lowered:
                res.append(wordlist_lowered[ql])
                continue
                # print(2)
            if qe in wordlist_encoded:
                res.append(wordlist_encoded[qe])
                continue
                # print(3)
            res.append("")
        return res
