package longestsubstringwithoutrepeatingcharacters

func lengthOfLongestSubString(s string) int {
	if len(s) == 0 {
		return 0
	}

	var bitSet [256]bool
	res, left, right := 0, 0, 0

	for left < len(s) {
		if bitSet[s[right]] {
			bitSet[s[left]] = false
			left++
		} else {
			bitSet[s[right]] = true
			right++
			if right-left > res {
				res = right - left
			}
			if right == len(s) {
				break
			}
		}
	}

	return res
}
