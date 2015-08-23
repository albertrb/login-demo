Action()
{

	//new comment
	//TODO 
	
	
	
	
	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.8,he;q=0.6");

	web_url("analytics.js", 
		"URL=https://www.google-analytics.com/analytics.js", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&cb=sl&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&alpha=1", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_add_cookie("PREF=ID=1111111111111111:FF=0:LD=en:TM=1433680864:LM=1434459271:GM=1:S=Mc8W5KdcGuEZ7ja9; DOMAIN=www.google.com");

	web_add_cookie("SID=DQAAAFcBAACGWPYA12q04KgDTbHKxAnrW46PIHyWSe_iYw8XL-bHZs4aryBvYJsrtm_iAMzwUjwGnDfQvqetndInFBHcfV_vICUXKlfSpIcfi5t5F55CJBVPjBMQzK9HRN3kvnZpJg9nyFtIyCXy4G0dHi7a9un2HQ7jYy9W8o1KJAnmzQp_cuKOc9oixmOTM-GH_pu8-aU9-0e87nqoAJjr10dfuwk5wQuujJmQ4_ceb2CdxqP6cJCDNc742SjQ9iNqlijF16Nb8fdJvaTXaBY5JMxV9PDa-wCIg6Xhlz4bQMCUdok3BHS8iMjNz3RLYp6aQYvjHNBqlvANKYKoKd712wzRhm6HmIgnOEnRpM-PQoOnGmJHYM6VtFaOiAbRx6BnzfPxV8BSFwgZmoczl8_BNO26uehtXd2nN-YC6cHtfKr1oFSuj7jswxR46a-9Pt8zIGL36qCUqZL4FXB6Uo8kwpOlAX5j; "
		"DOMAIN=www.google.com");

	web_add_cookie("HSID=A_lI2eD2tP0fX0Z3d; DOMAIN=www.google.com");

	web_add_cookie("SSID=An0TeGlyOv_NwUD5v; DOMAIN=www.google.com");

	web_add_cookie("APISID=bYCMy6O6CztJQaQB/AbCoEzKEC2ePdNKhH; DOMAIN=www.google.com");

	web_add_cookie("SAPISID=qPbvuap-8gqNjbIO/AKDErfLs-3dOf0wfz; DOMAIN=www.google.com");

	web_add_cookie("NID=69=XtYf8iCGsFaCILhYKjb_3irN7zpIa_S6D1XBygAj6sPaP9pPxkFVyIvTMXKUavAVFEovUwZSk3UitI3oDTAxT2mMaU15n985uHt1gymexj5fYiSqRa5m6dmzezuUBgzPu-lBX821NSANDJzYTYz1WbxE9JegutFsFJAJIGqsKMyV_nntpwLA-CDkya8Gbw; DOMAIN=www.google.com");

	web_url("seed", 
		"URL=https://clients4.google.com/chrome-variations/seed?osname=win", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.google-analytics.com/ga.js", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5.pb", "Referer=", ENDITEM, 
		"Url=https://www.google.com/searchdomaincheck?format=domain&type=chrome", "Referer=", ENDITEM, 
		LAST);

	return 0;
}