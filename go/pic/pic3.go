package main

import "code.google.com/p/go-tour/pic"

func Pic(dx, dy int) [][]uint8 {
	// Allocate two-dimensioanl array.
	a := make([][]uint8, dy)
	for i := 0; i < dy; i++ {
		a[i] = make([]uint8, dx)
	}
	
	// Do something.
	for i := 0; i < dy; i++ {
		for j := 0; j < dx; j++ {
			a[i][j] = uint8(quad(dy/(i+1), dx/(j+1), dx/(j+1), dy/(i+1)^dx/(j+1)))
		}
	}	
	return a
}

func quad(a, b, c, v int) int {
	return (((a*v)^2) + (b*v) + c)
}

func main() {
	pic.Show(Pic)
}
