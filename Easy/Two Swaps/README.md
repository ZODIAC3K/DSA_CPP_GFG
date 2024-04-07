<h2><a href="https://www.geeksforgeeks.org/problems/two-swaps--113428/1?page=1&difficulty=Easy&sortBy=difficulty">Two Swaps</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a permutation of first&nbsp;<strong>N</strong>&nbsp;natural numbers as an array<strong> A[ ]</strong></span><span style="font-size: 18px;">. Your task is to sort&nbsp;the&nbsp;array&nbsp;in <strong>exactly</strong> two swaps. If It is possible to sort the array then return True&nbsp;otherwise return&nbsp;False.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> You can swap same pair of index two times.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 4
A[] = {4, 3, 2, 1}
<strong>Output: </strong>Yes<strong>
Explanation: 
</strong>swap(A[1], A[4]), now A[] = {1, 3, 2, 4}
swap(A[2], A[3]), now A[] = {1, 2, 3, 4}</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 4
A[] = {4, 3, 1, 2}
<strong>Output: </strong>No<strong>
Explanation: </strong>
Not possible to sort the array in 2 swaps.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>The task is to complete the function <strong>check() </strong>which takes the array <strong>A[ ]</strong>&nbsp;and its size <strong>N</strong>&nbsp;as input parameters&nbsp;and returns the boolean value <strong>True</strong> if it is possible to sort the array in exactly 2 swaps,&nbsp;otherwise returns <strong>False</strong>.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤&nbsp;N ≤&nbsp;10<sup>5</sup><br>1 ≤&nbsp;A[i] ≤&nbsp;N</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;