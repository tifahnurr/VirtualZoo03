/** @class DietType
  * kelas untuk menyimpan banyaknya porsi makanan yang dibutuhkan
  */
class DietType{
  public:
    /** @brief Constructor.
      * Menciptakan DietType kosong yang memiliki portion 0
      */
    DietType();
    /** @brief Constructor with parameter.
      * Menciptakan DietType dengan portion sebnyak p
      * @param banyaknya porsi makanan yang dibutuhkan per hewan
      */
    DietType(int p);
    /** @brief Copy Constructor.
      */
    DietType(const DietType&);
    virtual void feed ()=0;
    
    /** @brief getCode.
      * Mengembalikan satu char yang merupakan kode pembeda
      */
    char getCode();
    
    /** @brief getPortion.
      * Mengembalikan porsi hewan relatif terhadap berat badan
      */
    int getPortion();
      
  
  protected:
    int umum=400;
    int portion;
    char code;
};
