import java.util.*;

class BiCycle{
String define_me(){
return "a vehicle with pedals.";
}
}

class MotorCycle extends BiCycle{
String define_me(){
return "a cycle with an engine.";
}

MotorCycle(){
	System.out.println("Hello I am a motorcycle, I am "+ define_me()); // returns the method of child class

	String temp=super.define_me(); // super returns the method of super class

	System.out.println("My ancestor is a cycle who is "+ temp );
}


}
class method_overriding_using_super{
public static void main(String []args){
MotorCycle M=new MotorCycle();
}
} 