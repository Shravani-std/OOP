class Parent{
	void show(){
		System.out.println("Welcome To Club!!");
	}
}
class Child extends Parent{
	void show1(){
		System.out.println("Now You can Participate in any event...");
	}
}
class TestInheritance{
	public static void main(String s[]){
		Child ch = new Child();
		ch.show();
		ch.show1();
	}
}