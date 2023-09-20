package main

import (
	"fmt"
	Add_Two_Numbers "leetcode/0002.Add_Two_Numbers"
	Node "leetcode/structures"
)

func main() {
	fmt.Println("Main Process")

	l1 := Node.MakeNode([]int{2, 4, 3})
	l2 := Node.MakeNode([]int{5, 6, 4})
	l3 := Add_Two_Numbers.AddTwoNumbers(l1, l2)

	fmt.Println(Node.List2Ints(l3))

	fmt.Println("End Process")
}
