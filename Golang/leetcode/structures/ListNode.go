package structures

import "fmt"

type ListNode struct {
	Val  int
	Next *ListNode
}

func List2Ints(head *ListNode) []int {
	limit := 100
	times := 0

	res := []int{}

	for head != nil {
		times++
		if times > limit {
			msg := fmt.Sprintf("List2Ints: list too long, limit: %d", limit)
			panic(msg)
		}

		res = append(res, head.Val)
		head = head.Next
	}

	return res
}

func Ints2List(nums []int) *ListNode {
	if len(nums) == 0 {
		return nil
	}

	l := &ListNode{}
	t := l
	for _, v := range nums {
		t.Next = &ListNode{Val: v}
		t = t.Next
	}

	return l.Next
}

func Traverse(head *ListNode) {
	for head != nil {
		fmt.Printf("ListNode{Val: %d}\n", head.Val)
		head = head.Next
	}
}

func MakeNode(listVal []int) *ListNode {
	if len(listVal) == 0 {
		return nil
	}

	head := &ListNode{Val: listVal[0]}
	current := head
	for _, value := range listVal[1:] {
		current.Next = &ListNode{Val: value}
		current = current.Next
	}

	return head
}
