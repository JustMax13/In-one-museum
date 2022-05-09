#include <iostream>
#include "Workers.h"
#include "Exhibist.h"
using namespace museum;

//#define FirstExample
//#define SecondtExample
//#define ThirdtExample
//#define FourthExample

void main()
{
#ifdef FirstExample
	Guardian Denis("Денис", "Уминський", 15000);

	Cashier Vladimir("Владимир", "Ганькров", 9500);

	TourGuide Natalia("Наталія", "Зойчук", 12000);
	TourGuide Mask("Маск", "Обельгемович", 11000);

	Denis.ShowAllInfoAboutWorkers();
	Natalia.ShowAllInfoAboutWorkers();

	Vladimir.TheRoleOfTheWorker();
	Mask.TheRoleOfTheWorker();

#endif //FirstExample


#ifdef SecondtExample
	Guardian Denis("Денис", "Уминський", 15000);
	Guardian Mike("Майк", "Джонсон", 25000);

	Cashier Vladimir("Владимир", "Ганькров", 9500);

	TourGuide Natalia("Наталія", "Зойчук", 12000);

	Vladimir.Help(Mike);
	Natalia.Help(Denis);
	// Denis.Help() - охоронці не можуть кликати на допомогу, у них немає методу Help()

#endif // SecondtExample


#ifdef ThirdtExample
	Painting BlackSquare(1915,140000000, "Чорний Квадрат", "Малевич Казимир Северинович","Україна");
	Sculpture BlackBird(-4000, 1000000, "Чорний птах"); // вигадана скульптура
    VintageTools YoshimasBrush(932, 100000000, "Пензлик Ійосіми", "невідомий", "Японія"); // вигаданий інструмент

	BlackSquare.ShowAllInfoInConcole();
	BlackBird.ShowAllInfoInConcole();
	YoshimasBrush.ShowAllInfoInConcole();

#endif // ThirdExample


#ifdef FourthExample
	Painting BlackSquare(1915, 140000000, "Чорний Квадрат", "Малевич Казимир Северинович", "Україна");

	BlackSquare.WriteTheStory("«Чорний квадрат» («Чорний супрематичний квадрат») — картина українського художника-авангардиста "
		"Казимира Малевича, виконана в стилі супрематизму, найімовірніше, в 1915 році, коли він проживав у Росії. Зберігається в Державній Третьяковській галереї в Москві. "
		"Цю картину Малевич вважав вершиною своєї творчості, адже на ній немає жодних предметів — якщо традиційне образотворче мистецтво наслідує щось із дійсності, то ця картина не наслідує нічого; "
		" вона не мистецтво як зображення чогось конкретного, вона — мистецтво як узагальнена форма та колір.");

	BlackSquare.Story();
#endif // FourthExample

}
