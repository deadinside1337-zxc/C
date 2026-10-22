#include <windows.h>
#include <stdio.h>
#include <locale.h>

int main() {
	// Настройка русского языка для консоли (на всякий случай)
	setlocale(LC_ALL, "Russian");
	
	// Скрываем окно консоли, чтобы ЗЕНЯ видел только всплывающие окна
	FreeConsole();
	
	// Окно 1: Предупреждение
	MessageBoxW(NULL, 
				L"ВНИМАНИЕ! Обнаружена критическая ошибка системы. За ПК сидит ЗЕНЯ-ФАРШ!", 
				L"Системный сбой", 
				MB_OK | MB_ICONWARNING | MB_SYSTEMMODAL);
	
	// Окно 2: Фейковая угроза
	MessageBoxW(NULL, 
				L"Запущен процесс форматирования диска C:\\...\nПричина: ЗЕНЯ слишком много ЕБЛАНИТ.", 
				L"Удаление данных", 
				MB_OK | MB_ICONERROR | MB_SYSTEMMODAL);
	
	// Окно 3: Выбор без выбора (какую бы кнопку Зеня ни нажал, вылезет следующее окно)
	int result = MessageBoxW(NULL, 
							 L"Вы хотите остановить удаление файлов Windows?", 
							 L"Выбор за вами", 
							 MB_YESNO | MB_ICONQUESTION | MB_SYSTEMMODAL);
	
	// Окно 4: Реакция на его выбор
	if (result == IDYES) {
		MessageBoxW(NULL, 
					L"Кнопка 'Да' временно заблокирована ЗЕНЕЙ. Продолжаем удаление...", 
					L"Отказ в доступе", 
					MB_OK | MB_ICONEXCLAMATION | MB_SYSTEMMODAL);
	} else {
		MessageBoxW(NULL, 
					L"ЗЕНЯ нажал 'Нет'. Отлично, удаляем еще быстрее!", 
					L"Процесс пошел", 
					MB_OK | MB_ICONEXCLAMATION | MB_SYSTEMMODAL);
	}
	
	// Окно 5: Финал
	MessageBoxW(NULL, 
				L"Ладно, ЗЕНЯ, расслабься! Это был просто пранк. Компьютер в безопасности. Улыбнись! :)", 
				L"Конец игры", 
				MB_OK | MB_ICONINFORMATION | MB_SYSTEMMODAL);
	
	return 0;
}

