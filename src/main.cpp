#include "crow.h"
#include "HealCheck.hpp"
#include "Api.hpp"

void HandleDefaultRoute(crow::SimpleApp& app){
	CROW_ROUTE(<#app#>, "/")([](){
		return "Welcome to Crow, The C++ Web Library";

	});
}


int main() {
	crow::SimpleApp app;

	HandleDefaultRoute(app);
	HandleApiRoutes(app);
	HandleHealCheckRoutes(app);

	app.port(3000).multithreaded().run();

	return 0;
}
