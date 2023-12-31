import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.geometry.Pos;
import javafx.scene.control.Button;
import javafx.scene.layout.HBox;
import javafx.scene.layout.Pane;
import javafx.scene.layout.BorderPane;
import javafx.scene.text.Text;
import javafx.scene.control.RadioButton;
import javafx.scene.control.ToggleGroup;
import javafx.scene.paint.Color;

public class App extends Application 
{
    protected Text text = new Text(50, 50, "Japan");

    @Override 
    public void start(Stage primaryStage) 
    {
        HBox paneForButtons = new HBox(20);
        Button btLeft = new Button("LEFT");
        Button btRight = new Button("RIGHT");
        paneForButtons.getChildren().addAll(btLeft, btRight);
        paneForButtons.setAlignment(Pos.CENTER);
        BorderPane pane = new BorderPane();
        pane.setBottom(paneForButtons);

        HBox paneForRadioButtons = new HBox(20);
        RadioButton rbRed = new RadioButton("Red");
        RadioButton rbBlack = new RadioButton("Black");
        RadioButton rbGreen = new RadioButton("Green");
        paneForRadioButtons.getChildren().addAll(rbRed, 
        rbBlack, rbGreen);

        ToggleGroup group = new ToggleGroup();
        rbRed.setToggleGroup(group);
        rbBlack.setToggleGroup(group);
        rbGreen.setToggleGroup(group);

        Pane paneForText = new Pane();
        paneForText.setStyle("-fx-border-color: black");
        paneForText.getChildren().add(text);
        pane.setCenter(paneForText);
        pane.setTop(paneForRadioButtons);

        btLeft.setOnAction(e -> text.setX(text.getX() - 10));
        btRight.setOnAction(e -> text.setX(text.getX() + 10));

        rbRed.setOnAction(e -> {
        if (rbRed.isSelected())
            text.setFill(Color.RED);
        });

        rbBlack.setOnAction(e -> {
        if (rbBlack.isSelected()) 
            text.setFill(Color.BLACK);
        });

        rbGreen.setOnAction(e -> {
        if (rbGreen.isSelected()) 
            text.setFill(Color.GREEN);
        });

        Scene scene = new Scene(pane, 450, 150);
        primaryStage.setTitle("Assign_4_2");
        primaryStage.setScene(scene);
        primaryStage.show();
    }
    public static void main (String[] args)  
    {
        launch(args);  
    }  
}  