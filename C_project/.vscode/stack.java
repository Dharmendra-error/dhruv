public class stack{
    static int[] stack = new int[5];
    static int top = -1;

    static void push(int val){
        if (top == stack.length - 1){
            System.out.println("Stack overflow");
            
        }
        else{
            stack[++top] = val;
        }
    }
    static void pop(){
        if(top == -1){
            System.out.println("Stack underflow");
            
        }
        else{
            System.out.println("Deleted element"+stack[top--]);
        }
    }
    static void display(){
        for(int i = top ; i >=0 ; i--){
            System.out.println(stack[i]);
        }
    }
    public static void main(String[] args){
        push(10);
        push(12);
        push(15);

        display();

        pop();

        display();
    }
}