/*
	Created by Jose Joya on 28/09/22.
 */
#include "HealCheck.hpp"

void HandleHealCheckRoutes(crow::SimpleApp& app) {
	CROW_ROUTE(app, "/health")([](){
		crow::json::wvalue resp;
		resp["status"] = "Online";
		return resp;
	});
}
