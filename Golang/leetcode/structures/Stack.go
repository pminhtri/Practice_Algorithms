package structures

type Stack struct {
	nums []int
}

func NewStack() *Stack {
	return &Stack{nums: []int{}}
}

func (s *Stack) Push(num int) {
	s.nums = append(s.nums, num)
}

func (s *Stack) Pop() int {
	res := s.nums[len(s.nums)-1]
	s.nums = s.nums[:len(s.nums)-1]

	return res
}

func (s *Stack) Empty() bool {

	return len(s.nums) == 0
}
