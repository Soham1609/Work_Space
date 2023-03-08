class Tollywood{

    void screenplay1 () {System.out.print("Tollywood");}}
    
    class Collection extends Tollywood{
    
    void screenplay1 ()
    
    {System.out.print ("Collection");}}
    
    class Film extends Collection{
    
    void screenplayl() {System.out.print ("Flim");}}
    
    class Bollywood extends Film
     
    
    {
        void screenplay1 (){
        System.out.print("Paneli");}
    
    void screenplay2(){
    
    screenplay1();
    
    ((Film) this).screenplay1();
    
    ((Collection) this).screenplay1(); // Line 1 // Line 2
    
    ((Tollywood) this).screenplay1();}
    
    public static void main(String[] args)
    
    {new Bollywood ().screenplay2();}}