/*
 Created by Jose Joya on 28/09/22.
 */
#include "Api.hpp"

void HandleApiRoutes(crow::SimpleApp& app){
	
	CROW_ROUTE(app, "/api/info")([](){
		crow::json::wvalue response;
		response["Version"] = "0.1.0";
		response["Language"] = "C++";
		response["Standard"] = "C++20";
		return response;

	});
}
