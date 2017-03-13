
/** @class Facility
  * Kelas Facility untuk membuat fasilitas yang ada di zoo
  */

class Facility: public Cell{
	public:
		/**@brief Constructor.
		  *Mengkonstruksi kelas Facility */
		Facility();
		/**@brief Destructor.
		  *Mengdealokasi parameter dari kelas facility */
		~Facility();
		
	protected:
		string FacilityType;
}
