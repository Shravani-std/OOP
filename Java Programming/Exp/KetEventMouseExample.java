import javax.swing.*;
import java.awt.event.*;

public class KetEventMouseExample{
	public static void main(String[] arg[]){
		JFrame f = new JFram("Key Mouse" );
		f.setSize(500,600);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 
		JPanel p = new JPanel();
		JLable key = new JLable("Key pressed : ");
		JLabel mouse = new JLable("Mouse" );

		f.add(p);
		p.add(key);
		p.add(mouse);

f.addMouseListner(new MouseAdapter(){
public void keyTyped(KeyEvent e){
keyLable.setText("Key pressed: ");
}

});

f.addMouseListner(new MouseAdapter(){
public void mouseClicked(MouseEvent e){
mouseLable.setText("Mouse Event: ");
}
});
f.setFocusable(true);
f.requestFocusInWindow();
f.setVisible(true);
}
}