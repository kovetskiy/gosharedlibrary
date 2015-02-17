package main

//extern get_some_int
func c_get_some_int() int

func Test() int {
	cInt := c_get_some_int()

	return cInt*3
}

func main() {
}
