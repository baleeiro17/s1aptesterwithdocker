ies = []
ies.append({ "iei" : "", "value" : "EPS attach type", "type" : "EPS attach type", "reference" : "9.9.3.11", "presence" : "M", "format" : "V", "length" : "1/2"})
ies.append({ "iei" : "", "value" : "EPS mobile identity", "type" : "EPS mobile identity", "reference" : "9.9.3.12", "presence" : "M", "format" : "LV", "length" : "5-12"})
ies.append({ "iei" : "", "value" : "UE network capability", "type" : "UE network capability", "reference" : "9.9.3.34", "presence" : "M", "format" : "LV", "length" : "3-14"})
ies.append({ "iei" : "", "value" : "ESM message container", "type" : "ESM message container", "reference" : "9.9.3.15", "presence" : "M", "format" : "LV-E", "length" : "5-n"})
ies.append({ "iei" : "19", "value" : "Old P-TMSI signature", "type" : "P-TMSI signature", "reference" : "9.9.3.26", "presence" : "O", "format" : "TV", "length" : "4"})
ies.append({ "iei" : "50", "value" : "Additional GUTI", "type" : "EPS mobile identity", "reference" : "9.9.3.12", "presence" : "O", "format" : "TLV", "length" : "13"})
ies.append({ "iei" : "52", "value" : "Last visited registered TAI", "type" : "Tracking area identity", "reference" : "9.9.3.32", "presence" : "O", "format" : "TV", "length" : "6"})
ies.append({ "iei" : "5C", "value" : "DRX parameter", "type" : "DRX parameter", "reference" : "9.9.3.8", "presence" : "O", "format" : "TV", "length" : "3"})
ies.append({ "iei" : "31", "value" : "MS network capability", "type" : "MS network capability", "reference" : "9.9.3.20", "presence" : "O", "format" : "TLV", "length" : "4-10"})
ies.append({ "iei" : "13", "value" : "Old location area identification", "type" : "Location area identification", "reference" : "9.9.2.2", "presence" : "O", "format" : "TV", "length" : "6"})
ies.append({ "iei" : "9-", "value" : "TMSI status", "type" : "TMSI status", "reference" : "9.9.3.31", "presence" : "O", "format" : "TV", "length" : "1"})
ies.append({ "iei" : "11", "value" : "Mobile station classmark 2", "type" : "Mobile station classmark 2", "reference" : "9.9.2.4", "presence" : "O", "format" : "TLV", "length" : "5"})
ies.append({ "iei" : "20", "value" : "Mobile station classmark 3", "type" : "Mobile station classmark 3", "reference" : "9.9.2.5", "presence" : "O", "format" : "TLV", "length" : "2-34"})
ies.append({ "iei" : "40", "value" : "Supported Codecs", "type" : "Supported Codec List", "reference" : "9.9.2.10", "presence" : "O", "format" : "TLV", "length" : "5-n"})
ies.append({ "iei" : "F-", "value" : "Additional update type", "type" : "Additional update type", "reference" : "9.9.3.0B", "presence" : "O", "format" : "TV", "length" : "1"})
ies.append({ "iei" : "5D", "value" : "Voice domain preference and UE usage setting", "type" : "Voice domain preference and UE usage setting", "reference" : "9.9.3.44", "presence" : "O", "format" : "TLV", "length" : "3"})
ies.append({ "iei" : "D-", "value" : "Device properties", "type" : "Device properties", "reference" : "9.9.2.0A", "presence" : "O", "format" : "TV", "length" : "1"})
ies.append({ "iei" : "E-", "value" : "Old GUTI type", "type" : "GUTI type", "reference" : "9.9.3.45", "presence" : "O", "format" : "TV", "length" : "1"})
ies.append({ "iei" : "C- ", "value" : "MS network feature support", "type" : "MS network feature support", "reference" : "9.9.3.20A", "presence" : "O", "format" : "TV", "length" : "1"})
ies.append({ "iei" : "10", "value" : "TMSI based NRI container", "type" : "Network resource identifier container", "reference" : "9.9.3.24A", "presence" : "O", "format" : "TLV", "length" : "4"})
ies.append({ "iei" : "6A", "value" : "T3324 value", "type" : "GPRS timer 2", "reference" : "9.9.3.16A", "presence" : "O", "format" : "TLV", "length" : "3"})
ies.append({ "iei" : "5E", "value" : "T3412 extended value", "type" : "GPRS timer 3", "reference" : "9.9.3.16B", "presence" : "O", "format" : "TLV", "length" : "3"})
ies.append({ "iei" : "6E", "value" : "Extended DRX parameters", "type" : "Extended DRX parameters", "reference" : "9.9.3.46", "presence" : "O", "format" : "TLV", "length" : "3"})
msg_list[key]["ies"] = ies
