package apt_test

import (
	"testing"

	"github.com/arges/apt-go"
)

func TestList(t *testing.T) {
	c := apt.NewApt()
	c.List()
}
