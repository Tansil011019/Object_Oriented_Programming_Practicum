class Kompleks {
    private static int n_kompleks = 0;
    private int real;
    private int imaginer;

    public Kompleks() {
        this.real = 0;
        this.imaginer = 0;
        n_kompleks++;
    }

    public Kompleks(int real, int imaginer) {
        this.real = real;
        this.imaginer = imaginer;
        n_kompleks++;
    }

    public int getReal() {
        return this.real;
    }

    public int getImaginer() {
        return this.imaginer;
    }

    public void setReal(int real) {
        this.real = real;
    }

    public void setImaginer(int imaginer) {
        this.imaginer = imaginer;
    }

    public Kompleks plus(Kompleks b) {
        return new Kompleks(this.real + b.getReal(), this.imaginer + b.getImaginer());
    }

    public Kompleks minus(Kompleks b) {
        return new Kompleks(this.real - b.getReal(), this.imaginer - b.getImaginer());
    }

    public Kompleks multiply(Kompleks b) {
        int real = (this.real * b.getReal()) - (this.imaginer * b.getImaginer());
        int imaginer = (this.imaginer * b.getReal()) + (this.real * b.getImaginer());
        return new Kompleks(real, imaginer);
    }

    public Kompleks multiply(final int num) {
        return new Kompleks(this.real * num, this.imaginer * num);
    }

    public static int countKompleksInstance() {
        return n_kompleks;
    }

    public void print() {
        if (this.imaginer == 0) {
            System.out.println(this.real);
        } else if (this.real == 0) {
            System.out.println(this.imaginer + "i");
        } else {
            if (this.imaginer > 0) {
                System.out.println(this.real + "+" + this.imaginer + "i");
            } else {
                System.out.printf("%d%di\n", this.real, this.imaginer);
            }
        }
    }
}