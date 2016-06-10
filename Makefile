# TODO: get this working with cgo directives in lib.go.
export CGO_LDFLAGS=-lapt-pkg -g -O2

all:
	go build

check:
	go test
