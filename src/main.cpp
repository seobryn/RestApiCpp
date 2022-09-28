#include "crow.h"

int main() {
	crow::SimpleApp app;

	CROW_ROUTE(app, "/")([](){
		crow::json::wvalue res;
		res["status"] = "Connected";
		return res;
	});

	app.port(3000).multithreaded().run();

	return 0;
}
