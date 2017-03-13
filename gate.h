
/** @class Gate
  * Kelas Gate untuk membuat gerbang masuk dan keluar
  */
class Gate: public Facility{
	public:
		/**@brief Constructor.
		  *Mengkonstruksi kelas Gate */
		Gate();
		/**@brief Destructor.
		  *Mengdealokasi parameter dari kelas Gate*/
		~Gate();
		
	protected:
		char GateType;
}
