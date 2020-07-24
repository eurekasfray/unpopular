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
			switch {
			case j % 15 == 0:
				a[i][j] = uint8(quad(i, j, j, 5))
			case j % 3 == 0:
				a[i][j] = uint8(quad(i, j, j, i^j))
				a[i][j] = uint8(i^j)
			case j % 5 == 0:
				a[i][j] = uint8(quad(i, j, j, (i+j)/2))
			default:
				a[i][j] = 128
			}
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
