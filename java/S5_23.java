
final class Test {
    final int internal_mark = 20;

    final void Result(int mark) {
        int result = mark + internal_mark;
        System.out.println("Your Total Result is " + result);
    }
}

public class S5_23 {
    public static void main(String[] args) {
        Test t = new Test();
        t.Result(70);
    }
}