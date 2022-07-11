class StackOverflowDemo {
    static int n = 1;

    static void foo() {
        System.out.printf("Calling foo() again for the %d time\n", n++);
        foo();
    }

    public static void main(String[] args) {
        foo();
    }
}