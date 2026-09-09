# 486. Predict the Winner

**Difficulty:** Medium
**Tags:** Array, Math, Dynamic Programming, Recursion, Minimax, Game Theory, Zero-Sum Game
**Link:** https://leetcode.com/problems/predict-the-winner/

---

You are given an integer array `nums`.

Two players are playing a game with this array: Player 1 and Player 2.

Player 1 and Player 2 take turns, with Player 1 starting first. Both players start the game with a score of 0.

At each turn, the current player takes the number at **either end** of the array (i.e., `nums[0]` or `nums[nums.length - 1]`), **removing** it from the array and adding it to their own score. The game ends when there are no more elements in the array.

Return `true` if Player 1's final score is **greater than or equal** to Player 2's final score, and `false` otherwise.

**Note** that a tie counts as a win for Player 1. You may assume that both players play optimally.

Example 1:

**Input:** nums = [1,5,2]

**Output:** false

**Explanation:**

	- Player 1 must open by taking either 1 or 2, and both choices lead to the same result.

	- If Player 1 takes 1, the array becomes `[5,2]`. Player 2 takes 5, leaving 2 for Player 1.

	- If Player 1 takes 2, the array becomes `[1,5]`. Player 2 takes 5, leaving 1 for Player 1.

	- Either way, Player 1 finishes with `1 + 2 = 3` and Player 2 finishes with `5`. Player 1 can never win, so return `false`.

Example 2:

**Input:** nums = [1,5,233,7]

**Output:** true

**Explanation:**

	- Player 1 first takes 1, leaving `[5,233,7]`. Player 2 must then choose between 5 and 7, and no matter which number Player 2 chooses, Player 1 can take 233 on the next turn.

	- Player 1 finishes with a higher score (234) than Player 2 (12), so return `true`.

**Constraints:**

	- `1 <= nums.length <= 20`

	- `0 <= nums[i] <= 107`

