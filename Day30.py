class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        m, n = len(s), len(p)
        dp = [[-1 for _ in range(n + 1)] for _ in range(m + 1)]

        def helper(i, j):
            if i == m and j == n:
                return True
            if j == n:
                return False
            if i == m:
                return all(x == '*' for x in p[j:])

            if dp[i][j] != -1:
                return dp[i][j]

            if p[j] == s[i] or p[j] == '?':
                dp[i][j] = helper(i + 1, j + 1)
            elif p[j] == '*':
                dp[i][j] = helper(i + 1, j) or helper(i, j + 1)
            else:
                dp[i][j] = False

            return dp[i][j]

        return helper(0, 0)